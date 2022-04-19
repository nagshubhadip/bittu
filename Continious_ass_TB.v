module contAss_tb;
	reg A, B, C, D;
	wire Out1, Out2, Out3;
	
	Cont_ass c1(Out1, Out2, Out3, A, B, C, D);  //calling module
	
	initial
	begin
		//input combinations
		A = 0; B = 0; C = 0; D = 0;
		#3 D = 1;
		#3 C = 1; D = 0;
		#3 D = 1;
		#3 B = 1; C = 0; D = 0;
		#3 D = 1;
		#3 C = 1; D = 0;
		#3 D = 1;
		#3 A = 1; B = 0; C = 0; D = 0;
		#3 D = 1;
		#3 C = 1; D = 0;
		#3 D = 1;
		#3 B = 1; C = 0; D = 0;
		#3 D = 1;
		#3 C = 1; D = 0;
		#3 D = 1;
		
	end
	
	initial
	begin
		//printing results
		$monitor(" A = %b, B = %b, C = %b, D = %b    =>     Out1 = %b, Out2 = %b, Out3 = %b",A, B, C, D, Out1, Out2, Out3);
	end
endmodule

