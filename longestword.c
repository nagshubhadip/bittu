#include<stdio.h>

int longestWord(char s[]) //function that calculates the length of the longest word
{
	int i,max = 0, temp = 0;
	for(i=0; s[i] != '\0'; i++) //loop will continue until string index becomes null
	{
		if( s[i] != '-' )  //if the current index element is not a separator/'-'
			temp++;  //calculating the size of each word
		else if( s[i] == '-' )  //if the current index element is a '-'
		{
			if( temp > max )  //if the word sixe is greater than previous max
				max = temp;  //then store the current wordsize as max
			temp = 0;  //making the temp = 0 for new word
		}
	}
	if( temp > max ) //for the last word, checking if the last word is the max or not
		max = temp;
	return max;
}//end of function
int main()
{
	char s[100];
	printf("Enter string : ");
	scanf("%s",s);
	printf("Length of the longest word: %d.\n",longestWord(s));
	return 0;
}
