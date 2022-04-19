module onehot_to_bcd(bcd_ones, bcd_tens, bcd_hund, degrees, one_hot);

input [2:0]one_hot;
output reg [3:0]bcd_ones, bcd_tens, bcd_hund;
output reg [8:0]degrees;

always @(one_hot)  //whenever one_hot changes
begin
	if(one_hot == 3'b000)  //if one_hot is 000
	begin
		bcd_ones = 4'b0000;
		bcd_tens = 4'b0000;
		bcd_hund = 4'b0000;
		degrees = 0;
	end
	
	else if(one_hot == 3'b001)  //if one_hot is 001
	begin
		bcd_ones = 4'b0101;
		bcd_tens = 4'b0100;
		bcd_hund = 4'b0000;
		degrees = 45;
	end
	
	else if(one_hot == 3'b011)  //if one_hot is 011
	begin
		bcd_ones = 4'b0000;
		bcd_tens = 4'b1001;
		bcd_hund = 4'b0000;
		degrees = 90;
	end
	
	else if(one_hot == 3'b010)  //if one_hot is 010
	begin
		bcd_ones = 4'b0101;
		bcd_tens = 4'b0011;
		bcd_hund = 4'b0001;
		degrees = 135;
	end
	
	else if(one_hot == 3'b110)  //if one_hot is 110
	begin
		bcd_ones = 4'b0000;
		bcd_tens = 4'b1000;
		bcd_hund = 4'b0001;
		degrees = 180;
	end
	
	else if(one_hot == 3'b111)  //if one_hot is 111
	begin
		bcd_ones = 4'b0101;
		bcd_tens = 4'b0010;
		bcd_hund = 4'b0010;
		degrees = 225;
	end
	
	else if(one_hot == 3'b101)  //if one_hot is 101
	begin
		bcd_ones = 4'b0000;
		bcd_tens = 4'b0111;
		bcd_hund = 4'b0010;
		degrees = 270;
	end
	
	else if(one_hot == 3'b100)  //if one_hot is 100
	begin
		bcd_ones = 4'b0101;
		bcd_tens = 4'b0001;
		bcd_hund = 4'b0011;
		degrees = 315;
	end
end
endmodule
