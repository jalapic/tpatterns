function x = discr_rand( probs )
probs = probs / sum( probs );
r = rand();
t = cumsum(probs) < r;
x = find( ~t, 1 );