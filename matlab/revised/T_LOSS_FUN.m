function p = T_LOSS_FUN( x, N, dlambda )
p = exp( - dlambda * (x) / N );
p( x == N ) = 0;
end

