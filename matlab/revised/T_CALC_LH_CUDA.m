function Lh = T_CALC_LH_CUDA( event, Nt, pat, do_plot, from_end, start_index, conf, varargin )
%T_CALC_LH Summary of this function goes here
%   Detailed explanation goes here
if size( varargin,2) == 1
    shift = sum( pat.Theta( 1:start_index,1) );
    Lh = varargin{1};
    mask = [ zeros(1, shift) ones(1, Nt - shift )   ];
    Lh = circshift( Lh, [1 shift] );%.* mask;
    return
end

Lh = -1000*ones(1, Nt);

if from_end %little trick for easy count from end
    pat.Events = wrev( pat.Events );
    origTheta = pat.Theta;
    pat.Theta = [0 1; wrev(pat.Theta(2:end,1)) wrev(pat.Theta(2:end,2)) ];
    origEvent = event;
    for i = 1: length( event )
        event(i).indexes = Nt - event(i).indexes -1;
    end
end

% origEvents = pat.Events;
% pat.Events = patEvents(start_index:end);
% uncut_theta = pat.Theta;
% pat.Theta   = [0 1; pat.Theta(start_index+1:end,1) pat.Theta(start_index+1:end,2)];
%Lh = T_CALC_LH( event, Nt, pat, do_plot, false, 1 );
Lh = mex_CALC_LH(event, Nt, pat, conf.lambda, conf.min_pow_missed );
Lh = Lh';
if start_index ~= 1 
    shift = sum( pat.Theta( 1:start_index,1) );
    mask = [ zeros(1, shift) ones(1, Nt - shift )   ];
    Lh = circshift( Lh, [1 shift] ) .* mask;
end

% pat.Theta = uncut_theta;
% pat.Events = origEvents;
if from_end % now return all as normal
    pat.Events = wrev( pat.Events );
    pat.Theta = origTheta;
    Lh = wrev( Lh );
    for i = 1: length( event )
        event(i).indexes = origEvent(i).indexes;
    end
end

end

