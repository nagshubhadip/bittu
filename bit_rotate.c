#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>

uint16_t bit_rotate(int n_rotations, uint16_t bits)
{
	int msb;
	 //if the number of rotation is negative the converting it to equivalent right rotation	
	if(n_rotations <0)
		n_rotations = 16 + (n_rotations % 16);
	else
		n_rotations %= 16;   //calculating the effective rotation
	
	while(n_rotations != 0)
	{
		//calculating the msb by shifting the number by 15 bit right and then bit wise AND with 1
		msb = (bits >> 15) & 1;
		//Shifting the number to the left by 1 bit
		bits = bits << 1;
		//Bitwise OR operation with the MSB
		bits = bits | msb;
		n_rotations--;  //decreasing the number of rotation
	}
	return bits;
}

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);   //converting the string to integer by atoi() function
	uint16_t hex = (int) strtol(argv[2], NULL, 0);  //converting the string to hex by strtol() function
	printf("0x%hx\n",(uint16_t) bit_rotate(n, hex));
	return 0;
}
