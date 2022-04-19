module comb_circ(S, A, B, C, D);
input [3:0]A, B, C, D;  //input variables
output reg [4:0]S;   //output variable
always @(A, B, C, D)
begin
	if(A+B > 14)    //if A+B > 14 THEN S = C+D+1
		S = C+D+1;
	else  //IF A+B <= 14 THEN S = C+D 
		S = C+D;
end
endmodule
