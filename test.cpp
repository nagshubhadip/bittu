#include<iostream>
using namespace std;
template <class T1, class T2>
T1 s(T1 x, T1 y)
{
	return x+y;
}
int main()
{
cout<<s<int,char>(3,'a');	
	
}	
		
