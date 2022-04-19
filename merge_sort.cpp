#include<iostream>
using namespace std;

//merge function for merging two sub array
void merge(int a[],int low,int high)
{
	int mid = low + (high - low)/3;  //calculating mid
        
	int i = low;
	int j = mid+1;
	int k = low;
	int temp[100];  //temporary array

	while(i<=mid && j<=high)
	{
		if(a[i] < a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}
	
	//copying rest of the element
	while(i<=mid)
		temp[k++] = a[i++];
	while(j<=high)
	temp[k++]  = a[j++];

        //copying all element to original array from temporary array
	for(int i=low;i<=high;i++)
		a[i] = temp[i];
       
}

void mergeSort(int a[],int low,int high)
{
	//Base case: if number of element is <= 1
	if(low >= high)
		return;  //return without doing nothing
        
	//calculating mid  //dividing the array into two parts of 1/3 and 2/3
	int mid = low + (high-low)/3;
	
	//recurssive call
	mergeSort(a,low,mid);
	mergeSort(a,mid+1,high);
        
	//merge two sub parts
	merge(a,low, high);

}

int main(){

	int a[50];
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter "<<n<<" elements: ";
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	//calling function
	mergeSort(a,0,n-1);
	
	cout<<"Arry after sorting: ";
	for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	        
	cout<<endl;
	return 0;
}

