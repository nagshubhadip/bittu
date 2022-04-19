#include<stdio.h>
#include<ctype.h>
int main()
{
	char a,b,c,a1, b1, c1, temp, temp1;
	int count = 0;
	printf("Enter 3 characters: ");
	scanf("%c%c%c",&a,&b,&c);  //taking input of 3 characters
	
	//converting each character to upper case
	a1 = toupper(a);
	b1 = toupper(b);
	c1 = toupper(c);
	
	//chacking if all the characters are valid or not
	if( !((a1 >= 'A' && a1 <= 'Z') && (b1 >= 'A' && b1 <= 'Z') && (c1 >= 'A' && c1 <= 'Z')))  //if not valid then exit program
	{
		printf("\nCharacters are not valid, exiting program.\n");
		return 0;
	}
	//chacking if there is any duplicate character or not
	if( (a1 == b1) || (a1 == c1) || (b1 == c1) )  //if so, then exit program
	{
		printf("\nThere are duplicate characters, exiting program.\n");
		return 0;
	}
	printf("\nThere are no duplicate characters.\n");
	//counting the number of vowels
	if( (a1 == 'A') || (a1 == 'E') || (a1 == 'I') || (a1 == 'O') || (a1 == 'U') ) //if the character is vowel, then increment count.
		count++;
	if( (b1 == 'A') || (b1 == 'E') || (b1 == 'I') || (b1 == 'O') || (b1 == 'U') )
		count++;
	if( (c1 == 'A') || (c1 == 'E') || (c1 == 'I') || (c1 == 'O') || (c1 == 'U') )
		count++;
	printf("\nThere are %d vowels.\n",count);
	//sorting the characters  (sorting with respect to the uppercase character)
	if(a1 > b1)
	{
		temp = a; a = b; b = temp;
		temp1 = a1; a1 = b1; b1 = temp1;
	}
	if(b1 > c1)
	{
		temp = b; b = c; c = temp;
		temp1 = b1; b1 = c1; c1 = temp1;
	}
	if(a1 > b1)
	{
		temp = a; a = b; b = temp;
		temp1 = a1; a1 = b1; b1 = temp1;
	}
	printf("\nLetters in alphabetical order: %c%c%c\n",a,b,c);
	return 0;
}
