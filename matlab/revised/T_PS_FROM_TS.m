function ps = T_PS_FROM_TS( events, Nt, sigma, conf )
ps = struct('Events', {}, 'Theta', {}, 'String', {}, 'Lh', {}, 'LhEND', {}, 'Lh_mins', {}, 'Lh_maxs', {}, 'LhEND_mins', {}, 'LhEND_maxs', {});
for i = 1 : size(events,2)
    ps(i).Events = [i];
    ps(i).Theta = [0 sigma];
    ps(i).String = events(i).event_name;
    ps(i).Lh = T_CALC_LH_CUDA( events, Nt, ps(i), false, false, 1, conf);
    ps(i).LhSHIFTED = zeros( 1, Nt );
    ps(i).LhSHIFTED = ps(i).Lh;
    ps(i).LhEND = ps(i).Lh;
    ps(i).New = true;
    [ ps(i).Lh_mins, ps(i).Lh_maxs ] =  T_GET_MINMAX( ps(i).Lh, 1, 1, ps(i), conf );
    [ ps(i).LhEND_mins, ps(i).LhEND_maxs ] = T_GET_MINMAX( ps(i).LhEND, 1, 1, ps(i), conf );
end