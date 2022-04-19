module cir4(clk, cnt);
input clk;
output [7:0]cnt;
reg [7:0]cnt;

always@(posedge clk)
begin
	if(cnt == 219)
		cnt <= 0;
	else
		cnt<= cnt+1;
	end
endmodule
