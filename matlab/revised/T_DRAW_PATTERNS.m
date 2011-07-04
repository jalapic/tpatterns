function T_DRAW_PATTERNS(S, events, Nt, np)
    
    %axes names
if np == -1 
    np1 = 1;
    np2 = size(S, 2);
else
    np1 = np;
    np2 = np;
end

for np = np1 : np2
    sym = events(1).event_name;
    for i = 2 : size(events, 2)
        sym = strvcat( sym, events(i).event_name);
    end
    
    cla
    hold on
    axis([0 Nt 0 size(sym, 1)+2])
    grid off
    zoom off 
    
    title( S(np).String )
    
    set(gca,'YTick',1:size(sym, 1))
    set(gca,'YTickLabel',{ sym } );
    
    
    
    for i = 1 : size(events, 2)
        plot( events(i).indexes, repmat( i, 1, size( events(i).indexes, 2 ) ), 's', 'Color', [0.2 0.2 0.2], 'MarkerSize', 2);
    end
        
    DS = S(np).DS;
    CI = S(np).CIs;
    Ev = S(np).Events;
   % Patterns = S.Patterns(np, : ) + 1;
    for i = 1 : S(np).Nab 
        pl = DS(i, 1);
        pr = DS(i, 1);
        pl = recr(events, Ev, CI, 2, pr, size( S(np).Events , 2 ) + 1 );
        xlabel('Time')
        ylabel('Event type')
        plot( pl , Ev , '-rs','LineWidth',1, 'MarkerEdgeColor','b', 'MarkerFaceColor','g', 'MarkerSize', 5)
    end
%     
%      %% SCROLLING
%     dx = 600;
%     set(gcf, 'doublebuffer','on');
%     set(gca, 'xlim', [0 dx]);
%     set(gca, 'ylim', [0 size(events, 2)+1]);
%     pos = get(gca, 'position');
%     Newpos = [pos(1) pos(2)-0.1 pos(3) 0.05];
%     SS=['set(gca,''xlim'',get(gcbo,''value'')+[0 ' num2str(dx) '])'];
%     h=uicontrol('style','slider', 'units','normalized','position', Newpos, 'callback',SS,'min',0,'max', Nt-dx);
%     %%
    
    pause
end

function rec = recr(events, Ev, CI, j, pr, M)
    if ( j == M )
        rec = pr;
        return;
    end
        tmp =  events( Ev(j) ).indexes(   ( events( Ev(j) ).indexes >= ( pr + CI(j-1, 1) ) ) & (  events( Ev(j) ).indexes <= ( pr + CI(j-1, 2) ) )   );
        if size(tmp, 2) == 0 
            rec = -1;
            return;
        end
        
        for ii = 1 : size(tmp, 2) 
            rec = recr(events,Ev, CI, j+1, tmp(ii), M);
            if ( rec ~= -1 )
                rec = [pr,rec];
                return;
            end
        end
