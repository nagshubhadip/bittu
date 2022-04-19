#include<stdio.h>
struct student
{
	int id;
	char name[30],dept[20];
	int course,year;
};
void findyear(struct student s[],int y)
{
	int i,f=0;
	for(i = 0; i < 5; i++)
	{
		if(s[i].year == y)
		{
			f=1;
			printf("ID = %d ; Name = %s ; Department = %s ; Course = %d ; Year = %d ;\n",s[i].id,s[i].name,s[i].dept,s[i].course,s[i].year);
		}
	}
	if(f == 0)
		printf("\nNo record found...\n\n");
}
void findID(struct student s[],int ID)
{
	int i,f=0;
	for(i = 0; i < 5; i++)
	{
		if(s[i].id == ID)
		{
			f=1;
			printf("ID = %d ; Name = %s ; Department = %s ; Course = %d ; Year = %d ;\n",s[i].id,s[i].name,s[i].dept,s[i].course,s[i].year);
			break;
		}
	}
	if(f == 0)
		printf("\nID not found...\n\n");
}

int main()
{
	struct student s[5] = { {1,"John","CS",12,2020}, {2,"Tom","ME",15,2021}, {4,"Ben","IT",19,2020}, {5,"Josh","EE",8,2020}, {3,"Richard","ECE",10,2021} };
	int y,i;
	printf("Enter the year : ");
	scanf("%d",&y);
	findyear(s,y);
	printf("\nEnter the ID : ");
	scanf("%d",&i);
	findID(s,i);
	return 0;
}
