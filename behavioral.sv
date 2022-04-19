module bh(y,a,b,c);
input a,b,c;
output reg y;
always @ (a,b,c)
begin 
	if( (~a&b&c)|(a&~b&c)|(a&b&~c)) y=1;   //if input is 011 or 101 or 110 then output = 1
	else y=0;
end
endmodule
