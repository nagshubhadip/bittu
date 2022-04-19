#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randomNo() //function for generating random number
{
	srand(time(0));
	int x = rand()%10;  //generating random number of one digits
	int y = rand()%10;
	printf("How much is %d + %d ? ",x,y);
	return x+y;
}
int main()
{
	int res,z,c,flag;
	while(1)
	{
		res = randomNo();  //storing the sum of two random number
		while(1)
		{
			printf("\n=> ");
			scanf("%d",&z);  //scanning user input
			flag = 0;  //flag = 0 means user answered wrong///// flag = 1 means user answered correct
			if (z == -1)
			{
				return 0;  //if user enters -1, then stop or return
			}
			else if(z == res)  //if the answer is correct
			{
				srand(time(0));
				c = rand()%4 + 1;  //generating random number from 1 to 4
				switch(c)
				{
					case 1:
						printf("\nVery Good!\n");
						flag = 1;  //making flag = 1 as user answered correctly
						break;
					case 2:
						printf("\nExcellent!\n");
						flag = 1;
						break;
					case 3:
						printf("\nNice work!\n");
						flag = 1;
						break;
					default:
						printf("\nKeep up the good work!\n");
						flag = 1;
				}
				printf("---------------------------------------\n");
			}
			else //i.e. user answered wrong so no change in flag.
			{
				srand(time(0));
				c = rand()%4 + 1;
				switch(c)
				{
					case 1:
						printf("\nNo. Please try again.\n");
						break;
					case 2:
						printf("\nWrong. Try once more.\n");
						break;
					case 3:
						printf("\nDon't give up!\n");
						break;
					default:
						printf("\nNo. Keep trying.\n");
				}
			}
			if(flag == 1) //if user answered correctly, then new question has to come, so going out from inner while loop
				break;
		}// end of inner while loop
	}//end outer while loop
	return 0;
}//end of main
			
