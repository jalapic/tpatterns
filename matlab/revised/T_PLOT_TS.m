function T_PLOT_TS( events, Nt )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
    cla
    hold on
    names = {events(:).event_name };
    
    axis([0 Nt 0 length(names)+2])
    grid off
    zoom off 
     
    
    
    set(gca,'YTick',1:length(names))
    set(gca,'YTickLabel', names );
    
    
    
    for i = 1 : size(events, 2)
        plot( events(i).indexes, repmat( i, 1, size( events(i).indexes, 2 ) ), 's', 'Color', [0.2 0.2 0.2], 'MarkerSize', 2);
    end

end
