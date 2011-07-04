%% Hyp
N = 120;
M = 1000;
mu = 400;
sigma = 4;
k = [];
LH=[];

Nk = 8;
Xk = [];
Sk = [1 2 3 4 5 6 7 8];
Skk = [11 2 3 4 5 6 7 8];
LHk=[];
TT=[];
for i = 1:1000
    %X = round( normrnd( mu, sigma,   N, 1 ) );
    X = round( unifrnd( 0,  M,   N, 1 ) );
    %X = unifrnd( 0,  M,   N, 1 ) ;
    W = unifrnd( 0,  1,   N, 1 );
    %W=ones(N,1);
    gX = exp( - ((X-mu).^2)/(2*sigma^2) );%/ ( sigma*sqrt(2*pi) );
    k = [k sum( W .* gX ) ];
    
    %LH = [LH prod( exp(-(mu-X).^2 / (2*sigma^2) )/(sqrt(2*pi)*sigma ) )];
    LH = [LH sum((X-mu).^2/(2*sigma^2))];%sum(  -log( sqrt(2*pi)*sigma ) - ( mu - X ).^2/(2*sigma^2)   ) ];
    for j = 1 : Nk
        Xk(j) = normrnd( mu, Sk(j),   1, 1 );
    end
    LHk = [LHk sum( exp(-(Xk-mu).^2 ./ (2*Skk.^2) ))./(sqrt(2*pi).*Skk) ];
    
    T = normrnd( mu, sigma, N );
    TT=[TT sum(T)];
end
S = sigma * sqrt(2*pi);
Neff = sum(W)/max(W);

hold on;
[vv, xx]=hist( k , 20);
hist( k , 20);
mean(W)
S/M*N *mean(W)
S/M*N

line = min(k)*0.9:0.05:max(k)*1.1;
% plot( S/M*N *mean(W), 0, 'r*');
% plot( line, normpdf( line, S/M*N *mean(W),  (M-S)*S*N*(std(W)+1)/(M*M))*70, 'r-' );
% 
% 
% plot( S/M*Neff *mean(W), 0, 'g*');
% plot( line, normpdf( line, S/M*Neff *mean(W),  (M-S)*S*Neff*std(W)/(M*M))*70, 'g-' );
S/M
sqrt( (M*S-S^2*sqrt(2))/(sqrt(2)*M^2) )/sqrt(N)
plot( S/M*N, 0, 'c*');
sgg = sqrt( (M*S-S^2*sqrt(2))/(sqrt(2)*M^2) ) * sqrt(N);
dsp = (M*S-S^2*sqrt(2))/(sqrt(2)*M^2);
sgma = mean( W )^2 *dsp + (S/M)^2 * var(W) + var(W)*dsp;
sgma = sqrt(sgma * N); 
plot( line, normpdf( line, S/M * N*mean(W) ,    sgma ) *max(vv)*sqrt(2*pi)*sgma , 'c-' );

 
plot( line, normpdf( line, S/M*N, (M-S)*S*N*(std(W)+1)/(M*M) )*max(vv)*sqrt(2*pi)*(M-S)*S*N*(std(W)+1)/(M*M), 'r-' );

%%
hold on;

Z = zeros( length(4990 : 5010), length(1:0.05:5) );
LL= zeros( size(Z) );
W = W+rand(size(W))*0.01
C1=sqrt(2*pi)/M * N * mean( W );
C2=sqrt(2*pi) / M^2 * N *(std(W)+1);
mm=1;
size(Z)
%X = X + rand(size(X) );
for MU = 4990 : 5010
    sin = 1;
    for SI = 1:0.05:5
        gm = SI*C1;
        gs = (M-SI*sqrt(2*pi))*SI*C2;
        
        gmu = 2*(1-mu/M)/M *N ;
        varg = (1-mu/M) * ( 1/(sqrt(pi)*M*SI) - 4/M^2 * (1-mu/M) );
        dsp = var(W)*(2*(1-mu/M)/M)^2 + mean(W)^2*varg + varg*var(W); 
        gsigma = sqrt( varg * length(X) );
        gm=gmu;
        gs=gsigma;
        
        gX = exp( - ((X-MU).^2)/(2*SI^2) );
        Z(mm, sin) = log(sqrt(2*pi)*gs) + ( gm - sum( W .* gX ) )^2/(2*gs^2);
        LL(mm,sin) = sum( (X-MU).^2 ./( 2*SI^2 ) )^2 ;
        %Z(mm, sin) = sum( ( log( sqrt(2*pi)*SI ) + ( MU - X ).^2/(2*SI^2) )  );
               
        sin = sin+1;
    end
    size(Z)
    mm=mm+1
end
size(Z)
surf(Z)
shading interp

%%
Nt = 100;
Np1=20;
Np2=20;
k=zeros(1,500);
mu=10;
sigma=5;
for i = 1:500
X1 = round( unifrnd( 0,  Nt,   Np1, 1 ) );
X2 = round( unifrnd( 0,  Nt,   Np2, 1 ) );
%X1 = round( unifrnd( 0,  Nt,   Np1, 1 ) );
%X2 = round( unifrnd( 0,  Nt,   Np2, 1 ) );
X1r = repmat(X1,1, Np2);
X2r = repmat(X2',Np1, 1);

X=X1r-X2r;
X=X(:);
X=X(X>0);
%X= round(normrnd( mu, sigma,   Np1, 1 ));
W = unifrnd( 0,  1,   length(X), 1 );
gX = exp( - ((X-mu).^2)/(2*sigma^2) )/ ( sigma*sqrt(2*pi) );
k(i) = sum( gX );
M = max(X);
end
hold on;
[ff xx ] = hist(k, 50);
hist(k, 50);
N=length(X);

Eg = 1/(sqrt(2*pi)*M^2) * ...
    (sqrt(2*pi)*(M-mu)*erf( (M-mu)/(sqrt(2)*sigma) ) + ...
    sqrt(2*pi)*(M-mu)*erf(mu/(sqrt(2)*sigma) ) + 2*sigma*exp( - (M^2+mu^2)/(2*sigma^2) )*...
    (exp(M*mu/sigma^2)-exp(M^2/(2*sigma^2) ) ) );
% Eg = 1/M * ( erf( (mu-M)/(sqrt(2)*sigma) ) - erf(mu/(sqrt(2)*sigma) ) ) - ...
%     sqrt(2)/(M^2*sqrt(pi)) * ( mu*sqrt(pi/2)*erf( -M/(sqrt(2)*sigma) )  -...
%     sigma*(exp(-M^2/(2*sigma^2)) -1 ) );  

Eg2 = (sqrt(pi)*(M-mu)*( erf( (M-mu)/sigma ) + erf( mu/sigma ) ) + sigma*(exp(-(M-mu)^2/sigma^2) - exp(-mu^2/sigma^2) ) )/ ...
    (2*pi*M^2*sigma);

gmu = 2*(1-mu/M)/M *N ;
varg = (1-mu/M) * ( 1/(sqrt(pi)*M*sigma) - 4/M^2 * (1-mu/M) );
dsp = var(W)*(2*(1-mu/M)/M)^2 + mean(W)^2*varg + varg*var(W); 
gsigma = sqrt( varg * length(X) );
plot(xx, max(ff)*normpdf(xx, gmu, gsigma), 'g-');
plot(xx, max(ff)*normpdf(xx, Eg*N, sqrt( N*(Eg2-Eg^2) ) ), 'c-');

%%
s = 1:0.1:10;
m = 0:30;
Z = zeros(length(m), length(m));
mi=1;
si=1;
for MU=m
    si=1;
    for SI=s
        gmu = 2*(1-MU/M)/M *N ;
        varg = (1-MU/M) * ( 1/(sqrt(pi)*M*SI) - 4/M^2 * (1-mu/M) );
        gsigma = sqrt( varg * length(X) );
        gX = exp( - ((X-MU).^2)/(2*SI^2) )/(sqrt(2*pi)*SI);
        Z(mi,si)=log(sqrt(2*pi)*gsigma) + (gmu-sum(gX))^2/(2*gsigma^2);
        si=si+1;
    end
    mi=mi+1;
end

%%
M = 10000;
N = 1000;
X = round( unifrnd( 0,  M,   N, 1 ) );
Y = round( unifrnd( 0,  M,   N, 1 ) );
Z = [];
for i = 1 : N
    T = Y-X(i);
    Z = [Z T( T>=0 )'];
end
% hold on
% plot(X, 0,'b.');
% plot(Y, 1,'b.');
% plot(Z, 0.5, 'r.');
hold on;
[ff xx ] = hist(Z, 50);
hist(Z, 50);
plot(xx, (M-xx)/M * max(ff), 'g-');

plot(xx, (1-xx/M) * max(ff), 'c-');

%plot(l, l.*(2-l),'g');

%%
S = [3 2 1];
N=length(S);
LH=[];
for i = 1 : 2000
    X = normrnd( zeros(size(S)), S );
    LH = [LH prod( exp(- X.^2./(2*S.^2) ) ./ (sqrt(2*pi).*S)  ) ];
end

1/( (2*sqrt(pi))^N * prod(S) )
mean(LH)

%%
