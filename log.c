#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	double t1, t2, r;
	scanf("%lf",&r);
	for(x=0; ; x++)
	{
		t1 = log(x+r) / log(2+r);
		t2 = (x*x+1)* exp(r*x/10);
		if(t1-t2+2 == 0)
		{
			printf("%d\n",x);
			break;
		}
	}
	return 0;
}
