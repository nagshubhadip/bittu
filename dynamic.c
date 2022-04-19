#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char **str, buff[100];  //buffer for temprary storing array
	int i;
	str = (char **)malloc(5*sizeof(char*));   //creating double pointer
	for(i=0; i<5; i++)
	{
		scanf("%s",buff);  //scanning input in temporary buffer
		str[i] = (char *)malloc(strlen(buff)+1);  //allocating memory with respect to the input string size
		strcpy(str[i], buff);  //copying the buffer to the str array
	}
	
	return 0;
}
