module comb_circ_TB;
reg [3:0]A, B, C, D;  //INPUT REGISTER
wire [4:0]S;   //OUTPUT WIRE
comb_circ n1(S, A, B, C, D);  //CALLING MODULE
initial begin 
	A = 7; B = 8; C = 5; D = 3;
	#5 A = 3; B = 9; C = 1; D = 10;
	#5 A = 13; B = 1; C = 7; D = 12;
	#5 A = 9; B = 10; C = 11; D = 5;

end
initial begin
	$monitor("A = %d  B = %d C = %d D = %d ==>  S = %d",A, B, C, D, S);  //PRINTING IN THE MONITOR
end
endmodule
