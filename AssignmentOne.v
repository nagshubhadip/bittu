module assOne(F, A, B, C, D);
	input A, B, C, D;
	output F;
	wire w1, w2, w3, w4;
	
	not n1(w1, A);  //w1 <= A'
	
	or o1(w2, A, B); //w2 <= A+B
	or o2(w3, C, D); //w3 <= C+D;
	or o3(w4, w1, B, D); //w4 <= A'+B+D
	
	and a1(F, w2, w3, w4); //F <= w2.w3.w4
endmodule

