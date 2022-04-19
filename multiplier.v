module multiplier(C,A,B);
	input [2:0]A;
	input [3:0]B;
	output [6:0]C;
	wire [4:0]S;
	assign C[0] = A[0] & B[0];
	assign S[4:0] = ( 4{A[1]} & B ) + ({1'b0,  (3{A[0]} & B[3:1])});
	assign C[1] = S[0];
	assign C[6:2] = (4{A[3]} & B[3:0]) + S[4:1];
endmodule
