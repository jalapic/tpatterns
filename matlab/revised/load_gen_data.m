%%
%%
fpath='../../real_data/grooming_new/';
Hippocampal_files={'Hippocampal_14.txt', 'Hippocampal_15.txt', 'Hippocampal_16.txt', 'Hippocampal_18.txt',...
'Hippocampal_21.txt', 'Hippocampal_22.txt', 'Hippocampal_2.txt', 'Hippocampal_3.txt','Hippocampal_4.txt',...
'Hippocampal_5.txt','Hippocampal_6.txt', 'Hippocampal_9.txt'};

Control_files={ 'Control__0.txt', 'Control__10.txt', 'Control__11.txt', 'Control__12.txt', 'Control__13.txt',...
'Control__17.txt', 'Control__19.txt', 'Control__1.txt', 'Control__20.txt', 'Control__23.txt', 'Control__7.txt', 'Control__8.txt'};

Ngroups = 2;
Groups = struct('Nfiles', [], 'Patterns', {}, 'conf', [], 'Label', []);
Group(1).Nfiles = 12;
Group(2).Nfiles = 12;
Group(1).Label = 'Control';
Group(2).Label = 'Hippocampal';

for i = 1:12
    clear conf
    [events, Nt] = T_LOAD_FILE([fpath, Control_files{i}]);
    mesh_step=1;
    conf.alpha = 0.05;
    conf.kkmax = 2.4;
    conf.Nmin  = 3;
    conf.lambda = 6;
    conf.lhmult = 0.6;
    conf.cor = 0.6;
    conf.maxSigma = round( Nt / 100 ); 
    conf.maxMu = round( Nt / 10 ); 
    conf.min_pow_missed = -9;
    conf.allow_same_events = false;
    conf.Nt =  Nt;
    conf.events = events;
    pattern_window = round(Nt/2);
    ps = T_PS_FROM_TS(events, Nt, 1, conf);
    Group(1).conf{i} = conf;
    Group(1).Patterns{i} = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);
    
    clear conf
    [events, Nt] = T_LOAD_FILE([fpath, Hippocampal_files{i}]);
    mesh_step=1;
    conf.alpha = 0.05;
    conf.kkmax = 3.1;
    conf.Nmin  = 3;
    conf.lambda = 7;
    conf.lhmult = 0.6;
    conf.cor = 0.6;
    conf.maxSigma = round( Nt / 100 ); 
    conf.maxMu = round( Nt / 10 ); 
    conf.min_pow_missed = -9;
    conf.allow_same_events = false;
    conf.Nt =  Nt;
    conf.events = events;
    pattern_window = round(Nt/2);
    ps = T_PS_FROM_TS(events, Nt, 1, conf);
    Group(2).conf{i} = conf;
    Group(2).Patterns{i} = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);
end



%%
fpath='../../real_data/grooming_new/';
Hippocampal_files={'Hippocampal_14.txt', 'Hippocampal_15.txt', 'Hippocampal_16.txt', 'Hippocampal_18.txt',...
'Hippocampal_21.txt', 'Hippocampal_22.txt', 'Hippocampal_2.txt', 'Hippocampal_3.txt','Hippocampal_4.txt',...
'Hippocampal_5.txt','Hippocampal_6.txt', 'Hippocampal_9.txt'};

Control_files={ 'Control__0.txt', 'Control__10.txt', 'Control__11.txt', 'Control__12.txt', 'Control__13.txt',...
'Control__17.txt', 'Control__19.txt', 'Control__1.txt', 'Control__20.txt', 'Control__23.txt', 'Control__7.txt', 'Control__8.txt'};

levels = [ 2 0.05 3;    ];

setenv('OMP_NUM_THREADS', '7');
for i = 1:12
    [events, Nt] = T_LOAD_FILE([fpath, Control_files{i}]);
    Group(1).Tpatterns{i} = mexPattern(events, Nt, levels', 0, 1);
    
    [events, Nt] = T_LOAD_FILE([fpath, Hippocampal_files{i}]);
    Group(2).Tpatterns{i} = mexPattern(events, Nt, levels', 0, 1);
end
%%
for i = 1:12
     Group(3).Tpatterns{i} = mexPattern(Group(3).conf{i}.events, Group(3).conf{i}.Nt, levels', 0, 1);
end
for i = 1:12
     Group(4).Tpatterns{i} = mexPattern(Group(4).conf{i}.events, Group(4).conf{i}.Nt, levels', 0, 1);
end

% for i = 1:7
%      Group(5).Tpatterns{i} = mexPattern(Group(5).conf{i}.events, Group(5).conf{i}.Nt, levels', 0, 1);
% end


%% TO FUNC !!!!!!!!!!!!!_---------------------------------


Group(1).Nfiles = 12;
Group(2).Nfiles = 12;
Group(1).Label = 'Control';
Group(2).Label = 'Hippocampal';
for i = 1:12
    Group(1).conf{i} = Cconf{i};
    Group(1).Patterns{i} = Cppl{i};
    Group(2).conf{i} = Hconf{i};
    Group(2).Patterns{i} = Hppl{i};
end

%% Noise C
Group(3).Nfiles = 15;
Group(3).Label = 'Noise C';
for i = 1:Group(3).Nfiles
    clear events
    Nt = 8262 + round( (rand()-0.5) *500 );
    
    Nevents = 1 + round( rand()*( numel( all_events ) - 1 ) );
    rP = randperm( numel( all_events ) );
    rP = rP( 1 : Nevents );
    ii = 1;
    for ei  = rP
        events(ii).event_name = all_events{ ei };
        nelems = round( Nt * ( 0.0015*(1+(rand()-0.5)*0.4) ) );
        events(ii).indexes = sort( 1 + round( rand(1, nelems ) * Nt ) ); 
        ii = ii + 1;
    end
    mesh_step=1;
    conf.alpha = 0.05;
    conf.kkmax = 2.8;
    conf.Nmin  = 3;
    conf.lambda = 8;
    conf.lhmult = 0.6;
    conf.cor = 0.6;
    conf.maxSigma = round( Nt / 100 ); 
    conf.maxMu = round( Nt / 10 ); 
    conf.min_pow_missed = -9;
    conf.allow_same_events = false;
    conf.Nt =  Nt;
    conf.events = events;
    pattern_window = round(Nt/2);
    ps = T_PS_FROM_TS(events, Nt, 1, conf);
    Group(3).conf{i} = conf;
    Group(3).Patterns{i} = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);
end

%% Noise 2
Group(4).Nfiles =8;
Group(4).Label = 'Noise H';
for i = 1:Group(4).Nfiles
    clear events
    Nt = 7062 + round( (rand()-0.5) *500 );
    
    Nevents = 1 + round( rand()*( numel( all_events ) - 1 ) );
    rP = randperm( numel( all_events ) );
    rP = rP( 1 : Nevents );
    ii = 1;
    for ei  = rP
        events(ii).event_name = all_events{ ei };
        nelems = round( Nt * ( 0.0018*(1+(rand()-0.5)*0.3) ) );
        events(ii).indexes = sort( 1 + round( rand(1, nelems ) * Nt ) ); 
        ii = ii + 1;
    end
    mesh_step=1;
    conf.alpha = 0.05;
    conf.kkmax = 2.8;
    conf.Nmin  = 3;
    conf.lambda = 8;
    conf.lhmult = 0.6;
    conf.cor = 0.6;
    conf.maxSigma = round( Nt / 100 ); 
    conf.maxMu = round( Nt / 10 ); 
    conf.min_pow_missed = -9;
    conf.allow_same_events = false;
    conf.Nt =  Nt;
    conf.events = events;
    pattern_window = round(Nt/2);
    ps = T_PS_FROM_TS(events, Nt, 1, conf);
    Group(4).conf{i} = conf;
    Group(4).Patterns{i} = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);
end

%% Synth Data
Group(5).Nfiles = 7;
Group(5).Label = 'Synth';
for i = 1:Group(5).Nfiles
    clear events
    Thetas = [ 0 1; 60 3.3; 25 1.4; 27 1.7; 20 1.2; 20 0.4; 58 3; 10 2];
    [events, Nt, ts] = T_GENERATE_FUZZY_PATTERN('abcdefjk', 'xyw', Thetas, 6, 1500, 0.001, 0.01);
    
    for j = 1 : numel( events )
        events(j).event_name = all_events{j};
    end
    
    mesh_step=1;
    conf.alpha = 0.001;
    conf.kkmax = 2.5;
    conf.Nmin  = 3;
    conf.lambda = 7;
    conf.lhmult = 0.6;
    conf.cor = 0.6;
    conf.maxSigma = round( Nt / 250 ); 
    conf.maxMu = round( Nt / 7 ); 
    conf.min_pow_missed = -9;
    conf.allow_same_events = false;
    conf.Nt =  Nt;
    conf.events = events;
    pattern_window = round(Nt/2);
    
    ps = T_PS_FROM_TS(events, Nt, 1, conf);
    Group(5).conf{i} = conf;
    Group(5).Patterns{i} = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);
end


%% make noise freq and lengths
%%we use freq here!(features)
base = 0;
for i = 1 : Group(1).Nfiles
    curi = 1;
    shift = 0;
    Group(3).conf{i} = Group(1).conf{i};
    Group(3).conf{i}.events = struct( 'event_name', [], 'indexes', [] );
    %evi = 1;
    while curi < Group(1).conf{i}.Nt;
        ei = discr_rand( features( base + i, 1 : 24 ) );
        Group(3).conf{i}.events(ei).event_name = all_events{ei};
        curi = curi + shift;
        Group(3).conf{i}.events(ei).indexes = [ Group(3).conf{i}.events(ei).indexes curi];
        shift = round( features( base + i, 24 + ei ));%*(1 + (rand()-0.5)*0.05 ) );
        
        %%just count frequences of events
        %badness = cellfun(@length, {Group(1).conf{1}.events.indexes} )
    end
    %delete empty elems
    
    Group(3).conf{i}.events =  Group(3).conf{i}.events( ~cellfun('isempty', {Group(3).conf{i}.events.indexes} ) );
    Group(3).conf{i}.Nt = curi;
end

base = 12;
for i = 1 : Group(2).Nfiles
    curi = 1;
    shift = 0;
    Group(4).conf{i} = Group(2).conf{i};
    Group(4).conf{i}.events = struct( 'event_name', [], 'indexes', [] );
    %evi = 1;
    while curi < Group(2).conf{i}.Nt
        ei = discr_rand( features( base + i, 1 : 24 ) );
        Group(4).conf{i}.events(ei).event_name = all_events{ei};
        curi = curi + shift;
        Group(4).conf{i}.events(ei).indexes = [ Group(4).conf{i}.events(ei).indexes curi];
        shift = round( features( base + i, 24 + ei )*(1 + (rand()-0.5)*0.05 ) );
    end
    %delete empty elems
    Group(4).conf{i}.events = Group(4).conf{i}.events( ~cellfun('isempty', {Group(4).conf{i}.events.indexes} ) );
    Group(4).conf{i}.Nt = curi;
end

%%
ng = 4;
Group(ng).Patterns{i} = {};
for i = 1:Group(ng).Nfiles
    clear events
    Nt = Group(ng).conf{i}.Nt;
    events = Group(ng).conf{i}.events;
    mesh_step=1;
    conf.alpha = 0.05;
    conf.kkmax = 2.8;
    conf.Nmin  = 3;
    conf.lambda = 8;
    conf.lhmult = 0.6;
    conf.cor = 0.6;
    conf.maxSigma = round( Nt / 100 ); 
    conf.maxMu = round( Nt / 10 ); 
    conf.min_pow_missed = -9;
    conf.allow_same_events = false;
    conf.Nt =  Nt;
    conf.events = events;
    pattern_window = round(Nt/2);
    ps = T_PS_FROM_TS(events, Nt, 1, conf);
    Group(ng).conf{i} = conf;
    Group(ng).Patterns{i} = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);
end