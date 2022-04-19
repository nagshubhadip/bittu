#include "final_q5.c"
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main(int argc, char *argv[])
{
	uint32_t value1 = strtol(argv[1], NULL, 0);  //converting string to hexadecimal
	uint32_t value2 = strtol(argv[2], NULL, 0);
	
	int x = final_q5(value1, value2);  //calling function
	printf("%d\n",x);  //printing result
	return 0;
}

