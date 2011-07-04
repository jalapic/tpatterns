
        
%% from ALL patterns leave only unique
was_deleted = true;
FilteredPatterns = BigCorrPat;
FilteredPatterns_gi = BigCorr_fromGroup;
FilteredPatterns_ai = BigCorr_fromAnimal;
FilteredPatterns_bci = 1 : numel( BigCorrPat );

while was_deleted 

    to_del = [];
    for lp_i = 1 : numel( FilteredPatterns )
        lp_i
        pL =  FilteredPatterns{ lp_i };
        if numel( pL.Events ) <= 4
            to_del = [ to_del lp_i ];
            continue;
        end
        for rp_i = 1 : numel( FilteredPatterns )
            % Now we have left and right pattern indexes, that we want to check
            pL =  FilteredPatterns{ lp_i };
            pR =  FilteredPatterns{ rp_i };
            if lp_i == rp_i
                continue;
            end
                
            if ismember( lp_i, to_del ) || ismember(rp_i, to_del)
                continue
            end
            if nnz( ismember( pL.Events, pR.Events ) ) == numel( pL.Events )
                bigL = [];
                skip_idxs = [];
                for i_mice = 1 : sum( [ Group.Nfiles ] )
                    [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( i_mice, Group );
                    [~, ~, L] = T_PAT_ON_DATA( pL, Group( fromGroup ).conf{ fromInd }, 1 );
                    if numel(L) == 1
                        L = zeros( 1, Group( fromGroup ).conf{ fromInd }.Nt );
                    end
                    bigL = [ bigL L];
                end
                for i = 1:numel(pR.Events)
                    bigR = [];
                    for i_mice = 1 : sum( [ Group.Nfiles ] )
                        [ fromGroup, fromInd ] = LINE_IDX_TO_GROUP_ANIMAL( i_mice, Group );
                        [~, ~, R] = T_PAT_ON_DATA( pR, Group( fromGroup ).conf{ fromInd }, i );
                        if numel(R) == 1
                            R = zeros( 1, Group( fromGroup ).conf{ fromInd }.Nt );
                        end
                        bigR = [ bigR R];
                    end
                    
                   
                    if ( bigL * bigR' ) / ( sqrt( bigL * bigL' ) * sqrt( bigR * bigR' ) ) >= 0.2
%                         cla;
%                     hold on;
%                     plot(bigL, 'b');
%                     plot(bigR, 'r');
%                    ( bigL * bigR' ) / ( sqrt( bigL * bigL' ) * sqrt( bigR * bigR' ) )
%                     pause;
                    
                        to_del = [ to_del lp_i];
                        fprintf(['\nEpic ' pL.String ' cause ' pR.String ' SCORE!!!!!!!!!!!!!!!!!!!']);
                        if i>1
                            fprintf(['\nWIN#####################################']);
                        end
                        break;
                    end
                end
            end
        end
    end
    if isempty( to_del )
        was_deleted = false;
    end
    to_del = sort(unique(to_del));
    while ~isempty(to_del)
        FilteredPatterns = FilteredPatterns( [1:(to_del(1)-1) (to_del(1)+1):end] );
        FilteredPatterns_gi = FilteredPatterns_gi( [1:(to_del(1)-1) (to_del(1)+1):end] );
        FilteredPatterns_ai = FilteredPatterns_ai( [1:(to_del(1)-1) (to_del(1)+1):end] );
        FilteredPatterns_bci = FilteredPatterns_bci( [1:(to_del(1)-1) (to_del(1)+1):end] );
        to_del = to_del(2:end);
        to_del = to_del - 1;
    end

end
%% make html file
%h = figure('Visible', 'off')
%lines = colormap( 'jet' );
lines = [];
r = [ 0.1, 0.5, 0.9 ];
for i = 1 : 3
    for ii = 1 : 3
        for iii = 1 : 3
            lines = [ lines; r(i) r(ii) r(iii)]; 
        end
    end
end

bgcolor_coef = 1.8;

[a idx] = sort([pstat.Inf], 'descend');
% for i = 1 : numel( FilteredPatterns )
%     pstat(i).String = FilteredPatterns{i};
% end

fid = fopen('report.html','w', 'n', 'UTF-8');
fprintf(fid, '<html><head><meta charset="utf-8"/></head><body>');

fprintf(fid, '<h3>Цветовое кодирование событий</h3>');
for i = 1 : numel( all_events )
    color_hash = '#';
    for ic = 1 : 3 %for every component
        col_dec = int16( 255 * lines( i, ic ) ) ;
        if col_dec > 255
            col_dec = 255;
        end
        s_hex = hex(   fi( col_dec )   );
        color_hash = [ color_hash, s_hex( end-1 : end ) ];
    end
    fprintf( fid, '<span style="background-color:%s">&nbsp;&nbsp;&nbsp;</span>%s<br/> ', color_hash, all_events{i});
end
fprintf( fid, '<hr/>');
for ii = 1 : numel( pstat )
    i = idx(ii);
    if pstat(i).p + pstat(i).n <=4
        continue;
    end
    pnames = regexp(pstat(i).String.String, ' ', 'split');
    fprintf(fid, '<table>' );
    fprintf(fid, '<tr><td># событий в паттерне</td><td> <b>%d</b> </td></tr>\n', numel( pstat(i).String.Events ) );
    fprintf(fid, '<tr><td># особей группы "контроль",  &nbsp;у которых был найден паттерн:</td><td> <b>%d</b> </td></tr>\n', pstat(i).p);
    fprintf(fid, '<tr><td># особей группы "гиппокамп", у которых был найден паттерн: </td><td>     <b>%d</b> </td></tr>\n', pstat(i).n);
    fprintf(fid, '<tr><td>Статистическая информативность(на основе гиппер-геом. распр.) </td><td>  <b>%.2f</b> (Болшье -- информативней) </td></tr>\n', pstat(i).Inf);
    fprintf(fid, '<tr><td>Паттерн был найден в группе</td><td>  <b>%s</b> </td></tr>\n', Group( FilteredPatterns_gi(i) ).Label );
    fprintf(fid, '<tr><td>У животного №</td><td>  <b>%d</b></td></tr>\n', FilteredPatterns_ai(i) );
    fprintf(fid, '</table>' );
    %fprintf(' %s', pstat(i).String.String);
    for j = 1 : numel( pstat(i).String.Events )
        color_hash = '#';
        
        qq = cellfun( @(x)strcmp(x,pnames{j}), all_events, 'UniformOutput', false );
        qq = cell2mat( qq );
        event_idx = find( qq ); %pstat(i).String.Events( j );
        %pstat(i).String.Events( j )
        for ic = 1 : 3 %for every component
            col_dec = int16( 255 * lines( event_idx, ic ) ) ;
            if col_dec > 255
                col_dec = 255;
            end
            s_hex = hex(   fi( col_dec )   );
            color_hash = [ color_hash, s_hex( end-1 : end ) ];
        end
        fprintf( fid, '<b>[</b> %.1f; %.1f <b>]</b> <span style="background-color:%s">&nbsp;&nbsp;</span><small>%s</small> ', pstat(i).String.Theta(j, 1)/10, pstat(i).String.Theta(j, 2)/10, color_hash, pnames{j});
    end
    fprintf(fid, '<hr/><br/>\n');
end
fprintf(fid, '</body></html>');
fclose(fid);