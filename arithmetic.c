#include<stdio.h>
int main()
{
	int x,y,a,b,c,e;
	float d;
	printf("\nEnter two numbers: ");
	scanf("%d %d",&x,&y);   //scanning two numbers
	//Arithmetic operation
	a = x+y;
	b = x-y;
	c = x*y;
	d = (float)x / (float)y;   //type casting the value of x any y to float
	e = x%y;
	//printing result
	printf("\nC Operation        Arithmetic Operator  C expression\n");
	printf("-----------------------------------------------------\n");
	printf("Addition           +                     %d + %d = %d\n",x,y,a);
	printf("Subtraction        -                     %d - %d = %d\n",x,y,b);
	printf("Multiplication     *                     %d * %d = %d\n",x,y,c);
	printf("Division           /                     %d / %d = %.2f\n",x,y,d);
	printf("Remainder          %%                     %d %% %d = %d\n",x,y,e);
	printf("-----------------------------------------------------\n");
	return 0;
}//end of main
