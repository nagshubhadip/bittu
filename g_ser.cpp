#include<iostream>
#include<cmath>
using namespace std;

//function defination
//returns an integer
int S(int x, int n)
{
    if ( n == 0)
        return 1;
    else
        return pow(x,n) + S(x,n-1);   //pow(x, n) will calculate x^n
}

int main()
{
	int x, n;
	cout<<"Enter x and n: ";
	cin>>x>> n;
	cout<<"S("<<x<<", "<<n<<") = "<<S(x,n)<<endl;
	return 0;
}

