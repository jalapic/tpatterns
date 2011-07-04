function [events, Nt, ts, pa] = T_GENERATE_PATTERN( pat_sym, noise_sym, CIs, Npat, dist_b_patterns, Pnoise1, Pnoise2  )

ts = [];
event_indexes = [];
events = struct( 'event_name', [], 'indexes', [] );

sym = [pat_sym, noise_sym];

while  Npat > 0
    ts = [ ts, pat_sym(1) ];
    for i = [ 1 : size(pat_sym, 2)-1 ]
        for j = [ 1 : CIs(i,1) + randint( 1,1, [0, CIs(i,2) - CIs(i,1) ] ) - 1  ]
            ts = [ts, '-'];
        end
        ts = [ts, pat_sym( i + 1 )];
    end
    for i = [ 1 : randint( 1, 1, [0, dist_b_patterns] ) ]
        ts = [ts, '-'];
    end
    Npat = Npat - 1;           
end

Nt = size(ts, 2);

 for i = 1 : size(sym, 2)
     events(i).event_name = sym(i);
 end
 

for i = 1 : Nt
    if ts(i) == '-'
        if ( random('unif', 0, 1) < Pnoise1 )
            ts(i) = noise_sym( randint(1,1, [1, size(noise_sym,2)] ) );
        end
        if ( random('unif', 0, 1) < Pnoise2 )
            ts(i) = pat_sym( randint(1,1, [1, size(pat_sym,2)] ) );
        end
    end
end


for i = 1 : size(sym, 2)
    events(i).indexes = find( ts == sym(i) );
end


% add some realism to our data ( try to cmment that line and observe results)
%events = events( randperm( size(events,2) ) );