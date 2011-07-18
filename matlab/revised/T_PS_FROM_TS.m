% Copyright (C) 2011 by Valeriy Vishnevskiy
% (valera.vishnevskiy[at]yandex.ru)
%
% Permission is hereby granted, free of charge, to any person obtaining a copy
% of this software and associated documentation files (the "Software"), to deal
% in the Software without restriction, including without limitation the rights
% to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
% copies of the Software, and to permit persons to whom the Software is
% furnished to do so, subject to the following conditions:
% 
% The above copyright notice and this permission notice shall be included in
% all copies or substantial portions of the Software.
% 
% THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
% IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
% FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
% AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
% LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
% OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
% THE SOFTWARE.


function ps = T_PS_FROM_TS( events, Nt, sigma, conf )
% Build pseudo-patterns structure from initial time series.
%
% ps = T_PS_FROM_TS( events, Nt, sigma, conf )
%
% Arguments
% events    [ struct ] Events structure. See README, EVENTS STRUCTURE.
% Nt        [ int ]    Length of time period, while we are watching animal.
% sigma     [ scalar ] initial STD for 1-event pattern. Long story short, 
%set that parameter to 1.
% conf      [ struct ] configuration structure with algorithm's parameters,
% etc. See README, CONFIG STRUCTURE.
%
% ps        [ struct ] Pattern structure, containing pseudopatterns. See
%README, PATTERN STRUCTURE.
%
% Revisions:
% Author: 18 Jul 2011 Valeriy Vishnevskiy
% Superviser: Dmitry Vetrov


ps = struct('Events', {}, 'Theta', {}, 'String', {}, 'Lh', {}, 'LhEND', {}, 'Lh_mins', {}, 'Lh_maxs', {}, 'LhEND_mins', {}, 'LhEND_maxs', {});
for i = 1 : size(events,2)
    ps(i).Events = [i];
    ps(i).Theta = [0 sigma];
    ps(i).String = events(i).event_name;
    ps(i).Lh = T_CALC_LH_CUDA( events, Nt, ps(i), false, false, 1, conf);
    ps(i).LhSHIFTED = zeros( 1, Nt );
    ps(i).LhSHIFTED = ps(i).Lh;
    ps(i).LhEND = ps(i).Lh;
    ps(i).New = true;
    [ ps(i).Lh_mins, ps(i).Lh_maxs ] =  T_GET_MINMAX( ps(i).Lh, 1, 1, ps(i), conf );
    [ ps(i).LhEND_mins, ps(i).LhEND_maxs ] = T_GET_MINMAX( ps(i).LhEND, 1, 1, ps(i), conf );
end