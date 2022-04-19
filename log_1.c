#include<stdio.h>
#include<math.h>
int main()
{
	double t1, t2, r,x;
	//scanf("%lf %lf",&r);
	for(x=0; x<10 ; x=x+0.001)
	{
		for(r=0; r<10 ; r=r+0.01)
		{
			t1 = log(x+r) / log(2+r);
			t2 = (x*x+1)* exp(r*x/10);
			if(t1-t2+2 > -0.000001 && t1-t2+2 < 0.000001)
			{
				printf("x = %.3lf\nR = %.3lf\n",x,r);
				return 0;
			}
		}
	}
	printf("No solution.\n");
	return 0;
}
