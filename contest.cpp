#include<iostream>
using namespace std;

int main()
{
	int n, **arr, i, j, s, t, x;
	cin>>n; //input n
	arr = new int*[n];
	for(i=0; i<n; i++)
		arr[i] = new int[3];   //declaring a n*3 2d array
	for(i=0; i<n; i++)
	{
		cin>>arr[i][0]>>arr[i][1];  //input s and t
		arr[i][2] = i+1;  //storing the index+1 because at the end we have to print the index
	}
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++) 
		{
			if(arr[j][0] < arr[j+1][0])  //bubble sort in descending order
			{
				s = arr[j][0]; t = arr[j][1]; x = arr[j][2];
				arr[j][0] = arr[j+1][0]; arr[j][1] = arr[j+1][1]; arr[j][2] = arr[j+1][2];
				arr[j+1][0] = s; arr[j+1][1] = t; arr[j+1][2] = x;
			}
			if(arr[j][0] == arr[j+1][0] && arr[j][1] > arr[j+1][1])  //if the value of s are same and value of t is greater for arr[j] wrt arr[j+1] then swap
			{
				s = arr[j][0]; t = arr[j][1]; x = arr[j][2];
				arr[j][0] = arr[j+1][0]; arr[j][1] = arr[j+1][1]; arr[j][2] = arr[j+1][2];
				arr[j+1][0] = s; arr[j+1][1] = t; arr[j+1][2] = x;
			}
		}
	}
	//printing result
	for(i=0; i<n; i++)
		cout<<arr[i][2]<<" ";
	cout<<endl;
	return 0;
}

