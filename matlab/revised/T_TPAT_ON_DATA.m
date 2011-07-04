function [ins] = T_TPAT_ON_DATA( patin, confin, conf )
    ins=0;
    pat = patin;
    %pnames = regexp( pat.String, ' ', 'split' );
    for i = 1 : numel( pat.Events )
        sstr = confin.events( pat.Events(i) ).event_name;
        qq=cellfun( @(x)strcmp(x, sstr), {conf.events.event_name}, 'UniformOutput', false);
        qq = cell2mat( qq );
        if nnz( qq ) == 0
            warning(['There is no event ', int2str(i), ' in data']);
%             pat.String
%             conf.events.event_name
            return;
        end
        new_index = find( qq );
        pat.Events(i) = new_index;
    end
   ix = conf.events( pat.Events(1) ).indexes;

   for i = 2 : numel( pat.Events )
       ixx = [];
       evs = conf.events( pat.Events(i) ).indexes;
       for j = 1 : numel( evs )
           for k = 1 : length(ix) 
            if evs(j) >= ix(k)+pat.CIs(i-1,1) && evs(j) <= ix(k) + pat.CIs(i-1,2);
                ixx = [ ixx, evs(j) ];
            end
           end
       end
       ix = ixx;
   end
    ins = length( ix );
    
end