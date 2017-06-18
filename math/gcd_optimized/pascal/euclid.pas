program euclid(input, output);
uses crt;

var x, y: Int64;
var result: Int64;

   function gcd(u, v: Int64): Int64;
   var t: Int64;

   begin 
      repeat 
         if u < v then
            begin
   	       t := u;
	       u := v;
  	       v := t;
            end;
         u := u - v;
      until u = 0;
      gcd := v;
   end;


begin
   writeln('Enter the first integer: ');
   readln(x);
   writeln('Enter the second integer: ');
   readln(y);
   result := gcd(x, y);
   writeln(result);
end.

