#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, x = 0, i;  
	int arr[15];    //Array is being used for storing the digits of the number
	
	cout<<"Enter an integer : ";
	cin>>n;  //scanning the integer number
	
	if(n<0)
		n = n*(-1);   //if it is a negative number, making it positive for computational simplicity

	while(n!=0)  //loop will run until n becomes 0
	{
		sum = sum + n%10;  //calculating sum of digits  //n%10 will give the last digit of the number n
		arr[x] = n%10;   //storing the digits of the number in the array
		n = n/10;  //discarding the last digit from the number n
		x++;
	}
	cout<<"\nIndividual Digits are : ";
	for(i = x-1; i >= 0; i--)
		cout<<arr[i]<<"  ";  //printing the array in reverse order for the digits
	cout<<"\nSum of the digits : "<<sum<<endl;  //printing the sum
	return 0;
}

