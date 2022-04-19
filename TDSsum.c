#include<stdio.h>
int main()
{
	int n, i, s=0;
	for(i=0; i<10; i++)
	{
		scanf("%d",&n);
		s+=n;
	}
	printf("%d",s);
	return 0;
}
