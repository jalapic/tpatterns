function Lh = T_CALC_LH( event, Nt, pat, do_plot, from_end, start_index, conf)
%T_CALC_LH Summary of this function goes here
%   Detailed explanation goes here
Lh = -1000*ones(1, Nt);
if do_plot
    hold on;
    set(gca,'XLim',[-20 Nt+1]);
end
mLh = numel( pat.Events )*ones(1, Nt);
if from_end %little trick for easy count from end
    pat.Events = wrev( pat.Events );
    origTheta = pat.Theta;
    pat.Theta = [0 1; wrev(pat.Theta(2:end,1)) wrev(pat.Theta(2:end,2)) ];
end
% origEvents = pat.Events;
% pat.Events = patEvents(start_index:end);
% uncut_theta = pat.Theta;
% pat.Theta   = [0 1; pat.Theta(start_index+1:end,1) pat.Theta(start_index+1:end,2)];

ops=0;
for eps = 1:Nt
    misses = 0;
    shift = 0;
    %Lh( eps + 1) = 1;
    Lhc = 0;
    prevrx = -1;
    delta = 0;
    ops=ops+5;
    for i = 1 : size( pat.Events, 2 )
        ind = event( pat.Events( i ) ).indexes; %All time moments, that pat occurs
        if from_end
            ind =  Nt - ind; 
        end
        
        ind = ind( ind > prevrx ); %Only these, which are AFTER previous event
        ops=ops+length(ind);
        
        if isempty( ind ) % if we don't have next pattern element in data
%             misses = misses + numel( pat.Events ) - i + 1; % don't forget, that we've missed some events because of that
%             break;
              shift = shift + pat.Theta( i, 1 );
              misses = misses + 1;
              continue;
        end
        ops=ops+3+length(ind)*3;
        tshift = eps + shift + pat.Theta( i, 1 );
        tmp = ind - tshift; %shift = sum of all shifts, in which symbol occurs from Mu
        [~, Irx] = min( abs( tmp ) ); % now we wanna find nearest event, from event, that we expect to be i-th event of pattern. x will be that event's shift from Mu 
       % Lool=binarySearch(ind, tshift, 'first', 'closest');
        
        ops=ops+8;
        rx = tmp(  Irx  ); %rx = tmp( find( abs( tmp ) == x ) ); % now we find index of that event
        prevrx = rx + tshift; % stores !absolute!(not shifted i mean) index in data 
        %calculate normpdf... Matlab is veery slow here on scalars
        %pr = exp( -rx^2 / (2*pat.Theta(i,2)^2) );%/(sqrt(2*pi)*pat.Theta( i, 2)); %normpdf( rx(1), 0, pat.Theta( i, 2) ); %our likelihood product part 
        pr = -rx^2 / ( 2*pat.Theta(i,2)^2 );
        if pr > conf.min_pow_missed%pr > 0.0001
            ops=ops+3+1+4;
            shift = shift + pat.Theta( i, 1 ) + rx; %% Add or not to add rx(1)... IT's VERY IMPORTANT (fixed pattern, or garmoshka)!!!!!!!!!!!!!!!!!!
            Lhc = Lhc + pr;
            %Lhc = Lhc * pr;

            if i == 1
                first_e = ind(Irx);
            end
            if i == start_index
                delta = ind( Irx ) - first_e;
            end

        else
            ops=ops+4;
            prevrx = tshift;
            shift = tshift - eps;%shift + pat.Theta( i, 1 );
            misses = misses + 1;
            if i == 1
                first_e = -1000000000000;%eps+shift;
            end
            if i == start_index
                delta = eps + shift - first_e;
            end
        end
        
%         if i <= start_index
%             delta = delta +  pat.Theta( i, 1 );
%         end
    end
    %fprintf('calcLH %.2f %d\n', delta, start_index);
    if start_index == 1
        delta = 0;
    end
    ops=ops+4;
    if eps + delta <= Nt && eps + delta >= 1
        Lh( eps + delta ) = Lhc;
        %Lh( eps + 1 + delta ) = Lhc * T_LOSS_FUN( misses, size( pat.Events, 2 ) );
        mLh( eps + delta ) = misses;    
    end
end
ops=ops+length(Lh)*6;
Lh = exp(Lh) .* T_LOSS_FUN( mLh, size( pat.Events, 2 ), conf.lambda ) / ( sqrt(2*pi)^size( pat.Events, 2 )*prod( pat.Theta(:,2)) );% / (prod(pat.Theta(:,2))*(2*pi)^( length(pat)/2 ) ) ;
% pat.Theta = uncut_theta;
% pat.Events = origEvents;
if from_end % now return all as normal
    pat.Events = wrev( pat.Events );
    pat.Theta = origTheta;
    Lh = wrev( Lh );
    mLh = wrev( mLh );
end
ops
if do_plot
    disp('ddd');
    plot (1:Nt, Lh, 'Color', 'b', 'LineWidth', 2);
    plot (1:Nt, mLh/10*(max(Lh)), '-', 'Color', 'r');
    
    pnn = length( pat.Events );
    elh = conf.lhmult/( (2*sqrt(pi))^size( pat.Events, 2 )*prod(pat.Theta(:,2)) );%1/(2*(2*pi)^(pnn/2-1) ) * sum( pat.Theta(:,2).^2 );
    plot([1, Nt], [elh elh], 'c-' );
    
    %plot konfetka
    %Here we try to filter maximums
    [ ~, mmaxs ] =  T_GET_MINMAX( Lh, 1, sum( pat.Theta(:,1) ), pat, conf );%    pat.Lh_maxs;

    
    plot( mmaxs, Lh( mmaxs ), 's', 'MarkerSize', 5, 'MarkerFaceColor', 'y', 'MarkerEdgeColor', 'r');
    %plot label
    thetas=  '';
    for i = 1 : numel(pat.Theta)/2
        thetas = [thetas sprintf('[%.1f, %.1f] ', pat.Theta(i,1), pat.Theta(i,2) )];
    end
    label = sprintf('pattern %s, Lh=%.2f, thetas = [ %s ]   Significant maximums = %d', pat.String, sum(pat.Lh), thetas, numel(mmaxs) );
    title( label );
            
    for eps = mmaxs 
        eps = double(eps);
        misses = 0;
        shift = 0;
        %Lh( eps + 1) = 1;
        prevrx = -1;
        xx = eps;
        yy = Lh( eps );
        size( pat.Events, 2 )
        for i = 1 : size( pat.Events, 2 )
            ind = event( pat.Events( i ) ).indexes; %All time moments, that pat occurs
            if from_end
                ind =  Nt - ind; 
            end
            ind = ind( ind > prevrx ); %Only these, which are AFTER previous event

            if isempty( ind ) % if we don't have next pattern element in data
                %misses = misses + numel( pat.Events ) - i + 1; % don't forget, that we've missed some events because of that
                break;
            end
            
            tmp = ind - ( eps + shift + pat.Theta( i, 1 ) ); %shift = sum of all shifts, in which symbol occurs from Mu
            x = min ( abs( tmp ) ); % now we wanna find nearest event, from event, that we expect to be i-th event of pattern. x will be that event's shift from Mu 
            rx = tmp( find( abs( tmp ) == x ) ); % now we find index of that event
            prevrx = rx( 1 ) + eps + shift + pat.Theta( i, 1 ); % stores !absolute!(not shifted i mean) index in data 
            %calculate normpdf... Matlab is veery slow here on scalars
            pr = exp( -rx(1)^2 / (2*pat.Theta(i,2)^2) );%/(sqrt(2*pi)*pat.Theta( i, 2)); %normpdf( rx(1), 0, pat.Theta( i, 2) ); %our likelihood product part 
            if log(pr) > conf.min_pow_missed
                shift = shift + pat.Theta( i, 1 ) + rx( 1 ); %% Add or not to add rx(1)... IT's VERY IMPORTANT (fixed pattern, or garmoshka)!!!!!!!!!!!!!!!!!!
                plot( eps+shift, -max(Lh)/size( event, 2 )/4 * pat.Events(i), '-rs','LineWidth',1, 'MarkerEdgeColor','b', 'MarkerFaceColor','g', 'MarkerSize', 6);
                %Lh( eps + 1 ) = Lh( eps + 1 ) * pr;
                shh = rx(1);
            else
                prevrx = eps + shift + pat.Theta( i, 1 );
                shift = shift + pat.Theta( i, 1 );
                plot( eps+shift, -max(Lh)/size( event, 2 )/4 * pat.Events(i), '-ro','LineWidth',1, 'MarkerEdgeColor','b',  'MarkerSize', 7);
                %misses = misses + 1;
                shh = 0;
            end
       
            
            %3 sigma
            plot( [eps+shift-3*pat.Theta(i, 2) - shh, eps+shift+3*pat.Theta(i, 2)-shh], [-max(Lh)/size( event, 2 )/4 * pat.Events(i), -max(Lh)/size( event, 2 )/4 * pat.Events(i)], '-','LineWidth',1, 'color', 'r');
            
            label = sprintf('\\delta=%.1f ', rx(1));
            text(eps+shift+3*pat.Theta(i, 2), -max(Lh)/size( event, 2 )/4 * (pat.Events(i)-0.2) , label,'FontSize',8);
            
            %mu
            plot( [eps+shift - shh  eps+shift - shh], [-max(Lh)/size( event, 2 )/4 * (pat.Events(i)+0.2) -max(Lh)/size( event, 2 )/4 * (pat.Events(i)-0.2)], '-', 'color', 'r', 'LineWidth',2);
            
            plot( [xx eps+shift], [yy -max(Lh)/size( event, 2 )/4 * pat.Events(i)], '--', 'color', 'm' );
            xx = eps+shift;
            yy = -max(Lh)/size( event, 2 )/4 * pat.Events(i);
            
        end
        %Lh( eps + 1 ) = Lh( eps + 1 ) * T_LOSS_FUN( misses, size( pat.Events, 2 ) );
        %mLh( eps + 1 ) = misses;    
    end
    for j = 1 : size(event,2)%size( pat.Events, 2 ) 
        %ind = event( pat.Events( j ) ).indexes;
        ind = event( j ).indexes;
        %plot( ind, - max(Lh)/size( pat.Events, 2 )/4 * j * ones( 1, size(ind,2) ), 's', 'Color', 'r');
        plot( ind, -max(Lh)/size( event, 2 )/4 * j * ones( 1, size(ind,2) ), 's',  'MarkerEdgeColor', 0.6*[1 1 1], 'MarkerSize', 3);
    end
end    
end

