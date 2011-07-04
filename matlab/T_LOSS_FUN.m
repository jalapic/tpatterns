function p = T_LOSS_FUN( x, N )
%T_LOSS_FUN Summary of this function goes here
%   Detailed explanation goes here
p = exp( - 20 * (x) / N );
if ( x == N )
    p = 0;
end
end

