function ps_new = T_ADD_PATTERN(events, ps, pL, pR, mesh_step, pattern_window, Nt)
Lhmaximums=[];

 figure1 = figure();
 figure2 = figure();
% figure3 = figure();
figure( figure1 );
hold on;
[pLR, ddf] = T_CMP_2_PATTERNS(pL, pR, pattern_window);
[dens, X] = T_GET_DENSITY( ddf, mesh_step, 10 );
[minimums, maximums] = T_GET_MINMAX( dens, mesh_step );
sigmas = [];
for i = 1 : size( maximums, 2 )
    mu=maximums(i);
    dd = diff( log(dens), 2 ) / ( mesh_step^2 );
    %sigma = ( abs( 1 / dens( maximums(i)/mesh_step ) ) ) ^ (1/3);
    sigma = sqrt( - 1/dd( maximums(i)/mesh_step - 1  ) );
    sigmas( size(sigmas,2) + 1 ) = sigma;
end
mu2= double( find( dens==max(dens) ) * mesh_step );
sigma1 = sigmas( find( maximums==int32(mu2)) );% /sqrt(2);
sigma2 = sigma1;
mu1 = 0;
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

%%Lh thing
ind1 = [];
ind2 = [];
for i = 1 : size( pL.DS, 2 )
    ind1( size(ind1, 2)+1 ) = pL.DS(i).ind(1);
end
for i = 1 : size( pR.DS, 2 )
    ind2( size(ind2, 2)+1 ) = pR.DS(i).ind(1);
end
set(gca,'XLim',[0 Nt], 'YLim',[-5 4])
plot( ind1, 1*ones( 1, size(ind1,2) ), 's', 'Color', 'r');
plot( ind2, 2*ones( 1, size(ind2,2) ), 's', 'Color', 'r');
Lh = zeros(1, Nt);
%%%%% Lhompute BEGINS
%%fast variant
%     t=1:Nt;
%     X1 = repmat(t, size(ind1,2), 1);
%     X2 = repmat(t, size(ind2,2), 1);
%     X1 = min(abs( repmat(ind1', 1, Nt) - X1 ));
%     X2 = min(abs( repmat(ind2', 1, Nt) - X2 - mu2 ));
%     Lh = normpdf(X2,0,sigma2).*normpdf(X1,0,1);
%%long variant
for eps = 1:Nt
    x1 = min( abs( ind1 - eps*ones( 1, size(ind1,2) ) ) );
    x2 = min( abs( ind2 - (eps+mu2)*ones( 1, size(ind2,2) )  ) );
    k = 0.5;
%     if nnz(ind1==eps) ~= 0
%         k = 1;
%     end
    Lh( eps ) = normpdf(x2, 0, sigma2)*normpdf(x1, 0, 1);%-0.005*normpdf(x1, 0, sigma1)-0.005*normpdf(x2, 0, sigma2);
end
%%long variant compute from end
% for eps = 1:Nt
%     x1 = min( abs( ind1 - (eps-mu2)*ones( 1, size(ind1,2) ) ) );
%     x2 = min( abs( ind2 - (eps)*ones( 1, size(ind2,2) )  ) );
%     Lh( eps ) = normpdf(x2, 0, sigma2)*normpdf(x1, 0, 1);%-0.005*normpdf(x1, 0, sigma1)-0.005*normpdf(x2, 0, sigma2);
% end

%%%%% Lhompute ENDS

plot(1:Nt, -100*Lh, 'Color', 'b', 'LineWidth', 2);
%plot(1:Nt-1, -100*diff(Lh), 'Color', 'g', 'LineWidth', 1);
dLh = diff(Lh);
for i = 2 : size( dLh, 2) 
    if (dLh(i-1)*dLh(i) < -0.00000001) %( abs(dLh( i )) <= 0.001 ) &&  (abs(dLh(i-1)) >= 0.0004 ) && ( abs(dLh(i+1)) >=0.0004) %&& ( dLh( i - 1 ) * dLh( i + 1 ) < 0 )
        Lhmaximums( size(Lhmaximums, 2) + 1 ) = i;
        plot( i, 0, 's', 'MarkerSize', 5, 'MarkerFaceColor', 'y', 'MarkerEdgeColor', 'r');
    end
end
text(100,3, ['Sum(Lh(\epsilon),\epsilon)=', sprintf('%.7f', sum(Lh))], 'FontSize',13 );
sum(Lh)
mu2
hold off
%ps_new = ps;
ps_new.Events = [ pL.Events pR.Events ];
ps_new.CIs = [ pL.CIs' [mu2 sigma]' pR.CIs']';%pR.CIs(2:end,:)
ps_new.Sign = sum(Lh);
ps_new.Lh = Lh;
Lhmaximums
ps_new.Nab = size( Lhmaximums, 2 );
for i = 1 : size( Lhmaximums, 2 )
    ps_new.DS(i).ind = [ Lhmaximums(i) ];
    for j = 2 : size(ps_new.Events, 2)
        ind = events( ps_new.Events( j ) ).indexes;
        tmp = abs( ind - (Lhmaximums(i)+mu2)*ones( 1, size(ind,2) )  );
        ps_new.DS(i).ind = [ps_new.DS(i).ind  ind( find(tmp==min(tmp)) )];
    end
end
