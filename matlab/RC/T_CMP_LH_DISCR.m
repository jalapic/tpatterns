function [ mus, sigmas, N ] = T_CMP_LH_DISCR( left_pat, right_pat, Nt, pattern_window )
patL_ind = left_pat.LhEND_maxs;
patR_ind = right_pat.Lh_maxs;
weights = [];
pLR = zeros( numel( patL_ind ),  numel( patR_ind ) );
for i = 1 : size( patL_ind, 2 )
    for j = 1 : size( patR_ind, 2)
        pLR(i,j) = patR_ind(j) - patL_ind(i);
        if pLR(i,j) > pattern_window
            pLR(i,j) = 0;
        end
        if pLR(i,j) > 0 % ???????????????????????? > or >=
            weights = [ pLR(i,j), left_pat.LhEND( patL_ind(i) ) * right_pat.Lh( patR_ind(j) ); weights ];
        end
    end
end
%weights
%ok now we have our w_i distribution.
if isempty( weights )
 disp('Empty weights!!!!!!!!!')
 N=0;
 mus=0;
 sigmas=0;
 return
end

%if we don't have enough points
if size( weights, 1 ) < 4
    N=0;
    disp('smaaaal');
    mus=0;
    sigmas=0;
    return
end

weights = sortrows( weights, 1 );

N = size( weights, 1 );
%stabilize 
weights_stab = weights;
weights(:,2) = log(weights(:,2) + 1) ;
weights_stab(:,2) = weights(:,2) / max( weights(:,2) ) ;
Neff = sum( weights_stab(:,2) );
N = Neff;
lh = [];
weights = weights_stab ;

%  Mmu= 0 : 2 : pattern_window;
%  Msigma = 0.5:0.3:11;
%  Mmu = reshape( repmat(Mmu, numel(Msigma), 1 ), 1, numel(Msigma)*numel(Mmu) );
%  Msigma = repmat( Msigma, 1, numel(Mmu)/numel(Msigma) );
 

%
% kexp = 
i=0;
for mu = 0 : 1 :pattern_window
    for sigma = 1 : 0.2 : 10
        i=i+1;
        
        S = sigma*sqrt(2*pi);
        %M = Nt;
        M=pattern_window;
        
        %k = sum( weights(:,2) .* normpdf( weights(:,1), mu, sigma ) * S );
        %optimization again
        k = sum( weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) ) );
        
%         gmu =  N*sum( weights(:,2) )/M;
%         gsigma = sum(weights(:,2).^2)*2*sigma*sqrt(pi)*(1-sqrt(pi)*sigma/M)/M;
        
        gmu = sum( weights(:,2) ) * S / M;
        if k <= gmu 
            continue
        end
        %gsigma = ( M * sum( weights(:,2).^2 )*2*sqrt(pi)*sigma - sum(weights(:,2))^2 * 2*pi*sigma^2/N )/M^2;
        gsigma =  sum( weights(:,2).^2 )*2*sqrt(pi)*sigma/M - gmu^2/N ;
        
        gsigma = sqrt( gsigma );
        if k <= gmu + 2.5*gsigma
            continue
        end
        
        if exp(- (gmu-k)^2/(2*gsigma^2) )/(sqrt(2*pi)*gsigma) < 0.005 %k > norminv( 0.995, gmu, gsigma )
            if k / max(weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) ) ) > 2.5
                M2 = (k - gmu)/(gsigma);
                %tmp = normpdf( k, gmu, gsigma )
                tmp = -log(sqrt(2*pi)*gsigma) - (k -gmu)^2/(2*gsigma*gsigma);
                lh = [ lh; tmp, mu, sigma, M2, k];
            else
                %disp('u2');
                %k / max(weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) ) )
            end
        end
    end
end

if ~isempty( lh )
    lh = sortrows( lh, 1 ); % we want Theta with LARGEST sigma!!
end
%lh
%Neff*S/pattern_window
% hold on
% plot (weights(:,1), weights(:,2)/10, '*')
% plot (0:pattern_window, normpdf(0:pattern_window, lh(1,2), lh(1,3))/10, 'color', 'r')
% TODO!! now we merge patterns only in max!!!!!!! 
N = 0;
mus = 0;
sigmas = 0;
if  ~ isempty( lh )
    mus = lh(1, 2);
    sigmas =  lh(1,3) ;
    lh(1,1);
    
    N = 1;
end

