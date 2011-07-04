function [pLR, ddf] = T_CMP_2_PATTERNS(patL, patR, window)

pLR = zeros( size( patL.DS, 2 ),  size( patR.DS, 2 ) );
for i = 1 : size( patL.DS, 2)
    for j = 1 : size( patR.DS, 2)
        pLR(i,j) = patR.DS(j).ind(1) - patL.DS(i).ind(end);
        if pLR(i,j) > window
            pLR(i,j) = 0;
        end
    end
end
pLR = ( pLR > 0 ) .* pLR;
ddf = sort( nonzeros ( pLR ) );