% Copyright (C) 2011 by Valeriy Vishnevskiy
% (valera.vishnevskiy[at]yandex.ru)
%
% Permission is hereby granted, free of charge, to any person obtaining a 
% copy of this software and associated documentation files (the 
% "Software"), to deal in the Software without restriction, including 
% without limitation the rights to use, copy, modify, merge, publish, 
% distribute, sublicense, and/or sell copies of the Software, and to permit
% persons to whom the Software is furnished to do so, subject to the 
% following conditions:
% 
% The above copyright notice and this permission notice shall be included 
% in all copies or substantial portions of the Software.
% 
% THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
% OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
% MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
% NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
% DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
% OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
% USE OR OTHER DEALINGS IN THE SOFTWARE.

function [new_pats, patterns_merged] = T_ADD_PATTERN(events, ps, pL, ... 
    pR, mesh_step, pattern_window, Nt, use_cuda, conf )

% Create new pattern by merging given left and right subpatterns,
% connection parameters(shift and variance). Compute Likelihoods and 
% maximums for new pattern 
%
% [new_pats, patterns_merged] = T_ADD_PATTERN(events, ps, pL, pR, ...
% mesh_step, pattern_window, Nt, use_cuda, conf )
%
% Arguments
% events    [ array struct ] Events structure. See README, EVENTS STRUCTURE
% ps  OBSOLETE
% pL        [ 1 x struct ] Left pattern structure(subpattern). See README,
%PATTERN STRUCTURE
% pR         [ 1 x struct ] Right ==||== see previous
% Nt        [ int ]    Length of time period, while we are watching animal.
% use_cuda  [ bool ] Try to use cuda. Will return warning if something is 
%wrong
% conf      [ struct ] configuration structure with algorithm's parameters,
%etc. See README, CONFIG STRUCTURE.
%
% new_pats [ array struct ] Pattern to add(that we found). See README,
%PATTERN STRUCTURE
% patterns_merged [ int ]   Amount of found pattern.
%
% Revisions:
% Author: 18 Jul 2011 Valeriy Vishnevskiy
% Superviser: Dmitry Vetrov

if use_cuda
    [ mus, sigmas, found_patterns ] = T_CMP_LH_DISCR_CUDA( pL, pR, Nt,...
        pattern_window, conf );
else
    [ mus, sigmas, found_patterns ] = T_CMP_LH_DISCR( pL, pR, Nt, ...
        pattern_window, conf );
end
mu = mus;
sigma = sigmas;
patterns_merged = found_patterns;
%ps_new = 0;
new_pats = [];

for j = 1 : found_patterns
    mu = mus(j);
    sigma = sigmas(j);
    ps_new.Events = [ pL.Events pR.Events ];
    %%%Fuck that shit. 
%         if ( numel( pR.Events ) == 1 ) && ( numel( pL.Events ) == 1 ) 
%             ps_new.Theta = [ 0 sigma/sqrt(2); mu sigma/sqrt(2) ];
%         else
%             if numel( pR.Events ) == 1
%                 ps_new.Theta = [ pL.Theta' [mu sigma]']';%pR.CIs(2:end,:)
%             else
%                 pR.Theta(2, 2) = pR.Theta(2, 2) * sqrt( 2 );
%                 ps_new.Theta = [ pL.Theta' [mu sigma]' ...
%                    pR.Theta(2:end, : )']';%pR.CIs(2:end,:)
%             end
%         end
    %trivial mu and sigma add
    ps_new.Theta = [ pL.Theta' [mu sigma]' pR.Theta(2:end, : )']';

    %nex block calculates all likelihoods
    if use_cuda
        ps_new.Lh = T_CALC_LH_CUDA( events, Nt, ps_new, false, ...
            false, 1, conf );
    else
        ps_new.Lh = T_CALC_LH(      events, Nt, ps_new, false, ...
            false, 1, conf );
    end
    ps_new.LhSHIFTED = zeros( numel( ps_new.Events ), Nt );
    ps_new.LhSHIFTED(1,:) = ps_new.Lh;
    for i = 2 : numel( ps_new.Events )
        if use_cuda
            ps_new.LhSHIFTED(i,:) = T_CALC_LH_CUDA( events, Nt, ...
                ps_new, false, false, i, conf,  ps_new.Lh );
        else
            ps_new.LhSHIFTED(i,:) = T_CALC_LH(      events, Nt, ...
                ps_new, false, false, i, conf );
        end
    end
    if use_cuda
        ps_new.LhEND = T_CALC_LH_CUDA( events, Nt, ps_new, false, ...
            true, 1, conf );
    else
        ps_new.LhEND = T_CALC_LH(      events, Nt, ps_new, false, ...
            true, 1, conf );
    end

    ps_new.String = [pL.String ' ' pR.String];

    [ ps_new.Lh_mins, ps_new.Lh_maxs ] =  T_GET_MINMAX( ...
        ps_new.Lh,    1, sum( ps_new.Theta(:,1) ), ps_new, conf );
    [ ps_new.LhEND_mins, ps_new.LhEND_maxs ] = T_GET_MINMAX( ...
        ps_new.LhEND, 1, sum( ps_new.Theta(:,1) ), ps_new, conf );
    ps_new.New = true;

    new_pats = [new_pats, ps_new];
end
