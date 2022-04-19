#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i;
	char arr[1000];
	scanf("%s",arr);
	if(arr[0] == 'H')
	{
		printf("NO\n");
		return 0;
	}
	for(i=0; arr[i] != '\0'; i++);
	{
		if(arr[i] == '+' && arr[i+1] == 'H' && arr[i+2] == 'H')
			i += 2;
		else if(arr[i] == '+' && arr[i+1] == 'H')
			i += 1;
		else if(arr[i] == 'H')
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n"); 
			
	
	
	return 0;
}
