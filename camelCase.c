#include<stdio.h>
#include<ctype.h>

void camelCase(const char *text, char *camelCaseText, int camelCaseTextCapacity)
{
	int i, j = 0;
	
	//for every element in text, the loop will run until text[i] becomes NULL and j becomes < buffer_length
	for(i = 0; text[i] != '\0' && j < camelCaseTextCapacity; i++)
	{
		if(text[i] != ' ')  //if the current character is not a space
		{
			camelCaseText[j] = text[i];  //adding the current character to the buffer
			j++;
		}
		else  //if the current character is a space
		{
			camelCaseText[j] = toupper(text[i+1]);  //then adding the next character after space to the buffer making it to upper case
			i++; //i is incremented because we want to skip the next character after space
			j++;
		}
	}
	camelCaseText[j] = '\0'; //assigning NULL character at the end of the buffer
}//end of function


int main()
{
	char text[100], camelCaseText[100];
	
	printf("Enter text : ");
	scanf("%[^\n]",text);
	camelCase(text, camelCaseText, 100);
	printf("Result = %s\n",camelCaseText);
	return 0;
}
