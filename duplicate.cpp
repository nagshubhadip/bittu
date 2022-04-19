#include<iostream>
using namespace std;
int main(){
	/*int arr[6][4] =    //first 2d array where all rows are unique
	{
	{6, 18, 30, 31},
	{6, 18, 16, 19},
	{6, 18, 16, 37},
	{6, 15, 26, 28},
	{6, 15, 19, 33},
	{3, 9, 12, 15}
	};*/
	int arr[6][4] =   //2nd 2d array where row 2 and 4 are same
	{
	{6, 18, 30, 31},
	{6, 16, 18, 33},
	{6, 18, 16, 37},
	{6, 16, 18, 33},
	{6, 15, 19, 33},
	{3, 9, 12, 15}
	};
	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for(int j = 0; j < sizeof(arr[i]) / sizeof(arr[i][0]); j++) {
			cout<<"  "<<arr[i][j];
		}
		cout<<endl;
	}
	//finding duplicate element and printing it
	int flag, x;
	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)  //i will select one row
	{
		for(int j = i+1; j < sizeof(arr) / sizeof(arr[0]); j++)  //j will take other rows after i row
		{
			flag = 0;  //making flag = 0
			for(int k = 0; k < sizeof(arr[i]) / sizeof(arr[i][0]); k++) //comparing each element of row i and j
			{
				if(arr[i][k] != arr[j][k]) { //if any of the element is not equal
					flag = 1; //then make the flag = 1 and break
					break;
				}
			}//end of for k
			if(flag == 0)  //if flag is still 0 => all elements are same in row i and j
			{
				cout<<"[";
				for(x = 0; x <  sizeof(arr[i]) / sizeof(arr[i][0]) - 1; x++)
					cout<<arr[i][x]<<", ";
				cout<<arr[i][x]<<"] is a duplicate"<<endl;  //printing the duplicate row
				return 0;  //returning back
			}//end of if
		}//end of for j
	}//end of for i
	cout<<"cool!!!\n";  //if the control reaches this point => no rows are duplicate, So print cool
	return 0;
}		
