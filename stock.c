#include<stdio.h>
struct stock
{
	int id;  //stock id
	char name[20];   //stock name
	int nos;   //number of shares
	float pp;  //purchasing price
	float sp;   //selling price
	float com;  //commission
};
int main()
{
	struct stock st[5];  //declaring artray of structure
	int i;
	float x;
	printf("\n                   Enter data of 5 different stock...\n");
	printf("------------------------------------------------------------------------------\n");
	//inputting data of 5 stocks
	for(i=0;i<5;i++)
	{
		printf("           Enter data of No.%d stock...\n",i+1);
		printf("Enter Stock ID : ");
		scanf("%d",&st[i].id);
		printf("Enter Stock Name : ");
		scanf("%s",st[i].name);
		printf("Enter the number of shares : ");
		scanf("%d",&st[i].nos);
		printf("Enter the purchasing price : ");
		scanf("%f",&st[i].pp);
		printf("Enter the selling price : ");
		scanf("%f",&st[i].sp);
		printf("Enter the commission : ");
		scanf("%f",&st[i].com);
		printf("------------------------------------------------\n");
	}//end of for loop
	printf("\n========================================================\n");
	printf("=======================printing report=================\n\n");
	printf(" ID        Name     Number of shares      Purchasing price      Selling price         commission           Net profit\n");
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		x = st[i].nos * ( st[i].sp - st[i].pp) - st[i].com;  //for each stock, calculating net profit
		printf("%2d %12s %15d %20.2f %20.2f %20.2f %20.2f\n",st[i].id,st[i].name,st[i].nos,st[i].pp,st[i].sp,st[i].com,x);  //printing result
	}//end of for loop
	return 0;
}//end of main
