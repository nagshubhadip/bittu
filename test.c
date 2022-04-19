#include<stdio.h>

int main()
{
	int *ptr;   //bottom of the stack
	int arr[4];  //middle f the stack
	arr[0] = 1;   //assigning the values to the array
	arr[3] = 8;
	ptr = arr+2;    //ptr is pointing to location arr[2]
	int x=5;   //top of the stack
	printf("%d %d",x,*ptr);
	return 0;
}
