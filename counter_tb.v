module counter_tb;
reg clk;
wire [7:0]cnt = 0;

cir4 c1(clk, cnt);

initial begin
	clk = 1'b0;
	repeat(225)
		#5 clk = ~clk;
end
initial begin
	$monitor("%d --> ",cnt);
end
endmodule
