#include<iostream>
using namespace std;

//function allEven
void allEven(int arr[])
{
	int i;
	for(i = 0; i < 5; i++)  //traversing the array of 5 integer
	{
		//if the i'th element is odd then increment the i'th index element
		if(arr[i] % 2 == 1)
			arr[i]++;
	}
}//end of function

int main()
{
	int arr[5], i;
	cout<<"Fill the array with five integers: ";
	for(i = 0; i < 5; i++)
		cin>>arr[i];  //taking inputs from user
	//calling function
	allEven(arr);
	
	//printing result
	for(i = 0; i < 5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

