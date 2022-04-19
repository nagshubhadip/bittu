#include<iostream>
using namespace std;

int main()
{
	string name[3];
	int noh[3], i;
	float rate[3], gross;
	
	//input part
	for(i = 0; i < 3; i++)
	{
		cout<<"Enter the name of the "<<i+1<<"'th Employee: ";
		cin>>name[i];  //input name
	}
	cout<<endl;
	
	for(i = 0; i < 3; i++)
	{
		cout<<"Enter the number of hours worked by the "<<i+1<<"'th Employee: ";
		cin>>noh[i];  //input number of hours worked
	}
	cout<<endl;
	
	for(i = 0; i < 3; i++)
	{
		cout<<"Enter the hourly rate of the "<<i+1<<"'th Employee: ";
		cin>>rate[i];  //input hourly rate
	}
	cout<<endl;
	cout<<"-------------------------------------------------"<<endl;
	
	
	//calculation and printing result
	for(i = 0; i < 3; i++)
	{
		
		if(noh[i] <= 10)  //if noh is <= 10 
			gross = rate[i] * noh[i];
		else  //if noh > 10 then for the first 10 hours the time is straight and the remaining hours will be multiplied by 1.5
			gross = rate[i] * 10  +  rate[i] * 1.5 * (noh[i] - 10);
		
		//printing result
		cout<<"The gross pay of "<<name[i]<<" is : "<<gross<<endl;
	}
	cout<<endl;
	return 0;
}
