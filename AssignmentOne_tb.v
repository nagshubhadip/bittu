module ass1_tb;
	reg A, B, C, D;
	wire F;
	
	assOne a1(F, A, B, C, D);  //calling module
	
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
		$monitor(" A = %b, B = %b, C = %b, D = %b    =>     F = %b",A, B, C, D, F);
	end
endmodule

