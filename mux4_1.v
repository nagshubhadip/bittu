module mux2_1(f,d0,d1,s);
	input d0, d1, s;
	output f;
	wire w1,w2,w3;
	not not1(w1,s);  //w1 = s'
	and and1(w2,w1,d0);  //w2 = s'.d0
	and and2(w3,s,d1);   //w3 = s.d1
	or or1(f,w2,w3);    //f = s'd0 + sd1
endmodule

module mux4_1(Q, D0, D1, D2, D3, S0, S1);
	input D0, D1, D2, D3, S0, S1;
	output Q;
	wire W1, W2;
	
	mux2_1 M1(W1, D0, D1, S0);  //storing the mux result of D0 and D1 to W1
	mux2_1 M2(W2, D2, D3, S0);  //storing the mux result of D2 and D3 to W2
	mux2_1 M3(Q, W1, W2, S1);   //storing the mux result of W1 and W2 to Q
endmodule
