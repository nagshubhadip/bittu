#include <stdio.h>
#include <math.h>

int main() {

	/* Type your code here. */
	double number, yourValue;
	
	//scanning input
	scanf("%lf",&number);
	
	//calling function
	yourValue = sqrt(number);
	
	//printing result
	printf("Sqrt: %0.3lf\n", yourValue);
	
	return 0;
}
