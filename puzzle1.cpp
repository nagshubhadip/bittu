#include<iostream>
using namespace std;
int main()
{
	int arr[10],i;
	cout<<"Enter all numbers between 1 and 10 (including 1 and 10)"<<endl;
	for(i=0; i<10; i++)
		cin>>arr[i];   //taking 10 numbers as inputs from user
	for(i=0; i<10; i++)
	{
		if(arr[i] != i+1)  //checking if the numbers are not sequentially entered
		//i.e. if the i'th index element doesnot matches with the number i+1  
		//(i+1 is taken because i starts from 0. So number 1 should be at index 0 i.e. arr[0], number 5 should be at index 4 etc )
		{
			cout<<"Incorrect! no points for you!"<<endl;
			return 0;  //if the sequence is wrong then returning 
		}
	}
	cout<<"Correct! you get 5 points!"<<endl;  //if all the sequence is correct
	return 0;
}



