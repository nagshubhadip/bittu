//module for half adder
module ha(s,c,a,b);
	input a,b;
	output s,c;
	xor x1(s,a,b);  //sum = a XOR b
	and a1(c,a,b);  //carry = a AND b
endmodule

//module for 2 bit multiplier
module mul(C, A, B);
	input [1:0] A, B;
	output [3:0] C;
	wire p, q, r, s;   //intermediate wires
	
	and a1(C[0], A[0], B[0]);   //C[0] = A[0] AND B[0]
	and a2(p, A[0], B[1]);    //p = A[0] AND B[1]
	and a3(q, A[1], B[0]);    //q = A[1] AND B[0]
	and a4(r, A[1], B[1]);    //r = A[1] AND B[1]
	
	ha ha1(C[1], s, p, q);    //C[1] = p XOR q , (carry)s = p AND q
	ha ha2(C[2], C[3], r, s);    //C[2] = r XOR s , (carry)C[3] = r AND s
endmodule

