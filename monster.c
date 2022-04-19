#include<stdio.h>
#include<math.h>

int main()
{
	//declaring variables of data-type int
	int m, h, xp_base, xp_adj;
	
	//input the monster's level
	printf("What is the monster's level?  ");
	scanf("%d",&m);
	
	//input the hero's level
	printf("What is the hero's level?  ");
	scanf("%d",&h);
	
	//printing the level of monster and hero 
	printf("The monster is level %d.\n",m);
	printf("The hero is level %d.\n",h);
	
	
	//calculation part
	
	xp_base = 100 + 2*m;
	xp_adj = (int)(xp_base * pow(1.1,m-h));
	
	//output part
	printf("The monster's base XP value is %d.\n",xp_base);
	printf("The monster's adjusted XP is %d.\n",xp_adj);
	
	return 0;
}//end of program

