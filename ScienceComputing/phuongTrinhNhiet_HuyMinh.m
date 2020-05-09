clear;
clc;

function [dFx dFy dFz] = hao_ham_bac_2(F,dx,dy,dz)
  [X Y Z] = size(F);
  dFx = zeros(X,Y,Z);
  dFy = zeros(X,Y,Z);
  dFz = zeros(X,Y,Z);
  
  for i=1:X
    for j=1:Y
      for k=1:Z
        
        c = F(i,j,k);
        if (i==1);
          u = 100;
        else;
          u = F(i-1,j,k);
        endif;
        
        if (i==X);
          d = 100;
        else;
          d = F(i+1,j,k);
        endif;
       
       if (j==1);
          l = 100;
        else;
          l = F(i,j-1,k);
        endif;
        
        if (j==Y);
          r = 100;
        else;
          r = F(i,j+1,k);
        endif;
        
         if (k==1);
          f = 100;
        else;
          f = F(i,j,k-1);
        endif;
        
        if (k==Z);
          b = 100;
        else;
          b = F(i,j,k+1);
        endif;
        
        dfx(i,j,k) = (u+d-2*c)/(dx*dx);
        dfy(i,j,k) = (l+r-2*c)/(dy*dy);
        dfz(i,j,k) = (f+b-2*c)/(dz*dz);
        
      endfor;
    endfor;
  endfor;

endfunction;

  
caxis ([0 100])
M = 30;
T = 1000;
dt = 10; 

dx = 1;
dy = 1;
dz = 1;

n = M/dx;
m = M/dy;
o = M/dz;

D = 0.1;

C = ones(m,n,o).*25; 
FD = zeros(size(C));

xx = 1:m;
yy = 1:n;
zz = 1:o;

for t=1:dt:T;
%  break;  
  [d2Cx d2Cy d2Cz] = hao_ham_bac_2(C,dx,dy,dz);

  FD = d2Cx + d2Cy + d2Cz;
  
  C = C + D*dt.*FD;
  figure(1), clf;
  hold on;  
  for i=1:o
    mesh(xx,yy,ones(m,n).*zz(i),C(:,:,i));
  endfor;
  t
  pause(1);
endfor;


