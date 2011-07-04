function ps = T_PS_FROM_TS( events )
ps = struct('Events', {}, 'CIs', {}, 'Sign', {}, 'Nab', {}, 'DS', {}, 'String', {});
for i = 1 : size(events,2)
    ps(i).Events = [i];
    ps(i).CIs = [];
    ps(i).Sign = 1;
    ps(i).Nab = size( events(i).indexes, 2 );
    for j = 1 : size( events(i).indexes,2 )
        ps(i).DS(j).ind = events(i).indexes(j);
    end
    ps(i).String = events(i).event_name;
end