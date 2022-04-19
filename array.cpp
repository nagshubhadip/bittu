#include<iostream>
using namespace std;
void printReverse(int arr[])  //function for printing the reverse of the array
{
	cout<<"\nThe reverse of the array is : \n {";
	for(int i=9; i>=1; i--)
		cout<<arr[i]<<", ";
	cout<<arr[0]<<"}\n";
}//end of function

int largest(int arr[])  //function for finding the largest number in the array
{
	int max = arr[0];
	for(int i=1; i<10; i++)
		if(arr[i] > max)
			max = arr[i];
	return max;
}//end of function

int find(int arr[], int k)  //function for finding a value in the array
{
	for(int i=0; i<10; i++)
		if(arr[i] == k)  //if the element is found then return 1
			return 1;
	return 0;   // i.e. element is not found
}//end of function

int main()
{
	int arr[10];  //declaring array of size 10
	int k;
	cout<<"Enter 10 elements in the array : \n";
	for(int i=0; i<10; i++)
		cin>>arr[i];  //taking inputs
	cout<<"The array elements are : \n {";   //printing the array element
	for(int i=0; i<9; i++)
		cout<<arr[i]<<", ";
	cout<<arr[9]<<"}\n";
	
	//3
	printReverse(arr);//calling function printReverse() to print the array in reverse
	
	//4
	cout<<"\nThe largest element in the array is : "<<largest(arr)<<endl;   //calling function largest() and printing the result
	
	//5
	cout<<"\nEnter the key to find in the array : ";
	cin >> k;   //input the number to find in the array
	if(find(arr,k) == 1)  //if it returns 1 then the element is present in the array
		cout<<k<<" is present in the array\n";
	else   //if it returns 0 then the element is not present in the array
		cout<<k<<" is not present in the array\n";
	return 0;
}//end of main()

