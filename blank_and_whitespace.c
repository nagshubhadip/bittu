#include <stdio.h>
#include<stdlib.h>
int main(void)

{

	FILE *finput,*foutput;
	char str[200],ch, prev1 = '\n', prev2 = ' ';  //added three character variable
	finput= fopen ("CPPHumor.txt","r");
	if(finput== NULL)
	{
		printf("The file does not exit. Please create the file.\n");
		exit(1);
	}
	foutput= fopen("Humor.bak","w");
	if(foutput==NULL)
	{
		printf("The backup file does not exit.Please create backup file\n");
		exit(1);
	}
	while(!feof(finput))
	{
		fscanf(finput,"%c",&ch);   //input from the file character by character
		
		//we will check if the current character is and the previous character.
		//if the current character and previous character is (not space space) and (not newline newline) and (not newline space) and (not space newline)
		//then we will add the current character to the backup file 
		if(!(ch == ' ' && prev2 == ' ') && !(ch == '\n' && prev1 == '\n') && !(ch == ' ' && prev2 == '\n') && !(ch == '\n' && prev1 == ' '))
		{
			printf("%c",ch);
			fprintf(foutput,"%c",ch);
		}
		
		prev1 = prev2 = ch;  //storing the current character as the previous character for the next character
	}
	fclose(finput);
	fclose(foutput);
	return 0;
}


