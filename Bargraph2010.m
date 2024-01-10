clear all
s=serial('COM4');
set(s,'BaudRate',19200);
set(s, 'Terminator','LF');
set(s, 'DataBits',8);
set(s, 'StopBits',1);
fopen(s)
s.ReadAsyncMode='continuous';
t=[];
v=[];
readasync(s);
 
try
i=1;
j=1;
 
figure(1);
h=bar(nan);
title('Bar Graph 2010');
 
while (i<=1000000)
  v(i)=str2double(fscanf(s));    
  if(v(i)<=10)
   if(i==j)
      set(h,'YData',v);
      xlim([i-100 j]);
      drawnow
      j=j+100;
      end
    i=i+1;
  end
end
 
fclose(s);
delete(s)
clear s
 
catch exception
    fclose(s);    
    delete(s)
    clear s
    throw (exception);
end             
 
 
