#include<stdio.h>
int main()
{
	int n[5] = {1,2,3,4,5};
	int x = n[4]; 
	n[4] *= 3;  //multiplication of 3 and 4'th element of the array and storing it
	printf("4'th element is %d and %d*3 = %d\n",x,x,n[4]);
	printf("The array is : ");
	for(int i = 0; i < 5; i++ )
		printf("%d ",n[i]); //printing array
	printf("\n");
	return 0;
}//end of program

