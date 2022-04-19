#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>0 && y>=0 && x%5 == 0 && x+5<=y)
		printf("%d\n",y-x-5);
	else
		printf("%d\n",y);
	return 0;
}
