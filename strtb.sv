module two_ones;
reg a,b,c;
wire y;
str s1(y,a,b,c);
initial begin
	a=0;b=0;c=0;
	#3 c=1;
	#3 b=1;c=0;
	#3 c=1;
	#3 a=1;b=0;c=0;
        #3 c=1;
        #3 b=1;c=0;
        #3 c=1;
	end
initial begin
	$monitor("a=%b b=%b c=%b   s=%b ",a,b,c,y);
	end
endmodule
