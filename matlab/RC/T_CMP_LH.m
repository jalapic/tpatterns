function  [mu, sigma] = T_CMP_LH( Lhl, Lhr, pattern_window, do_plot, do_animate )
%T_CMP_LH Summary of this function goes here
%   Detailed explanation goes here

Nt = size( Lhl, 2 );
sLh = zeros( 1, pattern_window ); 
for delta = 1 : pattern_window
    mask = [ ones(1, Nt - delta ) zeros(1, delta)  ];
    sLh( delta  ) = sum( abs( mask .* Lhl .* mask .* circshift( Lhr, [1 -delta] ) ) );
    if do_animate
        hold on;
        cla;
        plot (mask.*Lhl, 'Color', 'b', 'LineWidth', 2);
        plot (mask.*circshift( Lhr, [1 -delta] ), 'Color', 'r', 'LineWidth', 1 );
        delta
        pause;
        hold off;
    end
end

Fmu = max( sLh );
mu = find( sLh == Fmu(1) );
mu = mu(1);
dd = diff( log( sLh ), 2 ) / ( 1 );
sigma = sqrt( - 1/dd( fix(mu) ) );
line = ( mu - 20) : 0.5 : ( mu + 20);
if do_plot
    hold on;
    plot( 1:pattern_window, sLh, 'LineWidth', 1 );
    plot ( line,  sLh( mu ) * normpdf(line, mu, sigma), '-','Color', 'r', 'LineWidth', 2 );
end
end

