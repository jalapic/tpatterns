function new_pat = T_CALC_LH( event, Nt, pat )
%T_CALC_LH Summary of this function goes here
%   Detailed explanation goes here
Lh = zeros(1, Nt+1);
hold on;
mLh = zeros(1, Nt+1);
set(gca,'XLim',[-20 Nt+1])
for eps = 0:Nt
    misses = 0;
    shift = 0;
    Lh( eps + 1) = 1;
    xp = 0;
    ind = event( pat.Events( 1 ) ).indexes;
    x = min( abs( ind - eps * ones( 1, size(ind,2) ) ) );
    pr = normpdf(x, 0, 1);
    if pr > 0.00001
            %shift = shift + x - eps;
            %shift = shift + pat.CIs( i - 1, 1 ) + rx(1);
            Lh( eps + 1 ) = Lh( eps + 1 ) * pr;
    else
            %shift = shift + pat.CIs( i - 1, 1 );
            misses = misses + 1;
    end
        
    prevrx = -1;
    for i = 2 : size( pat.Events, 2)
        ind = event( pat.Events( i ) ).indexes;
        ind = ind( ind > prevrx );
        tmp = ind - ( eps + shift + pat.CIs(i-1, 1) ) * ones( 1, size(ind,2) );
        
        x = min( abs( tmp ) );
        rx = tmp( find(abs(tmp)==x) );
        prevrx = rx(1) + eps + shift + pat.CIs(i-1, 1);
        pr = normpdf( x, 0, pat.CIs( i - 1, 2 ) );
        if pr > 0.00001
            %shift = shift + x - eps;
            shift = shift + pat.CIs( i - 1, 1 ) + rx(1);
            Lh( eps + 1) = Lh( eps + 1) * pr;
        else
            shift = shift + pat.CIs( i - 1, 1 );
            misses = misses + 1;
        end
    end
    Lh( eps + 1 ) = Lh( eps + 1 ) * T_LOSS_FUN( misses, size( pat.Events, 2 ) );
    mLh( eps + 1 ) = misses;
end
plot (0:Nt, Lh, 'Color', 'b', 'LineWidth', 2);
plot (0:Nt, mLh/10*(max(Lh)), '-', 'Color', 'r');
for j = 1 : size( pat.Events, 2 ) 
    ind = event( pat.Events( j ) ).indexes;
    plot( ind, - max(Lh)/size( pat.Events, 2 )/4 * j * ones( 1, size(ind,2) ), 's', 'Color', 'r');
end
sum(Lh)
new_pat=Lh;
end

