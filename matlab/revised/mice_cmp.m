

%% 
figure();
ml=0;
maxel=7;
minel=2;

for i = 1 : 12
    subplot(4,3,i);
    hs = zeros( numel( Hps{i} ),1 );
    for j = 1 : numel( Hps{i} )
        hs( j ) = length( Hps{i}(j).Events );
        ml = max( [ml hs(j)] ); 
    end
    hist( hs(hs>=minel), minel:maxel );
end
title('Hippocampal');

figure();

for i = 1 : 12
    subplot(4,3,i);
    hs = zeros( numel( Cps{i} ),1 );
    for j = 1 : numel( Cps{i} )
        hs( j ) = length( Cps{i}(j).Events );
        ml = max( [ml hs(j)] );
    end
    hist( hs(hs>=minel), minel:maxel );
end
title('Control');

%%
for gi = 1 : numel( Group )
    subplot
end


%% Make same indexes
all_events = {};
naev = 0;
for gg = 1 : Ngroups
    
    for i = 1 : 12
        cconf = Group(gg).conf{i};
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
end
%%
pnames = regexp(pat.String, ' ', 'split');
for i = 1 : numel( pat.Events )
    qq=cellfun( @(x)strcmp(x,pnames{i}), {events.event_name}, 'UniformOutput', false);
    qq
    pnames{i}
    qq = cell2mat( qq );
    new_index = find( qq );
    pat.Events(i) = new_index;
end



%%

%%
CorrTP= zeros(24,24);
MinPat=1;
for ii = 1 : 12
    for iii = 1 : 12
        fprintf('Doing %d %d\n', ii, iii);
        ci = ii;
        hi = iii;
        A = [];
        
        npat = numel( Cps{ci} );
        for j = 1 : npat
            [m ] = T_TPAT_ON_DATA( Cps{ci}(j), Cconf{ci}, Hconf{hi} );
            A = [A;m l];
            if numel(Cps{ci}(j).Events) > MinPat
                CorrTP(ii, 12+iii) = CorrTP(ii, 12+iii) + (m~=0);
            end
        end
       
        A = [];
        npat = numel( Cps{ci} );
        for j = 1 : npat
            [m ] = T_TPAT_ON_DATA( Cps{ci}(j), Cconf{ci}, Cconf{hi} );
            A = [A;m l];
            if numel(Cps{ci}(j).Events) > MinPat
                CorrTP(ii, iii) = CorrTP(ii, iii) + (m~=0);
            end
        end
    end
end

for ii = 1 : 12
    for iii = 1 : 12
        fprintf('Doing %d %d\n', ii, iii);
        ci = ii;
        hi = iii;
        A = [];
        
        npat = numel( Hps{ci} );
        for j = 1 : npat
            [m ] = T_TPAT_ON_DATA( Hps{ci}(j), Hconf{ci}, Hconf{hi} );
            A = [A;m l];
            if numel(Hps{ci}(j).Events) > MinPat
                CorrTP(12+ii, 12+iii) = CorrTP(12+ii, 12+iii) + (m~=0);
            end
        end

        
        A=[];
        npat = numel( Hps{ci} );
        for j = 1 : npat
            [m ] = T_TPAT_ON_DATA( Hps{ci}(j), Hconf{ci}, Cconf{hi} );
            A = [A;m l];
            if numel(Hps{ci}(j).Events) > MinPat
                CorrTP(12+ii, iii) = CorrTP(12+ii, iii) + (m~=0);
            end
        end
    end
end





%%
for b = 1:2
for mp = 1 : 4
    subplot(2,4, (b-1)*4+mp);
    S = CorrsP{b, mp};
    S = spdiags(1./sum(S,2),0,size(S,2),size(S,1))*S;
    imagesc(flipud(S)); colormap bone;
end    
end
%%
subplot(2,4,1);
imagesc(flipud(corr1));
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
title('MinPat=2, \beta=1');
subplot(2,4,2);
imagesc(flipud( corr2));
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
title('MinPat=3, \beta=1');
subplot(2,4,3);
imagesc(flipud( corr3));
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
title('MinPat=4, \beta=1');
subplot(2,4,4);
imagesc(flipud( corr4));
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
title('MinPat=5, \beta=1');

subplot(2,4,5);
imagesc(flipud( bcorr1));
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
title('MinPat=2, \beta=0');
subplot(2,4,6);
imagesc(flipud(bcorr2));
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
title('MinPat=3, \beta=0');
subplot(2,4,7);
imagesc(flipud(bcorr3));
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
title('MinPat=4, \beta=0');
subplot(2,4,8);
imagesc(flipud( bcorr4));
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
title('MinPat=5, \beta=0');


%%
%hold on
%colormap('gray');
nC=CorrsP{2,3};
%pcolor(nC)
%shading flat
%nC(3,10)=10000;
imagesc(flipud(nC));
%colormap('gray');
line([12.5, 12.5], [0 25], 'color', [0 0 0], 'LineWidth', 2)
line([0, 25], [12.5 12.5], 'color', [0 0 0], 'LineWidth', 2)
text(4,23, ['C. in C. ' int2str(sum(sum(nC(1:12,1:12)))) ' matches' ], 'color', 'black', 'FontSize', 8, 'BackgroundColor',[.7 .9 .7] );
text(18,3, ['H. in H. ' int2str(sum(sum(nC(13:24,13:24)))) ' matches' ], 'color', 'black', 'FontSize', 8, 'BackgroundColor',[.7 .9 .7] );
set(gca,'XTick',1:5.7:24)
set(gca,'YTick',1:5.7:24)
set(gca,'XTickLabel',{'1','6','12','18','24'})
set(gca,'YTickLabel',{'24','18','12','6','1'})
text(3,3, ['H. in C. ' int2str(sum(sum(nC(13:24,1:12)))) ' matches'], 'color', 'black', 'FontSize', 8, 'BackgroundColor',[.7 .9 .7] );
text(18,15, ['C. in H. ' int2str(sum(sum(nC(1:12,13:24)))) ' matches' ], 'color', 'black', 'FontSize', 8, 'BackgroundColor',[.7 .9 .7] );
%title('Cross matching between Control group(C.) and Hippocampal group(H.)');


%%
nC=CorrsP{2,1};
%pcolor(nC)
%shading flat
%nC(3,10)=10000;
imagesc(flipud(nC));
%colormap('gray');
line([12.5, 12.5], [0 47], 'color', [0 0 0], 'LineWidth', 2)
line([0, 47], [34.5 34.5], 'color', [0 0 0], 'LineWidth', 2)
line([24.5, 24.5], [0 47], 'color', [0 0 0], 'LineWidth', 2)
line([0, 47], [22.5 22.5], 'color', [0 0 0], 'LineWidth', 2)
line([39.5, 39.5], [0 47], 'color', [0 0 0], 'LineWidth', 2)
line([0, 47], [7.5 7.5], 'color', [0 0 0], 'LineWidth', 2)



 set(gca,'XTick',1:4:47)
 set(gca,'YTick',1:4:47)
% set(gca,'YTick',1:5.7:24)
% set(gca,'XTickLabel',{'1','6','12','18','24'})
 set(gca,'YTickLabel',{'45', '41', '37', '33', '29', '25', '21', '17', '13', '9', '5', '1'})


%%
RES=[];
im = 1;
cors = {corr1, corr2, corr3, corr4, bcorr1, bcorr2, bcorr3, bcorr4, tcor1, tcor2, tcor3, tcorb1, tcorb2, tcorb3};
for mtype =1 : numel(cors);

TT=100;
for nl = 3:11
err=0;    
for nt = 1:TT
nC=cors{mtype};%bcorr2;
%nl = 11;
knn=3;
Clearn_ind = randperm(12);
Ctest_ind = Clearn_ind(nl+1:12);
Clearn_ind = Clearn_ind(1:nl);

Hlearn_ind = randperm(12);
Htest_ind = 12+Hlearn_ind(nl+1:12);
Hlearn_ind = 12+Hlearn_ind(1:nl);



for i = Htest_ind
    r1=[];
    r2=[];
    for j = Hlearn_ind
        r1 = [r1 nC(i,j)];
    end
    for j = Clearn_ind
        r2 = [r2 nC(i,j)];
    end
    
    r1=sort(r1);
    r2=sort(r2);
    i1=length(r1);
    i2=length(r2);
    v1=0;
    v2=0;
    for i = 1:knn
        if r1(i1)>r2(i2)
            v1 = v1+1;
            i1 = i1 - 1;
        else
            v2 = v2+1;
            i2 = i2 - 1;
        end
    end
    if v1 > v2
        ;%disp('First is Hipp');
    else
        err=err+1;
        %disp('First is Contr');
    end
end
for i = Ctest_ind
    r1=[];
    r2=[];
    for j = Hlearn_ind
        r1 = [r1 nC(i,j)];
    end
    for j = Clearn_ind
        r2 = [r2 nC(i,j)];
    end
    
    r1=sort(r1);
    r2=sort(r2);
    i1=length(r1);
    i2=length(r2);
    v1=0;
    v2=0;
    for i = 1:knn
        if r1(i1)>r2(i2)
            v1 = v1+1;
            i1 = i1 - 1;
        else
            v2 = v2+1;
            i2 = i2 - 1;
        end
    end
    if v1 > v2
        err=err+1;
        %disp('Sec is Hipp');
    else
        ;%disp('Sec is Contr');
    end
end

end
RES(nl,im)=1-err/(TT*(12-nl)*2);
end


im=im+1;
end

RES(:,1:8)
RES(:,9:14)

%% SVM test

RES=[];
im = 1;
cors = {corr1, corr2, corr3, corr4, bcorr1, bcorr2, bcorr3, bcorr4, tcor1, tcor2, tcor3, tcorb1, tcorb2, tcorb3};
for mtype =1 : numel(cors);

TT=180;
for nl = 2:12
    %disp('dd');
err=0;    

for nt = 1:TT
nlc = round( 1 + rand()*(nl-2) );
nlh = nl - nlc;
nC=cors{mtype};%bcorr2;
%nl = 11;

Clearn_ind = randperm(12);
Ctest_ind = Clearn_ind(nlc+1:12);
Clearn_ind = Clearn_ind(1:nlc);

Hlearn_ind = randperm(12);
Htest_ind = 12+Hlearn_ind(nlh+1:12);
Hlearn_ind = 12+Hlearn_ind(1:nlh);

nCL = nC([Clearn_ind Hlearn_ind], [Clearn_ind Hlearn_ind]);
nCT = nC([Ctest_ind Htest_ind], [Clearn_ind Hlearn_ind]);

classes = [ zeros(1,nlc), ones(1,nlh) ];
per = randperm( size(nCL,1) );

nCL = nCL( per, : );
classes = classes( per );

%svmStruct = svmtrain( nCL, classes , 'kernel_function', 'rbf' );
%cl = svmclassify( svmStruct, nCT);
model = libsvmtrain(classes', nCL, '-t 0 -s 0 -q' );
[predicted_label, accuracy, decision_values] = libsvmpredict( rand(24-nl,1), nCT, model);
cl = predicted_label;
%pause;

err = err + 24-nl -  nnz( cl' == [ zeros(1,12-nlc) ones(1,12-nlh) ] );
end

RES(nl,im)=1-err/(TT*(24-nl));

end


im=im+1;
end

RES(:,1:8)
RES(:,9:14)

%% TO FUNC !!!!!!!!!!!!!_---------------------------------


%% Make table
N = sum( [ Group.Nfiles ] );
Corr= zeros(N,N);
CorrCell = cell(N,N);

for ii = 1 : N
    
    for iii = 1 : N
        fprintf('DD %d %d\n', ii, iii);
        [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( ii, Group );
        [ toGroup, toInd ] = LINE_IDX_TO_GROUP_ANIMAL( iii, Group );

        A = [];
        npat = numel( Group( fromGroup ).Patterns{fromInd} );
        for j = 1 : npat
            [m l ] = T_PAT_ON_DATA( Group( fromGroup ).Patterns{fromInd}(j), Group( toGroup ).conf{ toInd } );
            A = [A;m l];
            if numel( Group( fromGroup ).Patterns{fromInd}(j).Events ) > 1
                Corr( ii, iii) = Corr(ii, iii) + m;
            end
        end
        CorrCell{ii, iii} = A;       
    end
end


%% MAKE TPATTERN
N = sum( [ Group.Nfiles ] );
CorrTP = zeros(N,N);
CorrCell_TP = cell(N,N);

for ii = 1 : N
    
    for iii = 1 : N
        fprintf('DD %d %d\n', ii, iii);
        [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( ii, Group );
        [ toGroup, toInd ] = LINE_IDX_TO_GROUP_ANIMAL( iii, Group );

        A = [];
        npat = numel( Group( fromGroup ).Tpatterns{fromInd} );
        for j = 1 : npat
            [m ] = T_TPAT_ON_DATA( Group( fromGroup ).Tpatterns{fromInd}(j), Group( fromGroup ).conf{fromInd}, Group( toGroup ).conf{ toInd } );
            A = [A;m l];
            if numel( Group( fromGroup ).Tpatterns{fromInd}(j).Events ) > 1
                CorrTP( ii, iii) = CorrTP(ii, iii) + m;
            end
        end
        CorrCell_TP{ii, iii} = A;       
    end
end

%% 
MinMatches = 3;
N = sum( [ Group.Nfiles ] );
CorrsP = cell(2, 4);
CorrsT = cell(2, 4);
pat_counter = 1;
BigCorr=[];
BigCorrPat = {};
for MinPat = 1 : 4
    for isb = [ true false]
        nC = zeros( N, N );
        nCt = zeros( N, N );
        for i = 1:N
            pat_counter = 1;
            for j = 1:N
                [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( i, Group );
                [ toGroup, toInd ] = LINE_IDX_TO_GROUP_ANIMAL( j, Group );
                
                npat = numel( Group( fromGroup ).Patterns{fromInd} );
                for k = 1 : npat
                    if (  numel( Group( fromGroup ).Patterns{fromInd}(k).Events ) > MinPat  ) && ... 
                            (  CorrCell{i,j}(k,1) >= MinMatches )
                        if isb
                            nC(i,j) =nC(i,j) + (CorrCell{i,j}(k,1)~=0);
                        else
                            nC(i,j) =nC(i,j) + (CorrCell{i,j}(k,1));
                        end
                    end
                    if numel( Group( fromGroup ).Patterns{fromInd}(k).Events ) > 1
                        BigCorr(j, pat_counter ) = CorrCell{i,j}(k,1);
                        BigCorrPat{ pat_counter } = Group( fromGroup ).Patterns{fromInd}(k);
                        pat_counter = pat_counter + 1;
                    end
                    
                end
                
%                 npat = numel( Group( fromGroup ).Tpatterns{fromInd} );
%                 for k = 1 : npat
%                     if ( numel( Group( fromGroup ).Tpatterns{fromInd}(k).Events )  > MinPat ) && ... 
%                             (  CorrCell_TP{i,j}(k,1) >= MinMatches )
%                         if isb
%                             nCt(i,j) =nCt(i,j) + (CorrCell_TP{i,j}(k,1)~=0);
%                         else
%                             nCt(i,j) =nCt(i,j) + (CorrCell_TP{i,j}(k,1));
%                         end
%                     end
%                 end
                
            end
        end
        CorrsP{isb+1, MinPat} = nC;
        CorrsT{isb+1, MinPat} = nCt;
    end
end

    
%%
pat_counter = 1;
BigCorr=[];
BigCorrPat = {};
BigCorr_fromGroup = [];
BigCorr_fromAnimal = [];

N = sum( [ Group.Nfiles ] );
for j = 1 : N
    pat_counter = 1;
    for i = 1 : N
        [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( i, Group );
        [ toGroup, toInd ] = LINE_IDX_TO_GROUP_ANIMAL( j, Group );
        
        npat = numel( Group( fromGroup ).Patterns{fromInd} );
        
        for k = 1 : npat
            if numel( Group( fromGroup ).Patterns{fromInd}(k).Events ) > 1

                BigCorr(j, pat_counter ) = CorrCell{i,j}(k,1);
                BigCorr_fromGroup( pat_counter ) = fromGroup;
                BigCorr_fromAnimal( pat_counter ) = fromInd;
                BigCorrPat{ pat_counter } = Group( fromGroup ).Patterns{fromInd}(k);
                pat_counter = pat_counter + 1;
            end
        end
    end
end

%%
pat_counter = 1;
BigCorrTP=[];
BigCorrTPPat = {};

N = sum( [ Group.Nfiles ] );
for j = 1 : N
    pat_counter = 1;
    for i = 1 : N
        [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( i, Group );
        [ toGroup, toInd ] = LINE_IDX_TO_GROUP_ANIMAL( j, Group );
        
        npat = numel( Group( fromGroup ).Tpatterns{fromInd} );
        
        for k = 1 : npat
        if numel( Group( fromGroup ).Tpatterns{fromInd}(k).Events ) > 1

        BigCorrTP(j, pat_counter ) = CorrCell_TP{i,j}(k,1);

        BigCorrTPPat{ pat_counter } = Group( fromGroup ).Tpatterns{fromInd}(k);%.String;
        pat_counter = pat_counter + 1;
        end
        end
    end
end

%% multiclass

RES=[];
confusion = zeros( numel( Group )  );

im = 1;
cors = {CorrsP{1,1}, CorrsP{1,2}, CorrsP{1,3}, CorrsP{1,4}, CorrsP{2,1}, CorrsP{2,2}, CorrsP{2,3}, CorrsP{2,4}, ...
    CorrsT{1,1}, CorrsT{1,2}, CorrsT{1,3}, CorrsT{1,4}, CorrsT{2,1}, CorrsT{2,2}, CorrsT{2,3}, CorrsT{2,4}};
for mtype =1 : numel(cors);
im
TT=15;
for nl = 5:sum( [Group.Nfiles] )-1  %numel(Group)
    %disp('dd');
err=0;    
for nt = 1:TT

nC=cors{ mtype };
Ngroups = numel( Group );
%nl = 12;
nlg = ones( 1, Ngroups );
tnl = nl - Ngroups;
while tnl > 0
    ind = round( rand() * (Ngroups -1)) + 1;
    if nlg(ind) < Group( ind ).Nfiles
        nlg(ind)=nlg(ind)+1;
        tnl = tnl - 1;
    end
end


Learn_ind = [];
Test_ind = [];
shift = 0;
classes = [];
true_cl = [];
for i = 1 : Ngroups
    rp = randperm( Group(i).Nfiles );
    Learn_ind = [Learn_ind shift + rp( 1:nlg(i) ) ]; 
    Test_ind = [Test_ind shift + rp( nlg(i)+1:end ) ]; 
    shift = shift + Group(i).Nfiles;
    classes = [classes ones( 1, nlg(i) )*i ];
    true_cl = [true_cl ones( 1, Group(i).Nfiles - nlg(i) )*i ];
end

nCL = [nC( Learn_ind, :) nC( :, Learn_ind)'];%nC( Learn_ind, :);%Learn_ind );
nCT = [nC( Test_ind, :) nC( :, Test_ind)'];%nC( Test_ind, :);%Learn_ind);

 model = libsvmtrain(classes', nCL, '-t 0 -s 0 -q');
 [predicted_label, accuracy, decision_values] = libsvmpredict( true_cl', nCT, model );
 predicted_label=predicted_label';

% predicted_label = knn_classify( nCT, classes, 3);

% nCL
% classes
% size(nCL)
% model=classRF_train( nCL, classes);
% predicted_label = classRF_predict( nCT, model );
% predicted_label = predicted_label';

%[predicted_label; true_cl]
%err
%pause;

err = err + sum( [Group.Nfiles] ) - nl -  nnz( predicted_label == true_cl );
for kk = 1 : length( true_cl )
    if mtype == 6
        confusion( true_cl(kk), predicted_label(kk) ) = confusion( true_cl(kk), predicted_label(kk) ) + 1;
    end
end

end

RES(nl,im)=1-err/(TT*(sum( [Group.Nfiles] )-nl));

end


im=im+1;
end

%%
hold on;
plot( [0 45], [0.5 0.5], '-', 'color', [0.5 0.5 0.5], 'LineWidth', 3 );

plot( rSVM(:,6), 'r*-' );
plot( rKNN1(:,6), 'g<-' );
plot( rKNN3(:,6), 'bs-' );

plot( rSVM(:,10), 'r*--' );
plot( rKNN1(:,10), 'g<--' );
plot( rKNN3(:,10), 'bs--' );
set(gca,'XTick',3:4:45)
set(gca,'YTick',0.5:0.1:1)
xlabel('Number of object in training sample');
grid on

legend( 'baseline', 'P-Patterns SVM', 'P-Patterns 1NN', 'P-Patterns 3NN','T-Patterns SVM', 'T-Patterns 1NN', 'T-Patterns 3NN');

%%
for i=3:23
    fprintf('%d&  %.2f& %.2f& %.2f&  %.2f& %.2f& %.2f \\\\ \n', i, rSVM(i,5), rKNN1(i,5), rKNN3(i,5), rSVM(i,15), rKNN1(i,15), rKNN3(i,15) );
end

%% create features
features = zeros( sum( [Group.Nfiles] ), numel( all_events ) * 2 );
cobj = 1;
for cgroup = 1 : numel( Group )
    for cfile = 1 : Group(cgroup).Nfiles
        for j = 1 : numel( all_events )
            fprintf('%d %d (%d %d)\n', cgroup, cfile, cobj, j );
            qq = cellfun( @(x)strcmp(x, all_events{j}), {Group( cgroup ).conf{ cfile }.events.event_name}, 'UniformOutput', false);
            qq = cell2mat( qq );
            idx = find( qq );
            if isempty( idx )
                features( cobj, j ) = 0;
                features( cobj, numel(all_events) + j ) = 0;
                continue;
            end
            nevents = length( Group(cgroup).conf{cfile}.events(idx).indexes );
            features( cobj, j ) = nevents / Group(cgroup).conf{cfile}.Nt;
            if nevents == 0
                features( cobj, numel(all_events) + j ) = 0;
                continue;
            end
            %now count mean length of act
            idxs = Group(cgroup).conf{cfile}.events(idx).indexes;
            all_idxs = [ Group(cgroup).conf{cfile}.events.indexes ];
            act_len = zeros( 1, nevents );
            for k = 1 : nevents
                all_idxs = all_idxs( all_idxs > idxs( k ) );
                if isempty( all_idxs )
                    act_len( k ) = Group(cgroup).conf{cfile}.Nt - idxs( k );
                    continue;
                end
                act_len( k ) = min(all_idxs ) - idxs( k );
            end
%             std(act_len)
%             mean( act_len )
%             act_len
            features( cobj, numel(all_events) + j ) = mean( act_len );
        end
        cobj = cobj + 1;
    end
end

%% classify without patterns
QUAL=zeros(1, sum( [Group.Nfiles] )-1);
confusion = zeros( numel( Group )  );
TT = 10;
for nl = 5 : sum( [Group.Nfiles] )-1  %numel(Group)
    %disp('dd');
err=0;    
for nt = 1:TT

Ngroups = numel( Group );
%nl = 12;
nlg = ones( 1, Ngroups );
tnl = nl - Ngroups;
while tnl > 0
    ind = round( rand() * (Ngroups -1)) + 1;
    if nlg(ind) < Group( ind ).Nfiles
        nlg(ind)=nlg(ind)+1;
        tnl = tnl - 1;
    end
end


Learn_ind = [];
Test_ind = [];
shift = 0;
classes = [];
true_cl = [];
for i = 1 : Ngroups
    rp = randperm( Group(i).Nfiles );
    Learn_ind = [Learn_ind shift + rp( 1:nlg(i) ) ]; 
    Test_ind = [Test_ind shift + rp( nlg(i)+1:end ) ]; 
    shift = shift + Group(i).Nfiles;
    classes = [classes ones( 1, nlg(i) )*i ];
    true_cl = [true_cl ones( 1, Group(i).Nfiles - nlg(i) )*i ];
end


nCL = features( Learn_ind, :);
nCT = features( Test_ind,  :);

model = libsvmtrain(classes', nCL, '-t 0 -s 0 -q');
[predicted_label, accuracy, decision_values] = libsvmpredict( true_cl', nCT, model );
predicted_label=predicted_label';

% model=classRF_train( nCL, classes );
% predicted_label = classRF_predict( nCT, model );
% predicted_label = predicted_label';


for kk = 1 : length( true_cl )
    
    confusion( true_cl(kk), predicted_label(kk) ) = confusion( true_cl(kk), predicted_label(kk) ) + 1;
end

%predicted_label

%[predicted_label' true_cl']
% err
% pause;

err = err + sum( [Group.Nfiles] ) - nl -  nnz( predicted_label == true_cl );

end

QUAL(nl)=1-err/(TT*(sum( [Group.Nfiles] )-nl));

end


%% look for informative patterns


inform = zeros(1, size(BigCorr,2) );
informS = zeros(1, size(BigCorr,2) );
ii = 1;
clear pstat
for i = 1 : size(BigCorr,2)
    p = nnz( BigCorr(1:12, i ) >= 3 );
    n = nnz( BigCorr(13:end, i ) >= 3 );
    
    if numel( BigCorrPat{i}.Events ) > 4 
        t = -log( hygepdf(p, size(BigCorr,1), 12, p+n ) );
        if t > -log(0.05)
            inform( i ) = t;
            informS(i) = sqrt(p) - sqrt(n);
            pstat(ii).String = BigCorrPat{i};
            pstat(ii).Inf = t;
            pstat(ii).p = p;
            pstat(ii).n = n;
            ii = ii + 1;
            fprintf('%d %.2f %.3f %.3f %d %d %s\n', i, t, n/(n+p), p/24,  p, n, BigCorrPat{i}.String );
        end
    end
end

%% make from filtered patterns
inform = zeros(1,  numel(FilteredPatterns) );
informS = zeros(1, numel(FilteredPatterns) );
ii = 1;
clear pstat
for i = 1 : numel(FilteredPatterns)
    p = nnz( BigCorr(1:12, FilteredPatterns_bci( i )   ) >= 3 );
    n = nnz( BigCorr(13:end, FilteredPatterns_bci( i ) ) >= 3 );
    
       t = -log( hygepdf(p, size(BigCorr,1), 12, p+n ) );
%        if t > -log(0.05)
            inform( i ) = t;
            informS(i) = sqrt(p) - sqrt(n);
            pstat(ii).String = FilteredPatterns{i};
            pstat(ii).Inf = t;
            pstat(ii).p = p;
            pstat(ii).n = n;
            ii = ii + 1;
            fprintf('%d %.2f %.3f %.3f %d %d %s\n', i, t, n/(n+p), p/24,  p, n, FilteredPatterns{i}.String );
        %end
end


%%
hold on;
plot( [0 55], [0.2 0.2], '-', 'color', [0.5 0.5 0.5], 'LineWidth', 3 );
plot( QUAL_tr_bad, 'ro-');
%plot( QUAL_svm_bad, 'r--');
% plot( QUAL_tr_good, 'b-');
% plot( QUAL_svm_good, 'b--');

% plot( mean(tRES(:,1:8)'), 'g-' );
% plot( min(tRES(:,1:8)'), 'g--' );
% plot( max(tRES(:,1:8)'), 'g--' );

%plot( mean(svmRES(:,1:8)'), 'k-' );
%plot( svmRES(:,6), 'k-', 'LineWidth', 2 );
%plot( min(svmRES(:,1:8)'), 'k--' );
%plot( max(svmRES(:,1:8)'), 'k--' );

plot( (svmRES(:,end-1)'), 'm>-' );
plot( RES(:,6), 'cs-', 'LineWidth', 2 );
%plot( min(svmRES(:,9:end)'), 'm--' );
%plot( max(svmRES(:,9:end)'), 'm--' );



set(gca,'XTick',5:4:55)
set(gca,'YTick',0.2:0.1:1)
xlabel('Number of object in training sample');
ylabel('Classification quality');
grid on

legend( 'baseline', 'Freq and mean length', 'T-Patterns', 'P-Patterns');

%%
[a idx] = sort([pstat.Inf], 'descend');


for ii = 1 : 19
    i = idx(ii);
    pnames = regexp(pstat(i).String.String, ' ', 'split');
    fprintf(' %d; %d; %.2f;', pstat(i).p, pstat(i).n, pstat(i).Inf);
    %fprintf(' %s', pstat(i).String.String);
    for j = 1 : numel( pstat(i).String.Events )
        fprintf('$[\\,%.1f; %.1f]$~%s ', pstat(i).String.Theta(j, 1)/10, pstat(i).String.Theta(j, 2)/10, pnames{j});
    end
    fprintf('\n');
end
    

%%
PL=[];
for i = 1 : size(BigCorrPat, 2)
    if numel( BigCorrPat{i}.Events ) == 5
        PL = [PL BigCorr(:,i)>=3];
    end
end

imagesc(flipud(PL))
line([0, 162], [12.5 12.5], 'color', [0 0 0], 'LineWidth', 2)
line([83.5, 83.5], [0 25], 'color', [0 0 0], 'LineWidth', 2)
%line([55.5, 55.5], [0 25], 'color', [0 0 0], 'LineWidth', 2)
xlabel('Pattern');
ylabel('Mice #');
set(gca,'YTick',1:5.7:24)
set(gca,'YTickLabel',{'24','18','12','6','1'})

%%
ip = idx(1);

for i = 1 : 12
    subplot(3,4,i);
    T_PAT_ON_DATA(pstat(ip).String, Group(2).conf{i})
    set(gca,'XTick', [])
    %set(gca,'YTick', [])
  %  axis([-Inf Inf 0 5e-10] )
end   
