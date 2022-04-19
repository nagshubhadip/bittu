#include<stdio.h>
int main()
{
int x = 0, y, z;
while(x <= 5)
{
	y = 2*x^2 + 3;
	if(y < 10)
		z = y -1;
	x = x+1;
	printf("x = %.4f //  y = %.4f  // z =  %.4f\n", (float)x, (float)y, (float)z);
}

return 0;
}
