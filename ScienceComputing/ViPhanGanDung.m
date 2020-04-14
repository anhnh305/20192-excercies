clear;clc;% Example functionf = @(y,t) -20.*y+7.*exp(-0.5.*t);% Function to calculate differentiate in range (t0,t) using Euler method.function [value] = Euler(dy,y0,t0,h,t)   iter = (t-t0)/h;  y_ans = zeros(1,iter);  y_ans(0+1) = y0;  t = t0;  for i=1:iter    t = t + h;    y_ans(i+1) = y_ans(i) + h.*dy(y_ans(i),t);  endfor;  value = y_ans;
endfunction;
t = 1;y0 = 5;t0 = 0;% Try with different value of hvalue_euler_001 = Euler(f,y0,t0,0.01,t);value_euler_01 = Euler(f,y0,t0,0.1,t);value_euler_1 = Euler(f,y0,t0,1,t);right_t_001 = t0:0.01:t;right_t_01 = t0:0.1:t;right_t_1 = t0:1:t;%Plot Eulerfigure(1);hold on;plot(right_t_001,value_euler_001,'r-');plot(right_t_01,value_euler_01,'g-');plot(right_t_1,value_euler_1,'b-');right_y = @(t) 5.*e.^(-20.*t)+(7/19.5).*(e.^(-0.5.*t)-e.^(-20.*t));plot(right_t_001,right_y(right_t_001),'ro');legend('h = 0.01','h=0.1','h=1','Right ans');hold off;% Function to calculate differentiate in range (t0,t) using Rouge-Kutta method.function [value] = RougeKutta(dy,y0,t0,h,t)   iter = (t-t0)/h;  y_ans = zeros(1,iter);  y_ans(0+1) = y0;    t = t0;  for i=1:iter    k1 = h*dy(y_ans(i),t);    k2 = h*dy(y_ans(i)+k1,t+h);    y_ans(i+1) = y_ans(i) + 1/2*(k1+k2);    t = t + h;  endfor;  value = y_ans;endfunction;value_rk_001 = RougeKutta(f,y0,t0,0.01,t);value_rk_01 = RougeKutta(f,y0,t0,0.1,t);value_rk_1 = RougeKutta(f,y0,t0,1,t);%Plot Rouge-Kuttafigure(2);hold on;plot(right_t_001,value_rk_001,'r-');plot(right_t_01,value_rk_01,'g-');plot(right_t_1,value_rk_1,'b-');plot(right_t_001,right_y(right_t_001),'ro');legend('h = 0.01','h=0.1','h=1','Right ans');% Compare Euler and Rouge-Kuttafigure(3);hold on;plot(right_t_01,value_rk_01,'b-');plot(right_t_01,value_euler_01,'g-');plot(right_t_01,right_y(right_t_01),'r-');legend('Rouge Kutta','Euler','Right Ans');