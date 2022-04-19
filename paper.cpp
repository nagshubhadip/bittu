#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool comp(string s1, string s2)//function for checking which concatination gives maximum result
{
	if(s1+s2 > s2+s1)
		return true;
	return false;
}

int main()
{
	int n, i, j;
	string *arr, temp;
	cin>>n;  //input n
	arr = new string[n];
	for(i = 0; i < n; i++)
		cin>>arr[i];  //input the numbers as a string
	
	sort(arr,arr+n,comp);  //calling built in sort function passing comp() function as a parameter
	
	for(i = 0; i < n; i++)
	cout<<arr[i];  //printing result
	
	cout<<endl;
	return 0;
}
				
