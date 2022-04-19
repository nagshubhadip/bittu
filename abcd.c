#include<stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
	int arr[1000], i, j, n, c = 0, temp;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	
	for(i=0; i<n-1; i++)
	{
		if(arr[i] > arr[i+1])
		{
			c+= arr[i] - arr[i+1];
			
			arr[i+1] = arr[i];
		}
	}
	int r = gcd(arr[0], arr[1]);
	if(r == 1)
	{
		arr[0]++;
		arr[1]++;
		c+=2;
	}
	r = gcd(arr[0], arr[1]);	
	for(i=2; i<n; i++)
	{
		r = gcd(arr[i], r);
		if(r == 1)
		{
			arr[i]++;
			c++;
		}
	}
	printf("%d\n",c);
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	return 0;
}
