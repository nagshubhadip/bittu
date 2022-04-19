#include<stdio.h>
#include<stdlib.h>
int findOddEvenDifference(int input1,int input2[])
{
	int o=0,e=0;
	for(int i = 0;i<input1;i++)
	{
		if(input2[i] % 2 == 0)
			e += input2[i];
		else
			o += input2[i];
	}
	return o-e;
}
int main()
{
	int input1,*input2;
	scanf("%d",&input1);
	input2 = (int *) malloc (input1 * sizeof(int));
	for(int i =0; i< input1; i++)
		scanf("%d",&input2[i]);
	printf("%d\n",findOddEvenDifference(input1,input2));
	return 0;
}
