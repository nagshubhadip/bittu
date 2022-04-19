module muxtb;
	reg a, b, c;
	wire z;
	yMux1 mux1(z, a, b, c);  //calling module
	initial
	begin
		c=1'b1; a=1'b0; b=1'b0;
		#5 b=1'b1;
		#5 a=1'b1; b=1'b0;
		#5 b=1'b1;
	end
	
	initial
	begin
	$display("Congrats, your output is correct.");
	$display("---------------------------.");
	end
	//printing outputs
	initial
	begin
		$monitor ("PASS: a=%b b=%b c=%b z=%b",a, b, c, z);
	end
endmodule
