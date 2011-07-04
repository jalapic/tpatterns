function  [mu, sigma, N] = T_CMP_LH( Lhl, Lhr, pattern_window, do_plot, do_animate )
%T_CMP_LH Summary of this function goes here
%   Detailed explanation goes here

Nt = size( Lhl, 2 );
sLh = zeros( 1, pattern_window ); 
for delta = 1 : pattern_window
    mask = [ ones(1, Nt - delta ) zeros(1, delta)  ];
    sLh( delta  ) = sum( abs( mask .* Lhl .* circshift( Lhr, [1 -delta] ) ) );
    if do_animate
        hold on;
        cla;
        plot (mask.*Lhl, 'Color', 'b', 'LineWidth', 2);
        plot (mask.*circshift( Lhr, [1 -delta] ), 'Color', 'r', 'LineWidth', 1 );
        plot((1:delta) *2 , -sLh(1:delta)/3, '-g', 'LineWidth', 2);
        plot(delta*2, -sLh(delta)/3, 'or');
        delta
        pause;
        hold off;
    end
end

Fmu = max( sLh );
mu = find( sLh == Fmu(1) );
mu = mu(1);

%sLh = smooth( 1:pattern_window, sLh , 0.03,'rlowess');


dd = Derive(Derive( log(sLh )) );%diff( log( sLh ), 2 ) / ( 1 );
sigma = sqrt( - 1/dd( round(mu) ) );
N=1;
if do_plot
    hold on;
    line = ( mu - 20) : 0.5 : ( mu + 20);
    plot( 1:pattern_window, sLh, 'LineWidth', 1 );
    plot( 1:pattern_window, dd,  'g--','LineWidth', 1 );
    plot( mu, dd(mu), 'go');
    plot ( line,  sLh( mu ) * normpdf(line, mu, sigma), '-','Color', 'r', 'LineWidth', 2 );
end
end

