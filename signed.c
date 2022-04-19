#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);  //Converting the string to integer
	
	//the number is of 16 bit, the MSB is for sign bit. So total bits can be used for magnitude of the number = 15 bits
	 
	if(num > 32767 || num < -32767) // if the num is < -2^15 or > +2^15 then not possible
	{
		printf("The signed 16-bit representation of %s is: not possible.\n",argv[1]);
		return 0;
	}
	
	int i;
	char arr[17]; //declaring array of size 17(one extra bit for storing the null character at the end of the string)
	
	//calculating the MSB
	if(argv[1][0] == '-')
		arr[0] = '1';
	else
		arr[0] = '0';
		
	//if the number is -ve, then making it positive as the sign bit is already been calculated
	if(num < 0)
		num = -num;
	
	//looping from index 15 to index 1 of the character array
	for(i = 15; i >= 1; i-- )
	{
		if( num%2 == 0)
			arr[i] = '0';
		else
			arr[i] = '1';
		
		num = num / 2; //dividing the number by 2 and storing it again
	}
	
	arr[16] = '\0'; //storing the NULL character at the end of the string to indicate the end of string
	
	//output
	printf("The signed 16-bit representation of %s is: %s.\n",argv[1], arr);
	return 0;
}

