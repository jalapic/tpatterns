function [events, Nt] = T_LOAD_FILE(fname)
tfid = fopen(fname);
events = struct( 'event_name', [], 'indexes', [] );
[C, position] = textscan(tfid, '%s %s', 2);
[C, position] = textscan(tfid, '%d %s');
flag = 0;
fclose(tfid);
T = C{1};
E = C{2};
it = 0;
for i = 1 : size(T,1)-1
    flag = 0;
    for j = 1 : size( events, 2)
        if ( strcmp( E(i), events(j).event_name ) == 1)
            events(j).indexes = [ events(j).indexes, double( T(i) + 1  ) ];
            flag = 1;
            break;
        end
    end
    
    if flag == 0
        it = it + 1; 
        events( it ).event_name = E(i);
        events( it ).event_name = events( it ).event_name{1};
        events( it ).indexes    = double( T(i) + 1 );
    end
end
Nt = double(T(end));