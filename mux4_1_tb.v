module muxtb;
reg s0, s1, d0, d1, d2, d3;
wire q;
mux4_1 mux(q,d0,d1,d2,d3,s0,s1);  //calling module (the order of the parameter must be same)
initial
	begin
	s1=1'b0;s0=1'b0;d3=1'bx;d2=1'bx;d1=1'bx;d0=1'b0;
	#100 d0=1'b1;
	#100 s1=1'b0;s0=1'b1;d3=1'bx;d2=1'bx;d1=1'b0;d0=1'bx;
        #100 d1=1'b1;
	#100 s1=1'b1;s0=1'b0;d3=1'bx;d2=1'b0;d1=1'bx;d0=1'bx;
        #100 d2=1'b1;
	#100 s1=1'b1;s0=1'b1;d3=1'b0;d2=1'bx;d1=1'bx;d0=1'bx;
        #100 d3=1'b1;
	end
//printing result
initial
	begin
	$monitor ("S1=%b,S0=%b    D3=%b,D2=%b,D1=%b,D0=%b   =>   Q=%b",s1, s0, d3, d2, d1, d0, q);
	end
endmodule


