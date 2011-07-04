function [dens, X] = T_GET_DENSITY( ddf, step, sigma )

X = 0 : step : max(ddf);
dens = zeros( 1 , size( X , 2 ) );
for i = 1 : size( ddf, 1 )
    dens = dens + normpdf( X, ddf(i), sigma ); %unifpdf(X,ddf(i)-sigma/2, ddf(i)+sigma/2);%
end
dens = dens / size( ddf, 1 ) ;