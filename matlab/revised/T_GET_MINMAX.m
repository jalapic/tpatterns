function [minimums, maximums] = T_GET_MINMAX( dens, mesh_step, pat_len, pat, conf )
minimums = [];
maximums = [];
ddens = diff( dens );

if(dens(1) > dens(2) )
    maximums=[maximums 1];
end

if ( dens(1) > dens(2)  )
            maximums = [ 1 ];
end
if ( dens(2) > dens(1)  )
            minimums = [ 1 ];
end

N = size(pat.Events, 2);
mv = 1/( (2*sqrt(pi))^N * prod(pat.Theta(:,2)) )*conf.lhmult;

for i = 2 : size( ddens, 2 )-1
    
%     if ( ddens(i-1)*ddens(i) < 0 )
%         if ( ddens(i-1) > 0 )
%             maximums = [ maximums int32( (i-1) * mesh_step ) ];
%         else
%             minimums = [ minimums int32( (i-1) * mesh_step ) ];
%         end
%     end
    if dens(i) < mv
        continue;
    end
        
    if ( dens(i) > dens(i-1) &&  dens(i) > dens(i+1) )
            maximums = [ maximums i ];
    end
    if ( dens(i) < dens(i-1) &&  dens(i) < dens(i+1) )
            minimums = [ minimums i ];
    end
end


mmaxs = maximums( dens(maximums) > 1/( (2*sqrt(pi))^N * prod(pat.Theta(:,2)) )*conf.lhmult ); %(exp(-N/2)*0.8) );%0.02 );
blahblah = true;
while blahblah
    blahblah = false;
    for i = 1:numel( mmaxs )-1
        if ( mmaxs(i+1) - mmaxs(i) < pat_len )
            if dens(mmaxs(i+1)) < dens(mmaxs(i))
                mmaxs = [ mmaxs(1 : i) mmaxs(i+2 : end) ];
            else
                mmaxs = [ mmaxs(1 : i-1) mmaxs(i+1 : end) ];
            end
            blahblah = true;
            break;
        end
    end
end
maximums = mmaxs;
end
% for i = 11:size(dens,2)-11
%     if ( ( dens(i-10) < dens(i) ) && ( dens(i-5) < dens(i) ) && ( dens(i+10) < dens(i) ) && ( dens(i+5) < dens(i) ) )
%         maximums( size(maximums, 2) + 1 ) = int32( i*mesh_step ); 
%     end
%     if ( ( dens(i-10) > dens(i) ) && ( dens(i-5) > dens(i) ) && ( dens(i+10) > dens(i) ) && ( dens(i+5) > dens(i) ) )
%         minimums( size(minimums, 2) + 1 ) = int32( i*mesh_step ); 
%     end
% end
% 
% maximums = unique(maximums);
% minimums = unique(minimums);