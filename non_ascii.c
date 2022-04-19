#include<stdio.h>

int main(int argc,char *argv[])
{
	if(argc != 2)   //if no file name is provided or more than one argument is provided
	{
		printf("\nInvalid argument. Please try again.\n");
		return 0;  //exiting from the program
	}
	
	FILE *fp = fopen(argv[1],"r");  //opening the file in read mode
	
	if(fp == NULL)  //if File pointer is NULL then File opening is failed
	{
		printf("\nFailed to open file.\n");
		return 0;  //exiting from the program
	}
	
	
	int i=0;
	char arr[2000], temp;
	while((temp = fgetc(fp)) != EOF)   //reading each character from file into a temporary variable
	{
		arr[i] = temp;  //storing the character into the character array
		i++;
	}
	arr[i] = '\0';   // '\0' is added at the end of the string to indicate the "end of string"
	
	
	for(i = 0; arr[i] != '\0'; i++)  //traverse all the character of the array arr
	{
		  //if the current character doesnot belong to the range between [0,127]
		  // i.e. the current character is non-ASCII
		if(!(arr[i] <= 127 && arr[i] >= 0))
		{
			printf("\n%s: byte %d is non-ASCII\n", argv[1], i);
			return 0;  //exiting from the program
		}
	}//end of for loop
	
	
	//if the program is still alive at this point, then all the character is in the range of ASCII
	printf("\n%s is all ASCII\n", argv[1]);
	return 0;
}
