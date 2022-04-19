#include<iostream>
using namespace std;
float phoneBill(int n)  //function
{
	float bill = 2;  //assigning bill amount = 2 because it is compulsory
	
	  //if ine number of minutes is less than or equal to five
	if(n <= 5)
		bill += 0.5*n;
		
	  //if ine number of minutes is in between 6 and 15	
	else if(n > 5 && n <= 15)
		bill += 0.5*5 + 0.75*(n-5);
		
	 //if ine number of minutes is greater than 15	
	else if(n > 15)
		bill += 0.5*5 + 0.75*10 + 1*(n-15);
		
	return bill;  //returning bill amount
}//end of function

int main()
{
	int n;
	cout<<"\nEnter the number of minutes : ";
	cin>>n;   //taking input
	cout<<"\nTotal bill is : " << phoneBill(n) <<"$\n\n";  //calling function phoneBill() and printing result
	return 0;
}

