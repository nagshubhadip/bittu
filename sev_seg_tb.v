module SevSegTB;
	reg [3:0]x;
	wire [6:0]seg;
	wire dp;
	integer i;
	//calling the bin7seg module
	bin7seg s1(x, seg, dp);
	
	initial begin
		for(i=0;i< 16; i = i+1)
		begin
			x = i;  //i value is the input to x
			#20;  //delay for 20 ns
		end
	end
	initial begin
		//print in the monitor
        	$monitor ("Time = %d , x = %b , abcdefg = %b",$time,x,seg);
        end
endmodule	

