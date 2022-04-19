module mul_tb;
	reg [1:0] A, B;
	wire [3:0] C;
	mul m1(C, A, B);  //calling module mul
	initial
	begin
		//A = 2, B = 3
		A = 2'b10;
		B = 2'b11;
		
		//A = 0, B = 1
		#5 A = 2'b00;
		B = 2'b01;
		
		//A = 3, B = 3
		#5 A = 2'b11;
		B = 2'b11;
		
	end
	
	initial
	begin
		$monitor(" A = %b, B = %b,  C = A*B = %b",A, B, C);  //printing the result
	end
endmodule

