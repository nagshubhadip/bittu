module mux4bit(f,s,d1,d0);
input [3:0]d1;
input [3:0]d0;
input s;
output reg [3:0]f;   //outpur register
always @(s,d1,d0)
begin
	if(s==0) f=d0;   //if select input =0, then output is d0
	else f=d1;       //if select input =1, then output is d1
end
endmodule
