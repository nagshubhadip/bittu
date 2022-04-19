#include<iostream>
using namespace std;

int par(int n)   //function par()
{
	//if the value of n is 1  then return 3
	if ( n == 1 )
		return 3;
	
	//if the value of n is 2  then return 4
	else if ( n == 2 )
		return 4;
	
	//otherwise return par(n-1) + par(n-2)
	else 
		return par(n-1) + par(n-2);
}//end of function

int main()
{
	//taking n = 5
	int n = 5;
	
	//put the name in place of Sam
	cout<<"Sam shows P("<<n<<") has "<<par(n)<<" units"<<endl;  //calling function par() and printing result
	return 0;
}

