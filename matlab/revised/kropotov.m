%% Read data and search for patterns
fpath='../../real_data/from_kropotov/formated/';
G1_files={'U10_exp.txt', 'U11_exp.txt','U12_exp.txt', 'U13_exp.txt',...
    'U14_exp.txt', 'U15_exp.txt'};
G2_files={'U16_exp.txt', 'U17_exp.txt','U18_exp.txt', 'U19_exp.txt',...
    'U21_exp.txt'};

Groups = T_LOAD_GROUPS_AND_SEARCH_PATTERNS( fpath, G1_files, 'Group 1', ...
    G2_files, 'Group 2', 'alpha', 0.01, 'lhmult', 0.6, 'cor', 0.6, ...
    'lambda', 7, 'kkmax', 2, 'allow_same_events', true, 'Nmin', 2 );

%% Try to detect poterns across files
N = sum( [ Groups.Nfiles ] );
Corr= zeros(N,N);
CorrCell = cell(N,N);

for ii = 1 : N
    for iii = 1 : N
        fprintf('DD %d %d\n', ii, iii);
        [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( ii, Groups );
        [ toGroup, toInd ] = LINE_IDX_TO_GROUP_ANIMAL( iii, Groups );

        A = [];
        npat = numel( Groups( fromGroup ).Patterns{ fromInd } );
        for j = 1 : npat
            %fprintf('II%d %d\n', ii, iii);
            pat_events = numel( ...
                Groups( fromGroup ).Patterns{fromInd}(j).Events );
            [m, l, ~] = T_PAT_ON_DATA( ...
                Groups( fromGroup ).Patterns{fromInd}(j), ...
                Groups( toGroup ).conf{ toInd } );
            A = [A;m l j pat_events ];
            if pat_events > 1
                Corr( ii, iii ) = Corr(ii, iii) + m;
            end
        end
        CorrCell{ii, iii} = A;       
    end
end

%% Build cross
pat_counter = 1;
BigCorr=[];
BigCorrPat = {};
BigCorr_fromGroup = [];
BigCorr_fromAnimal = [];

N = sum( [ Groups.Nfiles ] );
for j = 1 : N
    pat_counter = 1;
    for i = 1 : N
        [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( i, Groups );
        [ toGroup, toInd ] = LINE_IDX_TO_GROUP_ANIMAL( j, Groups );
        
        npat = numel( Groups( fromGroup ).Patterns{fromInd} );
        
        for k = 1 : npat
            if numel( Groups( fromGroup ).Patterns{fromInd}(k).Events ) > 2
                BigCorr(j, pat_counter ) = CorrCell{i,j}(k,1);
                BigCorr_fromGroup( pat_counter ) = fromGroup;
                BigCorr_fromAnimal( pat_counter ) = fromInd;
                BigCorrPat{ pat_counter } = ...
                    Groups( fromGroup ).Patterns{fromInd}(k);
                pat_counter = pat_counter + 1;
            end
        end
    end
end

%% Look for informative patterns
inform =  zeros(1, size(BigCorr,2) );
informS = zeros(1, size(BigCorr,2) );
ii = 1;
clear pstat
for i = 1 : size(BigCorr,2)
    p = nnz( BigCorr( 1:6,   i ) >= 2 );
    n = nnz( BigCorr( 7:end, i ) >= 2 );
   
    if nnz( BigCorr( :,   i ) >= 1 ) > 4
        fprintf('#%d %d %d %s\n', i, p, n,BigCorrPat{i}.String);
    end
    
    if numel( BigCorrPat{i}.Events ) > 2 && p+n > 2
         fprintf('%d %d %s\n', p, n, BigCorrPat{i}.String);
        t = -log( hygepdf(p, size(BigCorr,1), 5, p+n ) );
        %if t > -log(0.05)
            inform( i ) = t;
            informS(i) = sqrt(p) - sqrt(n);
            pstat(ii).String = BigCorrPat{i};
            pstat(ii).Inf = t;
            pstat(ii).p = p;
            pstat(ii).n = n;
            ii = ii + 1;
            fprintf('%d %.2f %.3f %.3f %d %d %s\n', i, t, n/(n+p), p/24,  p, n, BigCorrPat{i}.String );
       % end
    end
end

%%
%% Make same indexes
all_events = {};
naev = 0;
gg=1
    
    for i = 1 : 6
        cconf = Groups(gg).conf{i};
%         nev = numel( Hconf{i}.events );
%         for j = 1 : nev
%             iev = Hconf{i}.events(j).event_name;
%             if ~ ismember( iev, all_events )
%                 naev = naev + 1;
%                 all_events{ naev } = iev;
%             end
%         end
        
        nev = numel( cconf.events );
        for j = 1 : nev
            iev = cconf.events(j).event_name;
            if ~ ismember( iev, all_events )
                naev = naev + 1;
                all_events{ naev } = iev;
            end
        end
    end
gg=2
    
    for i = 1 : 5
        cconf = Groups(gg).conf{i};
%         nev = numel( Hconf{i}.events );
%         for j = 1 : nev
%             iev = Hconf{i}.events(j).event_name;
%             if ~ ismember( iev, all_events )
%                 naev = naev + 1;
%                 all_events{ naev } = iev;
%             end
%         end
        
        nev = numel( cconf.events );
        for j = 1 : nev
            iev = cconf.events(j).event_name;
            if ~ ismember( iev, all_events )
                naev = naev + 1;
                all_events{ naev } = iev;
            end
        end
    end
