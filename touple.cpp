#include<iostream>
using namespace std;
int main()
{
	int N;
	int A;
	long int count = 0;
	cin>>N;
	for(A=1;A<N;A++)
	{
		count = count + (N-1)/A;
	}
	cout<<count<<endl;
}
