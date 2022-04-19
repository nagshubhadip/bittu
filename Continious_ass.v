module Cont_ass(Out1, Out2, Out3, A, B, C, D);

	input A, B, C, D;
	output Out1, Out2, Out3;
	
	//continious assignment
	assign Out1 = (A|~B) & (~C) & (C|D);
	assign Out2 = ((~C&D) | (B&C&D) | (C&~D)) & (~A | B);
	assign Out3 = ((A&B) | C) & (A | (~B&C));
	
endmodule

