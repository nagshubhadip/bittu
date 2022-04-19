//testbench
module dectb;
reg [2:0]X;  //input register
reg G1, G2A_L, G2B_L;
wire [7:0]Y_L;   //output wire
dec dec1(Y_L, X, G1, G2A_L, G2B_L);  //calling module


initial 
	begin
	$display("Decoder Disabled: G1 = 0, G2A_L = x, G2B_L = x");
	//passing X, G1 = 0, G2A_L = x, G2B_L = x
	X = 3'b000; G1 = 1'b0; G2A_L = 1'bx; G2B_L = 1'bx;
	#3 X = 3'b001;
	#3 X = 3'b010;
	#3 X = 3'b011;
	#3 X = 3'b100;
        #3 X = 3'b101;
        #3 X = 3'b110;
        #3 X = 3'b111;

	
	$display("Decoder is Enabled: G1 = 1, G2A_L = 0, G2B_L = 0");
	//passing X, G1 = 1, G2A_L = 0, G2B_L = 0
	X = 3'b000; G1 = 1'b1; G2A_L = 1'b0; G2B_L = 1'b0;
	#3 X = 3'b001;
	#3 X = 3'b010;
	#3 X = 3'b011;
	#3 X = 3'b100;
        #3 X = 3'b101;
        #3 X = 3'b110;
        #3 X = 3'b111;

	end
initial
	begin
	$monitor ("X = %b, Y_L = %b", X, Y_L);  //printing result
	end


endmodule

