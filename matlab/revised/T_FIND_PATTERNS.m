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


function pattern_pool = T_FIND_PATTERNS( events, ep, Nt, ...
    pattern_window, use_cuda, conf )
% Perform probabilistic patterns search in one file
%
% patterns = T_FIND_PATTERNS( events, ep, Nt, pattern_window, use_cuda, 
% conf )
%
% Arguments
% events    [ struct ] Events structure. See README, EVENTS STRUCTURE.
% ep        [ struct ] Patterns structure. Must(!) be initialized with 
%pseudopatterns. README, PATTERN STRUCTURE.
% Nt        [ int ] Length of time period, we are watching animal
% pattern_widow [scalar] TO DELETE, obsolete
% use_cuda  [ bool ] Try to use cuda. Will return warning if something is 
%wrong
% conf      [ struct ] configuration structure with algorithm's parameters,
%etc. See README, CONFIG STRUCTURE.
%
% pattern_pool [ struct ] All the patterns that we found. See README, 
%PATTERN STRUCTURE.
%
% Revisions:
% Author: 18 Jul 2011 Valeriy Vishnevskiy
% Superviser: Dmitry Vetrov

pattern_pool = ep; % initialized found patterns with events
was_new = 1;
new_pool = [];
while ( was_new > 0 )
was_new = 0;
new_pool = [];
for lp_i = 1 : numel( pattern_pool )
    for rp_i = 2 : numel( pattern_pool )
        % Now we have left and right pattern indexes, that we want to check
        pL =  pattern_pool( lp_i );
        pR =  pattern_pool( rp_i );
        if ( ~( pL.New || pR.New ) )
            continue
        end
        %control same events in patterns
        if ( ~isempty( intersect( pL.Events, pR.Events ) ) ) && ...
                ( ~conf.allow_same_events )
            continue
        end
        fprintf( '\n%d %d[ %s| %s ]', lp_i, rp_i, pL.String, pR.String);
        
        % Try to join these patterns
        [new_pats, found_patterns] = T_ADD_PATTERN( events, ep, pL, pR, ...
            1, pattern_window, Nt, use_cuda, conf );
        
        if ( found_patterns ~= 0 )
            for i = 1 : found_patterns 
                new_pattern = new_pats(i);
                %if ( sum(new_pattern.Lh_maxs)/max( new_pattern.Lh_maxs ...
                %) ) > 2.5
                if length( new_pattern.Lh_maxs ) >= conf.Nmin
                    was_new = was_new + 1;
                    %new_pattern.Theta
                    % Here we actually will add pattern
                    new_pool = [ new_pool new_pattern ]; 
                end
            end
        end        
    end
end
new_pool
% Show that we checked patterns
for i = 1 : numel( pattern_pool )
    pattern_pool( i ).New = false;
end

pattern_pool = [ pattern_pool new_pool ];
to_del = [];
for lp_i = 1 : numel( pattern_pool )
    for rp_i = 1 : numel( pattern_pool )
        % Now we have left and right pattern indexes, that we want to check
        pL =  pattern_pool( lp_i );
        pR =  pattern_pool( rp_i );
        if lp_i == rp_i
            continue;
        end
        if ismember( lp_i, to_del ) || ismember(rp_i, to_del)
            continue
        end
        if numel(pL.Events) <= 1
            continue;
        end
            
        if nnz( ismember( pL.Events, pR.Events ) ) == numel( pL.Events )
            for i = 1:numel(pR.Events)
                R = pR.LhSHIFTED(i,:);
                if (pL.Lh*R') / ( sqrt( pL.Lh*pL.Lh' ) * ...
                        sqrt( R*R' ) )  >= conf.cor
                    to_del = [ to_del lp_i];
                    fprintf(['\nEpic ' pL.String ' cause ' pR.String ...
                        ' SCORE!!!!!!!!!!!!!!!!!!!']);
                    if i>1
                        fprintf(['\nWIN##############################']);
                    end
                end
            end
        end
        
    end
end
to_del = sort(unique(to_del));
while ~isempty(to_del)
    pattern_pool = pattern_pool( [ 1:(to_del(1)-1) (to_del(1)+1):end ] );
    to_del = to_del(2:end);
    to_del = to_del - 1;
end


disp('ITERATION---------------------------------------------------------')
end

for p = 1:numel(pattern_pool)
    fprintf('\n %s %d', pattern_pool(p).String, p );
end