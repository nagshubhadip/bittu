#include<iostream>
#include<fstream>
using namespace std;
class demo
{
	int arr[20];
	public:
	void Bubble_Sort(int *, int);
	void Store(int *,int);
};  //end of class defination
void demo::Bubble_Sort(int *arr, int n) //function bubble sort
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	
	}	
}//end of function

void demo::Store(int *arr, int n) //function for storing the array in text file called "abcd.txt"
{
	int i;
	ofstream file;
	file.open("abcd.txt",ios::app);  //opening the text file in append mode
	for(i=0; i<n; i++) 
	{
		file << arr[i] <<" "; //storing the array element
	}
	file <<"\n\n";
	file.close();//closing the file
}//end of function
int main()
{
	int arr1[20], i, n;
	demo x;  //class veriable declaration
	cout<<"Enter the number of elements : ";
	cin>> n;
	cout<<"\nEnter "<<n<<" integers : \n";
	for(i=0; i<n; i++)
		cin>> arr1[i];
	x.Store(arr1,n);  //storing the array into the text file
	x.Bubble_Sort(arr1,n);  //sorting the array
	x.Store(arr1,n); // again storing the array into the text file
	cout<<"\nWork Done!!!\n";
	return 0;
}

