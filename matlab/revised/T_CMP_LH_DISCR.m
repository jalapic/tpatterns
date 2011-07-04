function [ mus, sigmas, N, lh ] = T_CMP_LH_DISCR( left_pat, right_pat, Nt, pattern_window, conf )
patL_ind = left_pat.LhEND_maxs;
patR_ind = right_pat.Lh_maxs;
weights = [];
mus=0;
sigmas=0;
N = 0;
lh = [];
pLR = zeros( numel( patL_ind ),  numel( patR_ind ) );
for i = 1 : size( patL_ind, 2 )
    for j = 1 : size( patR_ind, 2)
        pLR(i,j) = patR_ind(j) - patL_ind(i);
%         if pLR(i,j) > pattern_window
%             pLR(i,j) = 0;
%         end
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

if size(weights,1) > 512
    return
end


%if we don't have enough points
if size( weights, 1 ) < 3
    N=0;
    disp('smaaaal');
    mus=0;
    sigmas=0;
    return
end

weights = sortrows( weights, 1 );

N = size( weights, 1 );
%stabilize 

weights(:,2) = log(weights(:,2) + 1) ;
%weights(:,2) = weights(:,2) / max( weights(:,2) ) ;
%weights(:,1) = weights(:,1) + (rand(size(weights(:,1))) - 0.5) ;
%weights_stab = weights;

Neff = sum( weights(:,2) );
%N = Neff;

%weights = weights_stab ;

%  Mmu= 0 : 2 : pattern_window;
%  Msigma = 0.5:0.3:11;
%  Mmu = reshape( repmat(Mmu, numel(Msigma), 1 ), 1, numel(Msigma)*numel(Mmu) );
%  Msigma = repmat( Msigma, 1, numel(Mmu)/numel(Msigma) );
 

%
% kexp = 
i=0;
lmss=zeros(length(1 : 0.3 : 10),length(weights(:,1)));

W_std = std(weights(:,2));
W_sum = sum( weights(:,2) );

W_mean = mean( weights(:,2) );
W_var = var( weights(:,2) );
%exp
%[~,ctrs] = kmeans( weights(:,1), 22);
%ctrs
%acc = hist(weights(:,1), 0:pattern_window );

acc_lw = log(weights(:,2));

M = Nt;%max( weights(:,1));

muu = weights(:,1)';
muu = muu( muu <= conf.maxMu);

% global KKKK_g
% global kn_g
% kn_g = []
% KKKK_g = zeros(length(muu), round(pattern_window/100/2) );
im = 1;
for mu = muu%0 : 1 : pattern_window
    igg=1;
    
%     msigma = round(mu/6);
%     if msigma > pattern_window/100
%         msigma = round(pattern_window/100);
%     end
    msigma = conf.maxSigma;

    for sigma = 1 : 1 : msigma%pattern_window/60
%           if (sigma*3 < mu) && (mu+sigma*3<pattern_window) && ( sum( acc( round(mu-sigma*3):round(mu+sigma*3) ) ) < 4 )
%               continue;
%           end
            
        i=i+1;
            

        %M = Nt;
        
        
        %k = sum( weights(:,2) .* normpdf( weights(:,1), mu, sigma ) * S );
        %optimization again
        
        %k = sum( weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) ) );
        
        %K2
        %k = sum( weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) )/(sqrt(2*pi)*sigma) ); 
        k =sum( weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) ) ) / (sqrt(2*pi)*sigma); 
        
        %K3 
        %k = sum( log(weights(:,2)) - log(sqrt(2*pi)*sigma) - (weights(:,1)-mu).^2 /(2*sigma^2) );
        
        %gmu = W_sum * S / M;
        
        %K2
        %gmu = W_sum / M;
        
        %K3
        %gmu = N* mean( log( weights(:,2) ) ) - N*log(sqrt(2*pi)*sigma) - N*( M * mu^2 + M^3/3 - M^2*mu ) / (2*sigma^2*M);
        
        %K4
        gmu = 2*(1-mu/M)/M * W_sum;
        
%         if k < gmu 
%             continue
%         end

        
        %gsigma = (M-S)*N*S*( W_std + 1)/(M^2); old old
        
%         dsp = (M*S-S^2*sqrt(2))/(sqrt(2)*M^2);
%         sgma = W_mean^2 *dsp + (S/M)^2 * W_var + W_var*dsp;
%         sgma = sqrt(sgma * N); 
%         gsigma = sgma;
        
        %K2
%         dsp = W_var/M^2 + (M-2*sqrt(pi)*sigma)/(2*sqrt(pi)*sigma*M^2) * (W_mean^2 + W_var ); 
%         gsigma = sqrt( dsp * N );
        
        %K3
%         dsp = (mu^5 + (M-mu)^5 )/(20*M*sigma^4) - (mu^3+(M-mu)^3)^2 / ( 36 * M^2 * sigma^4);
%         sgma = var( log( weights(:,2) ) ) + dsp;
%         gsigma = sqrt( sgma * N );
        
        %K4
        varg = (1-mu/M) * ( 1/(sqrt(pi)*M*sigma) - 4/M^2 * (1-mu/M) );
        dsp = W_var*(2*(1-mu/M)/M)^2 + W_mean^2*varg + varg*W_var; 
        gsigma = sqrt( dsp * N );
%        varg
        %fprintf('%f %f %f\n', gmu, gsigma, k );
%         if k <= gmu + 2.5*gsigma
%             continue
%         end
        %Z(mu, sigma) = log(sqrt(2*pi)*gsigma) + ( gmu - k^2/(2*gsigma^2) );
        %lmss(igg,mu+1)=- (gmu-k)^2/(2*gsigma^2) -log(sqrt(2*pi)*gsigma);
%         KKKK_g(im,igg)  = -log(sqrt(2*pi)*gsigma) - (k - gmu)^2/(2*gsigma^2);
        igg=igg+1;
      
        
        tmp = -log(sqrt(2*pi)*gsigma) - (k - gmu)^2/(2*gsigma^2);
        if tmp < log( conf.alpha ) 
            %k > norminv( 0.995, gmu, gsigma )
           % kn_g=[kn_g; max(weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) )/(sqrt(2*pi)*sigma) ) mu sigma k];%[kn_g max(weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) )/(sqrt(2*pi)*sigma) ) ];
            if  (k / max(weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) )/(sqrt(2*pi)*sigma) ) > conf.kkmax )
                M2 = (k - gmu)/(gsigma);
                %tmp = normpdf( k, gmu, gsigma )
                
                lh = [ lh; tmp, mu, sigma, M2, k];
            else
                
                %disp('u2');
                %k / max(weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) ) )
            end
        end
        
    end
    im = im+1;
end
lh;
N = 0;
mus=0;
sigmas=0;
if ~isempty( lh )
    lh = sortrows(lh, -3);
    i = 1;
    while i <= size(lh,1)
        j = i+1;
        while j <= size(lh,1)
            if ( lh(j,2) < lh(i,2)+3*lh(i,3) ) && ( lh(j,2) > lh(i,2)-3*lh(i,3) )
                lh = lh( [1:j-1 j+1:end], : );
            else
                j=j+1;
            end
        end
        i = i + 1;
    end
    
    N = size( lh,1 );
    mus = lh(:,2);
    sigmas = lh(:,3);
end



% lh
% hold on
% plot (weights(:,1), (rand(size(weights(:,2)))*0.2 + weights(:,2))*max(abs(lmss(:)))/2, 'b*')
% plot (0:M, normpdf(0:M, lh(1,2), lh(1,3))*max(abs(lmss(:))), 'color', 'r')
% for i = 1:size(lmss,1)
%     plot (0:max(weights(:,1)), lmss(i,:), '-', 'color', [0 1 0]/i )
% end
% size(lmss)
% 
% %y = smooth( x, y,0.1,'rloess');
% yy = ksdensity( weights(:,1), 0:M, 'weights', weights(:,2), 'width', 500 );
% plot( 0:M, yy*20000, 'c');
% 
% plot(lh(:,2), -lh(:,3)*max(abs(lmss(:)))*1.2, 'r*');

%plot( lh, zeros(1,3), 'bo' );
% M
% lh
% TODO!! now we merge patterns only in max!!!!!!! 
%surf(Z);

% if  ~ isempty( lh )
%         mslh= lh( lh(:,2)==lh(1,2), : );
%         mslh= sortrows( mslh, 3 );
%         mus = mslh(end, 2);
%         sigmas =  mslh(end,3) ;
% 
% %    mus = lh(1, 2);
% %    sigmas =  lh(1,3) ;
% %     disp('::');
% %     lh(end,:)
% %     lh(1,:)
%     
%     N = 1;
% end

