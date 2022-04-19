#include<iostream>
using namespace std;

int linearSearchLast(string array[], int arraySize, string key)
{
	int i,x = -1;
	for(i = arraySize-1 ; i >=0 ; i--)   //scanning from the last of the array
	{
		if(array[i] == key) //whenever key matches with the current string
		{
			x = i; //storing the index value and break
			break; 
		}
	}
	return x;  //returning the index value // returns -1 if key is not present
}
int main()
{
	string arr[10],key;
	int i;
	cout<<"Enter 10 strings: \n\n";
	for(i=0; i<10; i++)
		cin>>arr[i];
	cout<<"\nEnter key : ";
	cin>>key;
	int x = linearSearchLast(arr,10,key);
	if( x != -1)
		cout<<"Last occurence of key, "<<key<<" is "<<x+1<<endl;
	else
		cout<<"key is not present..."<<endl;
	return 0;
}
