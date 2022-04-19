module mux2_1(f,d0,d1,s);
	input d0, d1, s;
	output f;
	wire w1,w2,w3;
	not not1(w1,s);  //w1 = s'
	and and1(w2,w1,d0);  //w2 = s'.d0
	and and2(w3,s,d1);   //w3 = s.d1
	or or1(f,w2,w3);    //f = s'd0 + sd1
endmodule
