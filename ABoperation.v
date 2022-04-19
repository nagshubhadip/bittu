module ab_opt(AplusB, AminusB, AmultB, A, B);
	input [3:0] A, B;
	output reg [4:0] AplusB, AminusB;
	output reg [7:0] AmultB;
	
	always @ (A or B)
	begin
		AplusB = A+B;
		AminusB = A-B;
		AmultB = A*B;
	end
endmodule

