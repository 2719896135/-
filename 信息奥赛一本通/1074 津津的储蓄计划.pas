procedure init;  
begin   
  reset(input);  
  rewrite(output);  
end;  
  
procedure terminate;  
begin  
  close(input); close(output);  
  halt;  
end;  
  
procedure main;  
var  
  i:longint;  
  a,rest,tot:longint;  
begin  
  rest:=0;  
  tot:=0;  
  for i:=1 to 12 do  
    begin  
      readln(a);  
      rest:=rest+300;  
      if rest<a then  
        begin  
          writeln(-i);  
          terminate;  
        end;  
      tot:=tot+((rest-a) div 100)*100;  
      rest:=(rest-a) mod 100;  
    end;  
  writeln((tot*1.2+rest):0:0);  
end;  
  
begin  
  init;  
  main;  
  terminate;  
end.  
