module ab_opt_tb;
	reg [3:0] A, B;
	wire [4:0] AplusB, AminusB;
	wire [7:0] AmultB;
	ab_opt ab1(AplusB, AminusB, AmultB, A, B);
	
	initial begin
		A = 4'b1011; B = 4'b0111;
		
		#10 A = 4'b0110; B = 4'b0101;
		
		#10 A = 4'b1111; B = 4'b0001;
		
		#10 A = 4'b0011; B = 4'b0100;
	end
	
	initial begin
		$monitor("A = %b(%d), B = %b(%d)  => A+b = %b(%d), A-B = %b(%d), A*B = %b(%d)",A, A, B, B, AplusB, AplusB, AminusB, AminusB, AmultB, AmultB);
	end
endmodule

