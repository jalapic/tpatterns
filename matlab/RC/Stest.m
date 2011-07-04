N = 1000; 
M = 400;
mu = 33;
k = [];
sigma = 4.4;
line = unifrnd( 0, M*ones( 1, N ) );

g = exp( - ( line - mu ).^2 / ( 2 * sigma * sigma ) ) ;
for i = 1 : 1000
    w = unifrnd( 0.1, 0.999*ones( 1, N  ) );
    k( numel( k ) + 1 ) = sum( w .* g );
end
Nef = sum( w ) / max(w)
hold on;
hist( k ) ;
S = sqrt( 2 * pi ) * sigma;
%disp =   S/M * ( 1 - S/M ) * N * ( sum( (w - sum(w)/N).^2 )/(N-1) );
%disp = (M/(2*sqrt(pi)*sigma) - 1)/(M^2) * sum( w.^2 )
disp = sum(w.^2)*2*sigma*sqrt(pi)*(1-sqrt(pi)*sigma/M)/M
%disp = (M/S - 1)/(M*M) * sum( w.^2 )
%gsigma = S/M * ( 1 - S/M ) * N *  ( sum( ( weights(:,2) - sum( weights(:,2) )/N).^2 )/N ) ;%My 
%disp = S/M * ( 1 - S/M ) * N *   sum( w.^2 ) ;%Vetrov
disp = sqrt(disp) 
mo =  S*sum(w)/M

 mo = sum( w ) * S / M;
 disp = ( M * sum( w.^2 )*2*sqrt(pi)*sigma - sum(w)^2 * 2*pi*sigma^2 / N )/M^2;
 disp = sqrt(disp) 

plot( -2:0.01:101, max(hist(k))*sqrt(2*pi)*disp*normpdf( -2:0.01:101, mo, disp  ), 'Color', 'r', 'linewidth', 2 );
Nef * S / M

kk=0;
%plot ( sum( exp(- (ddf-mu).^2/(2*sigma*sigma) ) ), 0, '*')
      

%% ONLY FOR REPORT
X=0:0.01:10
hold on;
plot(X, exp(-(X-7).^2/0.3 ), 'Color', 'r', 'linewidth', 2 );
x=0;
for i = 1:50
x=x+rand()/2.5+log(abs(x-7))*rand()/7
y = exp(-(x-7).^2/0.3 )*rand()+rand()*0.05
plot([x x], [0 y], '--','Color', 'b', 'linewidth', 1); 
plot(x, y,'o', 'MarkerFaceColor', 'b', 'markersize', 4); 
end

%% CPT
S=[]
N = 10000;
mu = 10;
sigma = 200;
for i = 1 : 1000
     S(numel(S) + 1) = sum( normrnd( 10, sigma, 1, N ) );
end
hold on
hist(S)
l=N*10/2:1:N*10*3/2;
disp = sqrt(N)*sigma;
plot (l,  max(hist(S))*sqrt(2*pi)*disp*normpdf(l, 10 * N, disp), 'color', 'r' ); 
plot (S, 500 * ones(1.,N), '*');

%% 

%function [X, Y] = LR_GENERATE(Mus, Sigmas)
hold on
N1 = 300;
N2 = 1000;
Noise = 10;
Mu1 = [7 7];
Mu2 = [11 ,6];
Sigma1 = [4 1; 1 2];
Sigma2 = [5 1; 1 3];
X1 = mvnrnd( Mu1, Sigma1, N1);
X2 = mvnrnd( Mu2, Sigma2, N2);
X1 = cat( 1, X1, mvnrnd( Mu2,Sigma2,Noise ) );
X2 = cat( 1, X2, mvnrnd( Mu1,Sigma1,Noise ) );
X = cat(1,X1,X2);
marks = cat( 2, ones( 1, N1+Noise ), -ones( 1, N2+Noise ) );

plot(X1(:,1), X1(:,2), '*', 'Color', [1 0 0]);
plot(X2(:,1), X2(:,2), '*', 'Color', [0 0 1]);

hold off;


%% MB
hold on
x=0:8;
plot(x, [T_LOSS_FUN(0:7,8, 2) 0], 'p-', 'Color', [1 0 0], 'linewidth', 2, 'MarkerSize', 15);
plot(x, T_LOSS_FUN(x,8, 7), '*-', 'Color', [0 1 0], 'linewidth', 2, 'MarkerSize', 15);
plot(x, T_LOSS_FUN(x,8, 15), 's-', 'Color', [0 0 1], 'linewidth', 2, 'MarkerSize', 15);