#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	long int N = 1000000, M = 0, i;
	double x, y, temp;
	
	srand(time(0));  //this will generate different random number
	for(i=1; i<=N; i++)
	{
		temp = ((float) rand() / (float)RAND_MAX);
		x = temp * (1-(-1)) + (-1);  //generating value for x
		
		temp = ((float) rand() / (float)RAND_MAX);
		y = temp * (1-(-1)) + (-1);  //generating value for y
		
		//if x^2 + y^2 <= 1 then increment M
		if ( x*x + y*y  <= 1)
			M++;
	}
	
	//calculating area
	double area = ((double)M/N) * 4;
	
	printf("Approximation to the area of the unit disk is : %.4lf\n", area);
	return 0;
}

