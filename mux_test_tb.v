module mux_test_tb;
	reg [15:0]B;  //input B of 16 bit
	reg s, a;   //select inputs
	wire [15:0]Y;   //output wire of 16 bits

	mux_test m1(Y, s, a, B);  //calling module mux_test
	initial
		begin
		B = 16'b 0000110000011011;  //setting the value of  B
	
		//passing each combination of s, a to the mux
		s = 1'b0; a = 1'b0;
		#5 a = 1'b1;
		#5 s = 1'b1; a = 1'b0;
      		#5 a = 1'b1;
		end
	
	//output part	
	initial
		begin
		$monitor ("B = %b, s=%b, a=%b  =>  Y = %b", B, s, a, Y);
		end
endmodule

