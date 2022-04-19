#include<stdio.h>
//function for validating input
int validate(int n)
{
	if(n >= 0 && n <= 65535)
		return 1;  //return 1 if the number is in netween 0 and 65535
	return 0;
}
//function for input the number
int input()
{
	int n;
	while(1)//infinite loop until user enters correct input
	{
		printf("Enter a number between 0 and 65,535 (inclusive): ");
		scanf("%d",&n);//scanning number
		if(validate(n) == 0)  //validating number
		{
			printf("Wrong input... Please check your input...\n");
			printf("--------------------------------------------------------\n");
		}
		else
			return n;  //if the number is valid then return the number
	}
}
//function for decimal to binary	
void bin(int *arr, int i, int n)
{
	if(n == 0)  //base case, if the number is 0, then assign 0 to the i'th index of the array
	{
		arr[i] = 0;
		return;
	}
	else
	{
		arr[i] = n%2;  //assigning n%2 to the i'th index
		return bin(arr, i+1, n/2);  //calling function again
	}
}
int main()
{
	int arr[16], i, n;
	int ch;
	while(1)
	{
		n = input(); //calling input function which will call validate function
		
		for(i = 0; i < 16; i++)
			arr[i] = 0;//filling the array with 0
		//calling function bin
		bin(arr,0,n);
		
		//printing results
		printf("\nThe binary representation of %d is ",n);
		for(i = 15; i >= 0; i--)
		{
			printf("%d",arr[i]);
			if(i%4 == 0 && i != 0)
				printf(" ");
		}
		printf(".\n");
		printf("--------------------------------------------------------\n");
		printf("Press '1' to continue or '0' to exit: ");
		//taking choice of the user if he/she wants to continue or not
		scanf("%d",&ch);
		if(ch == 0)
		{
			printf("\nGood Bye.....\n");
			break;
		}
	}	
	return 0;		
}
