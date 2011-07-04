function [p] = T_STAT_VALIDATE( Nt, events, levels, nvalidations )

event_freq = zeros( 1, size( events, 2 ) );
% get frequences of events
for i = 1 : size( events, 2 )
    event_freq(i) = size( events(i).indexes, 2 ) / Nt;
end

p = [];
for i = 1 : nvalidations
    %% Generate random time series, according to frequences of events
    disp('wow')
    new_events = events;
    for j = 1 : size( events, 2 )
        new_events(i).indexes = fix( rand(1, size( events(i).indexes, 2 ) ) * Nt );
    end
    patterns = mexPattern(new_events, Nt, levels', 0, 2);
    p = [p, size(patterns, 2) ];
end