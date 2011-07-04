function [pLR, ddf] = T_CMP_2_PATTERNS(patL_ind, patR_ind, window)
% patL_ind - indexes of ends of left pattern
% patR_ind - indexes of beginings of right pattern
pLR = zeros( size( patL_ind, 2 ),  size( patR_ind, 2 ) );
for i = 1 : size( patL_ind, 2 )
    for j = 1 : size( patR_ind, 2)
        pLR(i,j) = patR_ind(j) - patL_ind(i);
        if pLR(i,j) > window
            pLR(i,j) = 0;
        end
    end
end
pLR = ( pLR > 0 ) .* pLR;
ddf = sort( nonzeros ( pLR ) );