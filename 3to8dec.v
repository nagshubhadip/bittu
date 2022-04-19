//behavioral model
module dec(Y_L, X, G1, G2A_L, G2B_L);
input [2:0]X;  //inputs
input G1, G2A_L, G2B_L;
output reg [7:0]Y_L;  //output register


always @(X, G1, G2A_L, G2B_L)
begin
	if(G1 == 1'b1 &&  G2A_L == 1'b0 && G2B_L == 1'b0)  //if G1 = 1, G2A_L = 0, G2B_L = 0
	begin
		if(X == 3'b000) Y_L = 8'b11111110;
		else if(X == 3'b001) Y_L = 8'b11111101;
		else if(X == 3'b010) Y_L = 8'b11111011;
		else if(X == 3'b011) Y_L = 8'b11110111;
		else if(X == 3'b100) Y_L = 8'b11101111;
		else if(X == 3'b101) Y_L = 8'b11011111;
		else if(X == 3'b110) Y_L = 8'b10111111;
		else if(X == 3'b111) Y_L = 8'b01111111;
	end
		
	else 
		Y_L = 8'b11111111;
	
end
endmodule

