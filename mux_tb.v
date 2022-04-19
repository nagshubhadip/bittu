module mux_tb;
	reg [3:0]A, B, C;  //inputs of 4 bit
	reg s0, s1;   //select input
	wire [3:0]Y;   //output wire of 4 bit

	mux mux1(Y, s1, s0, A, B, C);  //calling module mux
	initial
		begin
		A = 4'b1010; B = 4'b 1111; C = 4'b0110;  //setting a value of A, B, C
	
		//passing each combination of s1, s0 to the mux
		s1 = 1'b0; s0 = 1'b0;
		#5 s0 = 1'b1;
		#5 s1 = 1'b1; s0 = 1'b0;
      		#5 s0 = 1'b1;
		end
	
	//output part	
	initial
		begin
		$monitor (" A = %b, B = %b, C = %b, s1=%b, s0=%b  =>  Y = %b",A, B, C, s1, s0, Y);
		end
endmodule
