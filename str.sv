module str(y,a,b,c);
	input a,b,c;
	output y;
	wire w1,w2,w3,w4,w5,w6;
	not n1(w1,a); //storing ~a to w1
	not n2(w2,b); //storing ~b to w2
	not n3(w3,c);   //storing ~c to w3
	and a1(w4,w1,b,c);  //w4 = a'bc
	and a2(w5,a,w2,c);  //w5 = ab'c
	and a3(w6,a,b,w3);  //w6 = abc'
	or or1(y,w4,w5,w6);   // y = a'bc + ab'c + abc'
endmodule
