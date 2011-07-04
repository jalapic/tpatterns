function pattern_pool=T_FIND_PATTERNS( events, ep, Nt, pattern_window )
%ep = ps;
%pattern_window = 250;
pattern_pool = ep; % that's our pattern pool, where we are searching for a new patterns
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
        if ~isempty( intersect( pL.Events, pR.Events ) )
            continue
        end
        if pL.Events(end) ~= pR.Events(1)-1
            %continue
        end
        fprintf( '\n%d %d[ %s| %s ]', lp_i, rp_i, pL.String, pR.String);
        % Try to join these patterns
        [new_pattern, found_patterns] = T_ADD_PATTERN( events, ep, pL, pR, 1, pattern_window, Nt);
        if ( found_patterns ~= 0 )
            if ( sum(new_pattern.Lh_maxs)/max( new_pattern.Lh_maxs ) ) > 2.5
            was_new = was_new + 1;
            new_pattern.Theta
            new_pool = [ new_pool new_pattern ];
            end
        end        
    end
end
disp('JJJJJJJJJJJJJJJJJJJJJJ');
new_pool
for i = 1 : numel( pattern_pool )
    pattern_pool( i ).New = false;
end

pattern_pool = [pattern_pool new_pool];
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
        if nnz( ismember( pL.Events, pR.Events ) ) == numel( pL.Events )
%             if abs(numel(pL.Lh_maxs) - numel(pR.Lh_maxs)) < 6
%                 if numel(pL.Events) > 1
%                     to_del = [ to_del lp_i];
%                     fprintf(['\nDelete ' pL.String ' cause ' pR.String]);
%                     %pattern_pool = pattern_pool( [1:lp_i-1-k
%                     %lp_i+1-k:end]);
%                 end
%             end
            for i = 1:numel(pR.Events)
                if nnz( ismember( pL.Events, pR.Events ) ) == numel( pL.Events )
                    R = pR.LhSHIFTED(i,:);
                    if (pL.Lh*R') / ( sqrt( pL.Lh*pL.Lh' ) * sqrt( R*R' ) ) >= 0.6
                        if numel(pL.Events) > 1
                            to_del = [ to_del lp_i];
                            fprintf(['\nEpic ' pL.String ' cause ' pR.String ' SCORE!!!!!!!!!!!!!!!!!!!']);
                            if i>1
                                fprintf(['\nWIN#####################################']);
                            end
                        end
                    end
                end
            end
        end
        if false && (pL.Lh*pR.Lh') / ( sqrt( pL.Lh*pL.Lh' ) * sqrt( pR.Lh*pR.Lh' ) ) >= 0.7
            if numel(pL.Events) > 1 && numel(pL.Events) <= numel(pR.Events) && sum(pL.Lh)<=sum(pR.Lh)
                to_del = [ to_del lp_i];
                fprintf(['\nDelete ' pL.String ' cause ' pR.String ' SCORE!!!!!!!!!!!!!!!!!!!']);
            end
        end
    end
end
to_del = sort(unique(to_del));
while ~isempty(to_del)
    pattern_pool = pattern_pool( [1:(to_del(1)-1) (to_del(1)+1):end]);
    to_del = to_del(2:end);
    to_del = to_del - 1;
end


disp('ITERATION-----------------------------------------------------------------------------------')
end

for p = 1:numel(pattern_pool)
    fprintf('\n %s %d', pattern_pool(p).String, p );
end