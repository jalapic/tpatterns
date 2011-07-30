function [nummaaxs, lhsum, lh] = T_PAT_ON_DATA( patin, conf, varargin )
    if numel( varargin ) == 1
        start_idx = varargin{ 1 };
    else
        start_idx = 1;
    end
    nummaaxs = 0;
    lhsum = 0;
    lh = 0;
    pat = patin;
    pnames = regexp( pat.String, ' ', 'split' );
    for i = 1 : numel( pat.Events )
        qq=cellfun( @(x)strcmp(x,pnames{i}), {conf.events.event_name}, 'UniformOutput', false);
        qq = cell2mat( qq );
        if nnz( qq ) == 0
            warning(['There is no event ', int2str(i), ' in data']);
%             pat.String
%             conf.events.event_name
            return;
        end
        if sum( patin.Theta( :,1) ) >= conf.Nt
            warning(['Pattern is too long for that mice']);
            return;
        end
        new_index = find( qq );
        pat.Events(i) = new_index;
    end
    
    pat.Lh = T_CALC_LH_CUDA( conf.events, conf.Nt, pat, false, false, start_idx, conf );
    %pat.LhEND = T_CALC_LH_CUDA( conf.events, conf.Nt, pat, false, true, 1, conf );
    
    [ pat.Lh_mins, pat.Lh_maxs ] =  T_GET_MINMAX( pat.Lh, 1, sum( pat.Theta(:,1) ), pat, conf );
    %[ pat.LhEND_mins, pat.LhEND_maxs ] = T_GET_MINMAX( pat.LhEND, 1, sum( pat.Theta(:,1) ), pat, conf );
    nummaaxs = numel( pat.Lh_maxs );
    lhsum = sum( pat.Lh );
    lh = pat.Lh;
    
%% easyplot
     hold on;
     plot(pat.Lh);
     plot( pat.Lh_maxs, pat.Lh( pat.Lh_maxs )*0, 's', 'MarkerSize', 4, 'MarkerFaceColor', 'y', 'MarkerEdgeColor', 'r');
%% detailed plot
%T_CALC_LH( conf.events, conf.Nt, pat, true, false, 1, conf );
end