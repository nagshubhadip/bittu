
module mux(Y,s1,s0,A, B, C);   //module defination
	input s1,s0;  //select inputs
	input [3:0]A, B, C;   //4 bit data input
	reg [3:0]X;   //4 bit intermediate register
	output reg [3:0]Y;  //4 bit output register
	
	
	always @(s1, s0, A, B, C)
	begin
		//X is the output of the first MUX
		if(s0 == 0)  //if s0 is 0 then X is set to A
			X = A;
		else    //if s0 is 1 then X is set to B
			X = B;
	
		if(s1 == 0)  //if s1 is 0 then Y is set to the output of the first MUX(i.e. X)
			Y = X;
		else    //if s1 is 1 then Y is set to C
			Y = C;
	
	end
endmodule

