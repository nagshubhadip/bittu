#include<iostream>
#include<cstdio>
using namespace std;
struct cust   //structure defination
{
	char name[20],sub[20];
	float r;
	int h;
	double pay;
};
void read_data(struct cust *emp,char * fname,int n)   //function for reading data from txt file
{
	int i=0;
	FILE  *fp;
	fp = fopen(fname,"r");   //opening file in read mode
	while(i<n)
	{
		fscanf(fp,"%s %s %f %d",(emp+i)->name,(emp+i)->sub,&(emp+i)->r,&(emp+i)->h);  //scanning element using pointer notation
		i++;
	}
	fclose(fp);  //closing file
}
void calcNet(struct cust *emp,int n)   //function to calculate net salary
{
	int i;
	for( i = 0; i < n; i++)
		emp[i].pay = emp[i].r * emp[i].h ;
}
void print_data(struct cust *emp,int n)  //function to print the result
{
	int i;
	cout<<"Name     Subscription   Rate/hour   Hours   Payment amt.  \n";
	for( i = 0; i < n; i++)
		cout<<emp[i].name<<"  "<<emp[i].sub<<"  "<<emp[i].r<<"  "<<emp[i].h<<"   "<<emp[i].pay<<"\n";
}
int main()
{
	struct cust emp[10];   //allocating memory for emp
	char fname[] = "customer_data.txt";  //storing file name
	read_data(emp,fname,10);  //calling read_data() with 3 arguments
	calcNet(emp,10);   //calling calcNet() with 2 arguments
	print_data(emp,10);   //calling print_data()
	return 0;
}
		
