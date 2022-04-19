#include<stdio.h>

int main()
{
	int n, i, j, k, x, c = 0;
	printf("Enter the value of n in a nxn times: ");
	scanf("%d",&n);  //input n
	for(i = 0; i < n; i++)
	{
		printf(" (%d,%d) -->",0, i);  //at first, we will go along with the first row 
		c++;
	}
	printf("\n");
	
	x = n-1;
	
	//after traversing first row
	for(k = 1; k <= n; k++) //for every culumn
	{
		if(k%2 == 1) //if k is odd
		{
			for(j = 1; j < n; j++)
			{
				printf(" (%d,%d) -->",j, x); //then going top to bottom
				c++;
				if(c%n == 0 && c != n*n)
					printf("\n");
			}
			x--;
		}
		else   //if k is even
		{
			for(j = n-1; j >= 1; j--)
			{
				printf(" (%d,%d) -->",j, x); //then going bottom to up
				c++;
				if(c%n == 0 && c != n*n)
					printf("\n");
			}
			x--;
		}
	}
	printf(" END\n");
	return 0;
}

