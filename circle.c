#include<stdio.h>   //for standard input output function
#include<math.h> //for sqrt() function
int main()
{
	float L,R,x;  //declaring variable
	printf("\nEnter the Side of Square : ");
	scanf("%f",&L);
	printf("\nEnter the Radius of Circle : ");
	scanf("%f",&R);
	if(sqrt(2)*L <= 2*R )  //checking if the square can be placed inside the circle or not
		printf("\nThe square can be placed inside the circle.\n");
	else
		printf("\nThe square cannot be placed inside the circle.\n");
	x = 2*R / sqrt(2);   //x is storing the largest side that can be placed inside the circle
	printf("\nLargest side of square that can be placed inside the circle = %.4f\n\n",x);
	return 0;
}//end of main
