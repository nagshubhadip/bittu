#include<stdio.h>
#include<ctype.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
	char fname[30], ch;
	int count;
	FILE *fp;
	
	//c1: reads the name of an input le from the user on keyboard.
	printf("Enter the file name: ");
	scanf("%s",fname);
	
	//c2: forking a child. 
	int p = fork();
	
	//if it is a child process
	if(p == 0)
	{
		printf("\nInside child process...\n");
		//opening the input file in read mode
		fp = fopen(fname, "r");
		
		//if file does not exist
		if(fp == NULL)
		{
			printf("\nFailed to open file...\n");
			return 0;
		}
		//initializing count as 0
		count = 0;
		
		//while file pointer does not reach to the end of file (EOF), scan character one by one
		while((ch = fgetc(fp)) != EOF)
		{
			//if the scanned character is a digit then count ++
			if(isdigit(ch))
				count ++;
		}
		//c3:  printing the number of digits in the input file
		printf("The number of digits in the text file \"%s\" is %d\n",fname, count);
	}
	
	//code for parent process
	else
	{
		//c4: waiting for the child process to terminate
		wait(NULL);
		//printing a message from parent process
		printf("\nInside parent process... Child process has terminated...\n");
	}
	return 0;
}
