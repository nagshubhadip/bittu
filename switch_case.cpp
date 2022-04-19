#include<iostream>
#include<cmath>
using namespace std;
int operate(int n1, int n2, string op){

	char ch = op[0];  // converting the string into character,
			  // thaking the 0'th index value of the string op
	switch (ch)
	{
		case '+' :
			return n2 + n1;
                case '-' :
                	return n2 - n1;
                case '*' :
                	return n2 * n1;
                case '/' :
                	return n2 / n1;
                case '%' :
                	return n2 % n1;
                default:
		      	return pow(n2, n1);
	}//end of switch case
}//end of function.
int main()
{
cout<<operate(4,7,"+")<<endl;
cout<<operate(4,7,"*")<<endl;
}
