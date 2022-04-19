#include<stdio.h>
double exponential(double x)
{
	if( x <= 1e-9 && x >= -1e-9)  //checking if the value of x is very less
		return 1.0 + x;
	double t = exponential(x/2);  //storing the value of exp(x/2) in a temprary variable
	return t*t;   //returning square of the temporary variable
} //end of function
int main(int argc, char **argv)
{
	double x,y;
	printf("Please enter a real number:\n");
	scanf("%lf",&x);  //scanning the value of x
	y = exponential(x);  //function calling
	printf("exp(%lf) = %le\n",x,y);  //printing result
	return 0;
}//end of main
