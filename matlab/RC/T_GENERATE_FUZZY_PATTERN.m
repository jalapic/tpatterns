function [events, Nt, ts, pa] = T_GENERATE_FUZZY_PATTERN( pat_sym, noise_sym, Theta, Npat, dist_b_patterns, Pnoise1, Pnoise2  )

ts = [];
event_indexes = [];
events = struct( 'event_name', [], 'indexes', [] );

sym = [pat_sym, noise_sym];
Nt = 100;
ts = repmat( '-', 1, Nt);
shift = 0;
while  Npat > 0
    for i =  1 : size(pat_sym, 2)
        x  = normrnd( shift+Theta(i,1), Theta(i,2) );
        while x <= 0.6
            x  = normrnd( shift+Theta(i,1), Theta(i,2) );
        end
        ind = int32( x );
        if ind > numel( ts )
            ts = [ts repmat('-', 1, 100 )];
        end
        shift = ind;
        ts( ind ) = pat_sym(i);
    end
    shift = shift + randint( 1, 1, [0, dist_b_patterns] ) ;
    Npat = Npat - 1;           
    
end

ts( find( ts==char(0) ) ) = '-';

Nt = size(ts, 2);

 for i = 1 : size(sym, 2)
     events(i).event_name = sym(i);
 end
 

for i = 1 : Nt
    if ts(i) == '-'
        if ( random('unif', 0, 1) < Pnoise1 )
            ts(i) = noise_sym( randint(1,1, [1, size(noise_sym,2)] ) );
        end
        if ( random('unif', 0, 1) < Pnoise1/4 )
            ts(i) = pat_sym( randint(1,1, [1, size(pat_sym,2)] ) );
        end
    elseif  ismember( ts(i) , pat_sym )  
        if ( random('unif', 0, 1) < Pnoise2 )
            ts(i) = sym( randint(1,1, [1, size(sym,2)] ) );
        end
    end
end


for i = 1 : size(sym, 2)
    events(i).indexes = find( ts == sym(i) );
end


% add some realism to our data ( try to cmment that line and observe results)
%events = events( randperm( size(events,2) ) );
