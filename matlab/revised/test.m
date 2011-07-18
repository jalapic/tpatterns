%% New 

% mu;std
Thetas = [ 0 1; 60 3.3; 25 1.4; 27 1.7; 20 1.2; 20 0.4; 11 1.3; 20 2;];
[events, Nt, ts] = T_GENERATE_FUZZY_PATTERN('abcdefgj', 'xyw', Thetas, 7, 500, 0.01, 0.15);
ps = T_PS_FROM_TS(events, Nt, 1, conf);
mesh_step=1;
pattern_window = round( Nt/2 );
np1=T_ADD_PATTERN(events, ps, ps(1), ps(2), mesh_step, pattern_window, Nt);
np1=np1(1);
np2=T_ADD_PATTERN(events, ps, ps(3), ps(4), mesh_step, pattern_window, Nt);
np12_3=T_ADD_PATTERN(events, ps, np1, ps(3), mesh_step, pattern_window, Nt);
np2_34=T_ADD_PATTERN(events, ps, ps(2), np2, mesh_step, pattern_window, Nt);
np12_34=T_ADD_PATTERN(events, ps, np1, np2, mesh_step, pattern_window, Nt);
np1__2_34=T_ADD_PATTERN(events, ps, ps(1), np2_34, mesh_step, pattern_window, Nt);

%%
Thetas = [ 0 1; 60 3.3; 25 1.4; 27 1.7; 20 1.2; 20 0.4; 11 1.3; 20 2;];
[events, Nt, ts] = T_GENERATE_FUZZY_PATTERN('abcdefgj', 'xwyz', Thetas, 6, 500, 0.001, 0.001);

conf.alpha = 0.01;
conf.kkmax = 2.1;
conf.Nmin  = 3;
conf.lambda = 6;
conf.lhmult = 0.5;
conf.cor = 0.6;
conf.maxSigma = round( Nt / 250 ); 
conf.maxMu = round( Nt / 30 ); 
conf.min_pow_missed = -8;
conf.allow_same_events = false;

ps = T_PS_FROM_TS(events, Nt, 1, conf);
mesh_step=1;
pattern_window = round( Nt/2 );




pattern_window = round(Nt/2);
tic; ppl = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);toc;

%%
%[events, Nt] = T_LOAD_FILE('../../real_data/grooming_hamsters/griseus23.txt'); %'../real_data/grooming_hamsters/auratus1.txt');

[events, Nt] = T_LOAD_FILE('../../real_data/grooming_new/Control__17.txt');
ps = T_PS_FROM_TS(events, Nt, 1, conf);
mesh_step=1;

conf.alpha = 0.01;
conf.kkmax = 2.5;
conf.Nmin  = 3;
conf.lambda = 7;
conf.lhmult = 0.6;
conf.cor = 0.6;
conf.maxSigma = round( Nt / 250 ); 
conf.maxMu = round( Nt / 7 ); 
conf.min_pow_missed = -9;
conf.allow_same_events = false;
pattern_window = round(Nt/2);
ppl_c17 = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);


%%
ppl=Group(2).Patterns{1};
for i  = 1 : numel(ppl)
    fprintf('%d %d %d\t%e\n', i, numel( ppl(i).Events ), numel( ppl(i).Lh_maxs ), sum(ppl(i).Lh) );
end

%%
levels = [ 2 0.05 3; 
            ];
tic       
ss = mexPattern(events, Nt, levels', 0, 1);
toc

T_DRAW_PATTERNS(ss, events, Nt, -1)

%%
fpath='../../real_data/grooming_new/';
Hippocampal_files={'Hippocampal_14.txt', 'Hippocampal_15.txt', 'Hippocampal_16.txt', 'Hippocampal_18.txt',...
'Hippocampal_21.txt', 'Hippocampal_22.txt', 'Hippocampal_2.txt', 'Hippocampal_3.txt','Hippocampal_4.txt',...
'Hippocampal_5.txt','Hippocampal_6.txt', 'Hippocampal_9.txt'};

Control_files={ 'Control__0.txt', 'Control__10.txt', 'Control__11.txt', 'Control__12.txt', 'Control__13.txt',...
'Control__17.txt', 'Control__19.txt', 'Control__1.txt', 'Control__20.txt', 'Control__23.txt', 'Control__7.txt', 'Control__8.txt'};

Hconf = cell(12,1);
Cconf = cell(12,1);
Hppl = cell(12,1);
Cppl = cell(12,1);

for i = 1:12
    [events, Nt] = T_LOAD_FILE([fpath, Control_files{i}]);
    mesh_step=1;
    conf.alpha = 0.005;
    conf.kkmax = 2.2;
    conf.Nmin  = 3;
    conf.lambda = 6;
    conf.lhmult = 0.5;
    conf.cor = 0.6;
    conf.maxSigma = round( Nt / 250 ); 
    conf.maxMu = round( Nt / 5 ); 
    conf.min_pow_missed = -9;
    conf.allow_same_events = false;
    conf.Nt =  Nt;
    conf.events = events;
    pattern_window = round(Nt/2);
    ps = T_PS_FROM_TS(events, Nt, 1, conf);
    Cconf{i} = conf;
    Cppl{i} = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);
    
    [events, Nt] = T_LOAD_FILE([fpath, Hippocampal_files{i}]);
    mesh_step=1;
    conf.alpha = 0.005;
    conf.kkmax = 2.2;
    conf.Nmin  = 3;
    conf.lambda = 6;
    conf.lhmult = 0.5;
    conf.cor = 0.6;
    conf.maxSigma = round( Nt / 250 ); 
    conf.maxMu = round( Nt / 5 ); 
    conf.min_pow_missed = -9;
    conf.allow_same_events = false;
    conf.Nt =  Nt;
    conf.events = events;
    pattern_window = round(Nt/2);
    ps = T_PS_FROM_TS(events, Nt, 1, conf);
    Hconf{i} = conf;
    Hppl{i} = T_FIND_PATTERNS(events, ps, Nt, pattern_window, true, conf);
end

%% 
figure();
ml=0;
maxel=7;
minel=2;

for i = 1 : 12
    subplot(4,3,i);
    hs = zeros( numel( Hppl{i} ),1 );
    for j = 1 : numel( Hppl{i} )
        hs( j ) = length( Hppl{i}(j).Events );
        ml = max( [ml hs(j)] ); 
    end
    hist( hs(hs>=minel), minel:maxel );
end
title('Hippocampal');

figure();

for i = 1 : 12
    subplot(4,3,i);
    hs = zeros( numel( Cppl{i} ),1 );
    for j = 1 : numel( Cppl{i} )
        hs( j ) = length( Cppl{i}(j).Events );
        ml = max( [ml hs(j)] );
    end
    hist( hs(hs>=minel), minel:maxel );
end
title('Control');

%%
hold on;
n = [6 15 8 10 7 18];
Nev =[10 10 11 10 10 12];
Nt = [2288 2304  2616 2813 5120 6044];
t = [17 52 21 23 21 197];
[~, per] = sort(n);
Nev=Nev(per);
Nt=Nt(per);
t=t(per);
n=n(per);

plot(n, Nev.^2.*(n.^3/2+Nt.*n.^2/15)/80000, 'y-', 'LineWidth', 10)
plot(n, t, 'ro')
