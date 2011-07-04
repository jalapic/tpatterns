function [ drv ] = Derive( A )
drv = zeros( size(A) );

for i = 2 : length(drv) - 1
    drv( i ) = ( A( i+1 ) - A( i-1 ) ) / 2 ; 
end
drv( 1 ) =  A(2) - A(1) ;
drv( end ) = A(end) - A(end-1);

end

