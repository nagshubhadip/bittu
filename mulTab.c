#include<stdio.h>
int main()
{
	int x,y,i,j;
	printf("Enter the number of columns:");
	scanf("%d",&x);  //storing the number of culumns
	printf("Enter the number of rows:");
	scanf("%d",&y);  //storing the number of rows
	for(i=1; i<y; i++)
	{
		for(j=1;j<x;j++)
		{
			printf("%4d",i*j);   //printing result for i*j
		} //end of for loop j
		printf("\n");
	}//end of for loop i
	return 0;
}//end of main

