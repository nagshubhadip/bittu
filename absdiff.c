#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j[] = {5, 7, 8, 9, 1, 6} ,k[] = { 10, 4, 19, 20, 15, 17},a,b,n=6, t1,t2, temp, min=9999;
	for(a=0; a<n; a++)
	{
		for(b=0; b<n; b++)
		{
			temp = abs(j[a] - k[b]);
			if( temp < min)
			{
				min = temp;
				t1 = a;
				t2 = b;
			}
		}
	}
	printf("%d   %d    %d   \n",j[t1], k[t2], min);
	return 0;
}
