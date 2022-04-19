module onehot_to_bcd_test_bench;
	reg [2:0]one_hot;  //input register
	wire [3:0] bcd_ones, bcd_tens, bcd_hund;  //output wire
	wire [8:0]degrees;
	onehot_to_bcd x1(bcd_ones, bcd_tens, bcd_hund, degrees, one_hot);  //calling module
	
	initial
		begin
		
		one_hot = 3'b000;
		#5 one_hot = 3'b001;
		#5 one_hot = 3'b011;
		#5 one_hot = 3'b010;
		#5 one_hot = 3'b110;
		#5 one_hot = 3'b111;
		#5 one_hot = 3'b101;
		#5 one_hot = 3'b100;
		
		end
	//printing the result in the screen
	initial
		begin
		$monitor("one_hot = %b   =>    bcd_ones = %b,  bcd_tens = %b,  bcd_hund = %b,  degrees = %d",one_hot, bcd_ones, bcd_tens, bcd_hund, degrees);
		end
endmodule

