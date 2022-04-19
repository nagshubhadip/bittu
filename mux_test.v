module mux_test(Y, s, a, B);   //module definition
	input s, a;  //select inputs
	input [15:0]B;   //16 bit data input
	reg p;   //1 bit intermediate register to store a AND s
	output reg [15:0]Y;  //16 bit output register
	
	
	always @(s, a, B)
	begin
		//p will act as the select input of the MUX
		if(s == 1 && a == 1)  //if s and a both are 1, then p = 1
			p = 1;
		else    //if s and a both are not equal to 1, then p = 0
			p = 0;
	
		if(p == 0)  //if p is 0 then Y is set to B
			Y = B;
		else    //if s1 is 1 then Y is set to 1111111111111111
			Y = 16'b1111111111111111;
	
	end
endmodule

