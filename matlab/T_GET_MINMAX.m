function [minimums, maximums] = T_GET_MINMAX( dens, mesh_step )
minimums = [];
maximums = [];
ddens = diff( dens );
for i = 2 : size( ddens, 2 )
    
    if ( ddens(i-1)*ddens(i) < 0 )
        if ( ddens(i-1) > 0 )
            maximums = [ maximums int32( (i-1) * mesh_step ) ];
        else
            minimums = [ minimums int32( (i-1) * mesh_step ) ];
        end
    end
end
maximums
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