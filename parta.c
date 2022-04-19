#include<stdio.h>
int input(int even_numbers[])
{
	int t,n;
	printf("Enter the number of even numbers you want to insert : ");
	scanf("%d",&n);   //taking input the number of even numbers user want to insert
	for(int i=0; i<n; i++)
	{
		printf("Enter the %d'th number : ",i+1);
		scanf("%d",&t);  //storing the number in a temporary variable, t
		if(t%2 == 0)  //if it is even
		{
			even_numbers[i] = t;  //then storing the number in the array
			printf("Inserted %d into the array successfully...\n",t);
		}
		else  //i.e. if the number is odd
		{
			printf("%d is not an even number... insert again...\n",t);  //then printing the message that the number is odd, insert again
			i--;   //preventing to increment the value of i
		}
	}
	return n;  //returning the number inserted in the array
}


void print(int even_numbers[], int n)
{
	printf("\nThe array of even numbers :\n");
	for(int i=0; i<n; i++)
		printf("%4d",even_numbers[i]);   //printing the array elements
	printf("\n");
}


int main()
{
	int even_numbers[100];   //allocating memory for array
	int n = input(even_numbers);  // calling the function input() to insert even numbers into the array
	print(even_numbers,n);   //calling function to print the array
	return 0;
}
