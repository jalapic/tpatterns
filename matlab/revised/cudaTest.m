Np=1500;
Ns=50;

MaxMu = 700;

N=Np;
M=1000;
w1=round(normrnd(100, 10,Np,1));%
w2=rand(Np,1);
w= [w1 w2];
w=sortrows(w,1);
m2c = w(w(:,1)<=MaxMu, 1 );
tic;KK=mexD_CMP(w, 0.001, 2.1, 1.0, 1.0, Ns, 1000, MaxMu);toc;

K=zeros(size(w,1), Ns);
cK = zeros(size(w,1), Ns);
kn = [];
im=1;
W_sum=sum(w2);
W_mean=mean(w2);
W_var=var(w2);
pp=1;
ops = 0;
for mu = m2c'
    is=1;
    for sigma = 1 : Ns
       
        gmu = 2*(1-mu/M)/M * W_sum;ops=ops+5;
        varg = (1-mu/M) * ( 1/(sqrt(pi)*M*sigma) - 4/M^2 * (1-mu/M) );ops=ops+13;
        dsp = W_var*(2*(1-mu/M)/M)^2 + W_mean^2*varg + varg*W_var; ops=ops+11;
        gsigma = sqrt( dsp * N ); ops=ops+4;       
        
        gS(im,is)=gsigma;
        
        k = sum( exp(-( w(:,1)-mu ).^2/(2*sigma^2)).*w(:,2) )/(sqrt(2*pi)*sigma);ops=ops+length(w(:,2))*9+46;
        cK(im,is) = k;
        if (k > gmu) && ( -log(sqrt(2*pi)*gsigma) - (k -gmu)^2/(2*gsigma^2) < log(0.001) )
            ops=ops+12;
            K(im,is) =    -log(sqrt(2*pi)*gsigma) - (k -gmu)^2/(2*gsigma^2); 
          %  KL(im,is) = max( exp(-( w(:,1)-mu ).^2/(2*sigma^2)).*w(:,2) /(sqrt(2*pi)*sigma ) );
            kn(pp) = max( exp(-( w(:,1)-mu ).^2/(2*sigma^2)).*w(:,2) /(sqrt(2*pi)*sigma ) );
            ops=ops+length(w(:,2))*9;
            pp = pp+1;
            
        end
        is=is+1;
    end
    im=im+1;
end
toc;
sum(w(:,2))
mean(w(:,2))
var(w(:,2))

% %%
% lh =  T_CALC_LH     (events, Nt, ppl(end), false, false, 1, conf);
% clh = T_CALC_LH_CUDA(events, Nt, ppl(end), false, false, 1, conf);
% hold on;
% plot(lh, 'r', 'LineWidth',2);
% plot(clh, 'g-');
% 
% %%
% lh =  T_CALC_LH     (events, Nt, np12_3, false, false, 3, conf);
% clh2 = T_CALC_LH_CUDA(events, Nt, np12_3, false, false, 3, conf);
% hold on;
% plot(lh, 'r', 'LineWidth',2);
% plot(clh2, 'b--');
% 
% %%
% lh =   T_CALC_LH_CUDA(events, Nt, ppl(end), false, false, 3, conf);
% clh2 = T_CALC_LH_CUDA(events, Nt, ppl(end), false, true, 3, conf);
% hold on;
% plot(lh, 'r', 'LineWidth',2);
% plot(clh2, 'b--');
% 
% %%
% tic
% [m, s, n, lh] = T_CMP_LH_DISCR_CUDA(ps(11), ps(5), Nt, Nt, conf );
% toc
% disp('------NCuda----');
% tic
% [mm, ss, nn, lhh] = T_CMP_LH_DISCR(ps(11), ps(5), Nt, Nt, conf );
% toc