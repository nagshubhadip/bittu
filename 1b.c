#include<stdio.h>
int main()
{
	int n[10] = {1,2,3,4,5,6,7,8,9,10};
	int total = 0;
	for( int i = 0; i < 10; i++ )
		total = total + n[i];  //summimg up all elements
	printf("Total = %d\n",total);
	return 0;
}//end of program

