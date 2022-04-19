#include<stdio.h>

unsigned int detectBitPattern(unsigned int x)
{
	unsigned int b6, b7, b9;
	//shifting right 0 bit and bitwise AND operation with 1 we will get the first bit.
	//shifting right 5 bit and bitwise AND operation with 1 we will get the 6'th bit.
	
	b6 = (x >> 5) & 1; //getting the 6'th bit
	b7 = (x >> 6) & 1; //getting the 7'th bit
	b9 = (x >> 8) & 1; //getting the 9'th bit
	
	if(b6 == 1 && b7 == 0 && b9 == 1)  //matching the pattern
		return 1; //if matched, return 1
	return 0;  //if not matched, return 0
}
int main()
{
	unsigned int x;
	printf("Enter a unsigned number: ");
	scanf("%u",&x);
	if(detectBitPattern(x))
		printf("Pattern matched\n");
	else
		printf("Pattern not matched\n");
	return 0;
}

