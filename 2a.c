#include<stdio.h>
#include<math.h>
void eular(unsigned long long int n)
{
	long double s = 0, gama;
	unsigned long long int i;
	for(i = 1; i <= n; i++)
		s += 1/(long double)i;   //typecasting i to long double for adding 1/i to s
	gama = s - log(n);  //finding gama (Euler's Constant)
	
	//printing result
	printf("n = %llu     Sn = %Lf    Gama = %Lf\n",n,s,gama);
}

int main()
{
	unsigned long long int n;
	printf("Enter value of n: ");
	scanf("%llu",&n);  //input n
	eular(n); //callinf function
	return 0;
}
