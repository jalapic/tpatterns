
%%
CIs = [30 34; 10 14; 3 6; 5 7; 3 6];
mesh_step = 0.05;
pattern_window = 500;
[events, Nt, ts] = T_GENERATE_PATTERN('abcdef', 'xyz', CIs, 8, 800, 0.01, 0.01);
ps = T_PS_FROM_TS(events);
pp1=T_CALC_LH(events, Nt, ps(1));
pp2=T_CALC_LH(events, Nt, ps(2));
T_CMP_LH(pp1, pp2, pattern_window);
np1=T_ADD_PATTERN(events, ps, ps(1), ps(2), mesh_step, 500, Nt);
np2=T_ADD_PATTERN(events, ps, ps(3), ps(4), mesh_step, 500, Nt);
T_CMP_LH(pp1, pp2, pattern_window);
np3=T_ADD_PATTERN(events, ps, np1, np2, mesh_step, 500, Nt);
T_CALC_LH(events, Nt, np3);

%% figure draw now
LhoodsI=[];
Maxs=[];
%for jjj=0.001:0.001:0.05
%    jjj
mesh_step = 0.05;
gK = 150;
dist_win = 9;
pattern_window = 500;
p1=1;
p2=2;

figure1 = figure();
figure2 = figure();
figure3 = figure();

CIs = [30 34; 10 14; 3 6; 5 7; 3 6];
levels = [ 2 0.00005 4; 4 0.0005 3 ];
% %[events, Nt] = T_LOAD_FILE('../real_data/grooming_hamsters/eversmanni116.txt'); %'../real_data/grooming_hamsters/auratus1.txt');
% [events, Nt, ts] = T_GENERATE_PATTERN('abcdef', 'xyz', CIs, 8, 800, 0.01, 0.01);
% %pattern_window = Nt;
% ps = T_PS_FROM_TS(events);
[pLR, ddf] = T_CMP_2_PATTERNS(ps(p1), ps(p2), pattern_window);
[dens, X] = T_GET_DENSITY( ddf, mesh_step, 10 );
[minimums, maximums] = T_GET_MINMAX( dens, mesh_step );

figure( figure1 )
hold on
%set(gca,'XMinorGrid','on');
set(gca,'YMinorGrid','on');
set(gca,'XLim',[0 pattern_window])
for i = 1 : size(minimums, 2)
    plot( minimums(i), -gK * dens( minimums(i)/mesh_step ) - 1 , 's', 'MarkerSize', 5, 'MarkerFaceColor', 'g', 'MarkerEdgeColor', 'r');
end
for i = 1 : size(maximums, 2)
    plot( maximums(i), -gK * dens( maximums(i)/mesh_step ) - 1, 's', 'MarkerSize', 5, 'MarkerFaceColor', 'y', 'MarkerEdgeColor', 'r');
end

for i = 1 : size(pLR, 1)
    plot( nonzeros( pLR(i,:) ), i * ones( 1, nnz(pLR(i,:)) ), '*', 'MarkerSize', 3, 'MarkerFaceColor', 'b', 'MarkerEdgeColor', 'b');
end

for i = 1 : size(ddf,1)
    plot( [ddf(i) ddf(i)], [0.2 -0.2], 'm');
end
plot( ddf, 0, '*', 'Color', 'k', 'MarkerSize', 2);  
 plot(X, -1-gK*dens, 'Color', 'r', 'LineWidth',2);
%%plot(X(1:size(X,2)-1), -420*diff(dens)/mesh_step, 'Color', 'b');

sigmas = [];
for i = 1 : size( maximums, 2 )
    mu=maximums(i);
    dd = diff( log(dens), 2 ) / ( mesh_step^2 );
    %sigma = ( abs( 1 / dens( maximums(i)/mesh_step ) ) ) ^ (1/3);
    sigma = sqrt( - 1/dd( maximums(i)/mesh_step ) );
    sigmas( size(sigmas,2) + 1 ) = sigma;
    line = (maximums(i)-dist_win*2):mesh_step:(maximums(i)+dist_win*2);
    plot ( line,  -1-dens(maximums(i)/mesh_step)*gK*sqrt(2*pi)*sigma  * normpdf(line, mu, sigma), '-','Color', 'k' );
end



ht = text(find( dens==max(dens) ) * mesh_step, -1-gK*max(dens)-0.8,[' \leftarrow ',sprintf('(%.1f, %1.5f)',find( dens==max(dens) ) * mesh_step,max(dens)), ''], 'FontSize',13);
%har = annotation('textarrow',[0, 300],[2 -3]);
%content = sprintf('(%4.2f,%4.2f)',axx(2), axy(2));
% Plot anno text centered at the tail of the arrow
%set(har,'String',content,'Fontsize',8)


%tt=annotation('textarrow',find( dens==max(dens) ) * mesh_step, max(dens), 'string',['value=', num2str( max(dens) )],'FontSize',14);
mu2= double( find( dens==max(dens) ) * mesh_step );
sigma1 = sigmas( find( maximums==int32(mu2)) ) /sqrt(2);
sigma2 = sigma1;
mu1 = 0;
plot([int32( mu2 - sigma1*2 ) int32( mu2 - sigma1*2 )],[0.1 -0.1], 'LineWidth', 2, 'Color', 'r');
plot([int32( mu2 + sigma1*2 ) int32( mu2 + sigma1*2 )],[0.1 -0.1], 'LineWidth', 2, 'Color', 'r');
mu=0;
n=0;
for i = 1 : size(ddf, 1)
    if ( (ddf(i) <= int32( mu2 + sigma1*2 )) && (ddf(i)>=int32( mu2 - sigma1*2 ) ))
        mu = mu + ddf(i);
        n=n+1;
    end
end
mu=mu/n;

sigma=0;
for i = 1 : size(ddf, 1)
    if ( (ddf(i) <= int32( mu2 + sigma1*2 )) && (ddf(i)>=int32( mu2 - sigma1*2 )))
        sigma = sigma + (ddf(i)-mu)^2;
    end
end
sigma = sqrt(sigma/n);
line = (mu-dist_win*2):mesh_step:(mu+dist_win*2);
plot ( line,  -1-sqrt(2*pi)*sigma  * normpdf(line, mu, sigma), '-','Color', 'm', 'LineWidth', 2 );

%%a
sigmas;
% mu2 = maximums (find(sigmas==min(sigmas)))%(1);
sigma1= 0;%sigma/sqrt(2);
sigma2= sigma;
mu2=mu;


figure( figure2 )
cla
hold off
hold on
set(gca,'XLim',[0 Nt], 'YLim',[-5 4])
ind1 = [];
ind2 = [];
for i = 1 : size( ps(p1).DS, 2 )
    ind1( size(ind1, 2)+1 ) = ps(p1).DS(i).ind(1);
end
for i = 1 : size( ps(p2).DS, 2 )
    ind2( size(ind2, 2)+1 ) = ps(p2).DS(i).ind(1);
end

plot( ind1, 1*ones( 1, size(ind1,2) ), 's', 'Color', 'r');
plot( ind2, 2*ones( 1, size(ind2,2) ), 's', 'Color', 'r');

Lh = zeros(1, Nt);
for eps = 1:Nt
    x1 = min( abs( ind1 - eps*ones( 1, size(ind1,2) ) ) );
    x2 = min( abs( ind2 - (eps+mu2)*ones( 1, size(ind2,2) )  ) );
    k = 0.5;
    if nnz(ind1==eps) ~= 0
        k = 1;
        disp('yyy');
    end
    Lh( eps ) = k*normpdf(x2, 0, sigma2)*normpdf(x1, 0, 2);%/(size(ind1,2)+size(ind2,2));%-0.005*normpdf(x1, 0, sigma1)-0.005*normpdf(x2, 0, sigma2);
end
plot(1:Nt, -100*Lh, 'Color', 'b', 'LineWidth', 2);
plot(1:Nt-1, -100*diff(Lh), 'Color', 'g', 'LineWidth', 1);

ps=T_ADD_PATTERN(ps, ps(p1), ps(p2), Lh, mesh_step);
text(100,3, ['Sum(Lh(\epsilon),\epsilon)=', sprintf('%.7f', sum(Lh))], 'FontSize',13 );
LhoodsI(size(LhoodsI,2)+1)=sum(Lh);
Maxs(size(Maxs,2)+1)=max(dens);
%end
%%a
figure( figure3 )
cla
hold off
hold on
k=3;
plot( ddf, 0, '*', 'Color', 'r');
obj = gmdistribution.fit(ddf,k);
for i = 1:k
    X = 0:pattern_window;
    plot(  X, normpdf(X, obj.mu(i), obj.Sigma(i) ) );
end
obj.mu
obj.Sigma

%% Pr
sigma = 5;
filter_window = 1;
pattern_window = 500;
dist_win = 9

tic
CIs = [30 34; 10 14; 3 6; 5 7; 3 6];
levels = [ 2 0.00005 4; 4 0.0005 3 ];
[events, Nt] = T_LOAD_FILE('../real_data/grooming_hamsters/eversmanni116.txt'); %'../real_data/grooming_hamsters/auratus1.txt');
%[events, Nt, ts] = T_GENERATE_PATTERN('abcdef', 'xyz', CIs, 8, 3000, 0.05, 0.05);
%ss = mexPattern(events, Nt, levels', 0, 1);

AB = zeros( size(events(1).indexes, 2),  size(events(2).indexes, 2));
for i = 1 :  size(events(1).indexes, 2)
    for j = 1 : size( events(2).indexes, 2)
        AB(i,j) = events(2).indexes(j) - events(1).indexes(i);
        if AB(i,j) > pattern_window
            AB(i,j) = 0;
        end
    end
end

cla
hold on
H = zeros(1, max(max(AB)) );
X = 0:0.01:max(max(AB));
N = size( X, 2);
yy = zeros(1, N);
maximums = [];

for i = 1 : size( events(1).indexes, 2)
    d = (AB(i,:)>0).*AB(i,:);
    plot(  d, i .* ones(1,size( d)), '*', 'MarkerSize', 2, 'MarkerFaceColor', 'b', 'MarkerEdgeColor', 'b' ) ;
    for j = 1 : size(d,2) 
        if (d(j) > 0)
            H( d(j) ) = H( d(j) ) + 1;
        end
        if ( d(j) ~= 0 )
            yy = yy + 1/(sigma*sqrt(2*pi)) * exp( - ( ( X - d(j) ).^2 )/(2*sigma*sigma) );
            %yy = yy - abs( X - d(j) );
        end
    end
end

%find minimums in yy
for i = 11:size(yy,2)-11
    if ( ( yy(i-10) < yy(i) ) && ( yy(i-5) < yy(i) ) && ( yy(i+10) < yy(i) ) && ( yy(i+5) < yy(i) ) )
        maximums( size(maximums, 2) + 1 ) = int16(i/100);
        plot( i/100, 0, 's', 'MarkerSize', 5, 'MarkerFaceColor', 'y', 'MarkerEdgeColor', 'r');
    end
end
maximums = unique(maximums)
%get distributions
for i = 1 : size(maximums, 2)
    mu=maximums(i);
    dd = diff(yy,2)/(0.01^2);
    sigma = ( abs(1 / dd( maximums(i)*100 )) )^(1/3);
    line = (maximums(i)-dist_win*2):0.01:(maximums(i)+dist_win*2);
    plot ( line, -yy(maximums(i)*100)*20*sqrt(2*pi)*sigma  /(sigma*sqrt(2*pi)) * exp( - ((line-mu).^2) / (2*sigma^2) ), '-','Color', 'k' )
end

y = filter(ones(1,1)/1, 1, -1 .* H .* ones(1,size( H)) );
%yy = filter(ones(1,filter_window)/filter_window, 1, yy);
%yy = spline(1:size(H,2), y, 0:0.01:max(max(AB)) ); 
%yy
plot(  1:size(H,2),  4.*y,  'o', 'MarkerSize', 2, 'MarkerFaceColor', 'k', 'MarkerEdgeColor', 'k');

plot( X, -yy*20 , 'Color', 'r', 'LineWidth',2);
H;
size(H);

pause
cla
hold off
hold on
plot( find(H), 0, '*', 'Color', 'r');
obj = gmdistribution.fit(find(H)',5);
for i = 1:3
    X = 0:500;
    plot(  X, normpdf(X, obj.mu(i), obj.Sigma(i) ) );
end
obj.Sigma

%T_STAT_VALIDATE( Nt, events, levels, 7)
toc
%T_DRAW_PATTERNS(ss, events, Nt, -1);

%% From file
tic
levels = [ 1 0.07 3];
[events2, Nt2] = T_LOAD_FILE('../real_data/grooming_hamsters/auratus1.txt'); %'../real_data/grooming_hamsters/auratus1.txt');
ss = mexPattern(events2, Nt2, levels', 0, 2);
%T_STAT_VALIDATE( Nt, events2, levels, 7)
toc
T_DRAW_PATTERNS(ss, events2, Nt2, -1 );



