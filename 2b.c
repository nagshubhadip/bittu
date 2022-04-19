#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int n = 1000000, i, x, y;
	long double s1, s2, s3, s4, s5;
	s1 = s2 = s3 = s4 = s5 = 0;
	
	// for S1
	for(i = 1; i <= n; i++)
		s1 += 1/(long double)(i*i + 3*i + 4);
	printf("S1 = %Lf\n",s1);
	
	//for S2
	for(i = 1; i <= n; i++)
	{
		if(i%2 == 1)  //if i is odd then add 1/i to the previous term
			s2 += 1/(long double)i;
		else  //if i is even then subtract 1/i from the previous term
			s2 -= 1/(long double)i;
	}
	printf("S2 = %Lf\n",s2);
	
	//for S3
	for(i = 2; i <= 100*n; i++)
	{
		if(i%2 == 0)  //if i is even then add 1/i to the previous term
			s3 += 1/(long double)log(i);
		else  //if i is odd then subtract 1/i from the previous term
			s3 -= 1/(long double)log(i);
	}
	printf("S3 = %Lf\n",s3);
	
	//for S4
	x = 1;
	y = 2;
	for(i = 1; i <= n; i++)
	{
		if(i%3 == 0)  //if i is divisible by 3 then subtract 1/y from the previous term and increment y by 2 for the next term
		{
			s4 -= 1/(long double)y;
			y += 2;
		}
		else  //if i is not divisible by 3 then add 1/i to the previous term and increment x by 2 for the next term
		{
			s4 += 1/(long double)x;
			x += 2;
		}
	}
	printf("S4 = %Lf\n",s4);
	
	//for S5
	x = 1;
	y = 2;
	for(i = 1; i <= n; i++)
	{
		if(i%3 == 1)  //if i-1 is divisible by 3 then add 1/x to the previous term and increment x by 2 for the next term
		{
			s5 += 1/(long double)x;
			x += 2;
		}
		else  //if i-1 is not divisible by 3 then subtract 1/y from the previous term and increment y by 2 for the next term
		{
			s5 -= 1/(long double)y;
			y += 2;
		}
	}
	printf("S5 = %Lf\n",s5);
	return 0;
}
