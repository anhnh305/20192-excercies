
function phuongTrinhNhiet()
  M = 20;
  Time = 1;
  dt = 0.01;
  dx = 0.1;
  D = 0.1;
  
  T = ones(1,M).*25;
  dT = 10;
  
  for t = 0:Time/dt
    dT = DHB2(T, dT, dx,D);
    for i = 1:M
      T(i) += dT(i)*dt;
    endfor
  endfor
  T
  plot([1:20],T,'-');
endfunction

function [dT] = DHB2(T, dT,dx,D)
  for i= 1:20
    c = T(i);
    if(i==1)
    l = 100.0;
  else
    l = T(i - 1);
  endif
  if(i==20)
  r = 25.0;
else
  r = T(i + 1);
endif
dT(i) = D *(r-2*c+l)/(dx*dx);
endfor
endfunction
