#include<iostream>
using namespace std;

int squareMinusOne(int n)
{
	int s;
	//base case
	if(n == 1)
		return 0;
		
	//if n > 1
	else
	{
		s = n*n - 1;//calculating n^2 - 1
		return s + squareMinusOne(n-1);  //Tail recursion
	}
}//end of function

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"f(n) = "<<squareMinusOne(n)<<endl;
	return 0;
}

