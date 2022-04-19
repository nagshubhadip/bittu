//yMux1 module
module yMux1(z, a, b, c);
	output z;
	input a, b, c;
	wire notC, upper, lower;
	
	//Gates and interconnections for MUX
	//insert code below
	not n1(notC, c);   //notC = c'
	
	and a1(upper, a, notC);   //upper = ac'
	and a2(lower, b, c);      //lower = bc
	
	or o1(z, upper, lower);   //z = upper + lower = ac' + bc
	//insert code above
endmodule

