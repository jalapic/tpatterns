function [ mus, sigmas, N, lh ] = T_CMP_LH_DISCR_CUDA( left_pat, right_pat, Nt, pattern_window, conf )
patL_ind = left_pat.LhEND_maxs;
patR_ind = right_pat.Lh_maxs;
weights = [];
pLR = zeros( numel( patL_ind ),  numel( patR_ind ) );

mus=0;
sigmas=0;
N=0;

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

%size(weights)
%pause
% if size(weights,1) > 512
%     return
% end

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

lh = [];

i=0;

%exp
%[~,ctrs] = kmeans( weights(:,1), 22);
%ctrs
%acc = hist(weights(:,1), 0:pattern_window );


M = Nt;%max( weights(:,1));


lh = mexD_CMP(weights, conf.alpha, conf.kkmax, 1.0, 1.0, conf.maxSigma, Nt, conf.maxMu );
%fprintf('\nlhsis=%d wsize=%d %d\n', size(lh,1), size(weights,1), round(pattern_window/100) );
%pause
% for ii = clh'
%     if  (k / max(weights(:,2) .* exp( -(weights(:,1)- mu).^2 /(2*sigma^2) )/(sqrt(2*pi)*sigma) ) > 2)
%         M2 = (k - gmu)/(gsigma);
%          %tmp = normpdf( k, gmu, gsigma )
%                 lh = [ lh; tmp, mu, sigma, M2, k];
%             else
% end

N = 0;
mus=0;
sigmas=0;
%ltd = ones(size(lh,1));

if ~isempty( lh )
    lh = sortrows(lh, -2);
    i = 1;
        
    while i <= size(lh,1)
        j = i+1;
        while j <= size(lh,1)
            if ( lh(j,1) < lh(i,1)+3*lh(i,2) ) && ( lh(j,1) > lh(i,1)-3*lh(i,2) )
                lh = lh( [1:j-1 j+1:end], : );
            else
                j=j+1;
            end
        end
        i = i + 1;
    end
    
    N = size( lh,1 );
    mus = lh(:,1);
    sigmas = lh(:,2);
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

