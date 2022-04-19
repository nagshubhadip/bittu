#include<iostream>   //changed the headrer file name ( ' .h ' is removed )
using namespace std;   //added line
#define n 5   //added a '#' before define(macro defination) and '=' is removed
void main()
{
	int i, total = 0, y[n] = {9, 6, 20, 5, 12};
	double Average;   //added the datatype of variable "Average"
	for(i=0; i<5; i++)
	{
		total = total + y[i];
	}
	Average = (double)total/5;   //typecasted the variable "total" to float
	cout<<"\ntotal = "<<total;
	cout<<"\nAverage = "<<Average<<endl;  //printing average
	
}
