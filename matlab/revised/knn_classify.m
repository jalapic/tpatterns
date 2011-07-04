function [labels] = knn_classify( dist_table, classes, k )
Nfeat = size( dist_table, 2);
Nobj  = size( dist_table, 1);
Ncla  = length( unique( classes ) );

for i = 1 : Nobj
    r = dist_table( i, : );
    [~, ix] = sort( r, 'descend' );
    
    votes = classes( ix(1:k) );
    vu = unique( votes );
    if length(vu) == 1
        labels( i ) = votes( 1 );
        continue;
    end
    [a] = hist( votes, vu );
    [~, ix] = max( a );
    labels( i ) = vu( ix );
end