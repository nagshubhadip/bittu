#include<stdint.h>
int final_q5(uint32_t value1, uint32_t value2)
{
	int n = 32, c = 0;  //n is assigned to 32 as two numbers are 32 bit
	while(n--)  //loop will run for 32 times
	{
		if(value1 & value2 & 1)  //if bitwise AND between two values and 1 is = 1 then increment count
			c++;
		//both the values are shifted right
		value1 >>= 1;
		value2 >>= 1;
	}
	return c;
}

