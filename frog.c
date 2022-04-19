#include<stdio.h>


int main()
{
	int x1, v1, x2, v2, t;
	int i;
	
	//scanning input
	scanf("%d %d %d %d %d",&x1, &v1, &x2, &v2, &t);
	
	//loop will continue from 1 to t
	//when both the position of the frog matches within the given time
	//it will print "YA" and return.
	for(i = 1; i <= t; i++)
	{
		//checking the position of both the frog
		if(x1 + v1*i == x2 + v2*i)
		{
			//if position matches, print "YA" and return
			printf("YA\n");
			return 0;
		}//end of if
	}//end of for loop
	
	//if the program not returned, then the position has not matched
	//so print "TIDAK"
	printf("TIDAK\n");
	
	return 0;
}

