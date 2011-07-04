function [ps_new, patterns_merged] = T_ADD_PATTERN(events, ps, pL, pR, mesh_step, pattern_window, Nt)

%%First method depricated
%%[mu, sigma] = T_CMP_LH( pL.LhEND, pR.Lh, pattern_window, false, false );
[ mus, sigmas, found_patterns ] = T_CMP_LH_DISCR( pL, pR, Nt, pattern_window );
mu = mus;
sigma = sigmas;
patterns_merged = 0;
ps_new = 0;

if found_patterns > 0
    patterns_merged = 1;
    ps_new.Events = [ pL.Events pR.Events ];
    %%%Fuck that shit. 
%     if ( numel( pR.Events ) == 1 ) && ( numel( pL.Events ) == 1 ) 
%         ps_new.Theta = [ 0 sigma/sqrt(2); mu sigma/sqrt(2) ];
%     else
%         if numel( pR.Events ) == 1
%             ps_new.Theta = [ pL.Theta' [mu sigma]']';%pR.CIs(2:end,:)
%         else
%             pR.Theta(2, 2) = pR.Theta(2, 2) * sqrt( 2 );
%             ps_new.Theta = [ pL.Theta' [mu sigma]' pR.Theta(2:end, : )']';%pR.CIs(2:end,:)
%         end
%     end
    ps_new.Theta = [ pL.Theta' [mu sigma]' pR.Theta(2:end, : )']';%pR.CIs(2:end,:)
    ps_new.Lh = T_CALC_LH( events, Nt, ps_new, false, false, 1 );
    ps_new.LhSHIFTED = zeros( numel( ps_new.Events ), Nt+1 );
    ps_new.LhSHIFTED(1,:) = ps_new.Lh;
    for i = 2 : numel( ps_new.Events )
        ps_new.LhSHIFTED(i,:) = T_CALC_LH( events, Nt, ps_new, false, false, i );
    end
    ps_new.LhEND = T_CALC_LH( events, Nt, ps_new, false, true, 1 );
    ps_new.String = [pL.String ' ' pR.String];
    %[ ps_new.Lh_mins, ps_new.Lh_maxs ] =  T_GET_MINMAX( filter(ones(1,windowSize)/windowSize,1, ps_new.Lh ), 1 );
    %[ ps_new.LhEND_mins, ps_new.LhEND_maxs ] = T_GET_MINMAX( filter(ones(1,windowSize)/windowSize,1, ps_new.LhEND ), 1 );
    
    [ ps_new.Lh_mins, ps_new.Lh_maxs ] =  T_GET_MINMAX( ps_new.Lh, 1, sum( ps_new.Theta(:,1) ) );
    [ ps_new.LhEND_mins, ps_new.LhEND_maxs ] = T_GET_MINMAX( ps_new.LhEND, 1, sum( ps_new.Theta(:,1) ) );
    ps_new.New = true;
end