module muxtb;
reg d0,d1,s;
wire z;
mux2_1 mux1(z,d0,d1,s);
initial
	begin
	s=1'b0;d1=1'bx;d0=1'b0;
	#5 d0=1'b1;
	#5s=1'b1;d1=1'b0;d0=1'bx;
        #5d1=1'b1;
	end
initial
	begin
	$monitor ("Time=%d,s=%b,d1=%b,d0=%b,z=%b",$time,s,d1,d0,z);
	end
endmodule
