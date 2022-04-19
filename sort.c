#include<stdio.h>
#include<string.h>

int input(int arr[])  //function for taking input from user
{
	int i = 0, temp;
	printf("Enter a sequence of numbers: ");
	while(1)
	{
		scanf("%d",&temp); //scanning input
		if(temp > 0)  //if it is a positive number then add it to the array
		{
			arr[i] = temp;
			i++;
		}
		else if(temp == 0)  //if it is 0, then it us end of sequence. So, break.
			break;
	} //in this loop, the negative numbers are ignored
	return i; //returning the number of input stored in array
}//end of function


void swap(int *p, int *q) //function for swap 2 values passed by reference/address
{
	int temp = *p;
	*p = *q;
	*q = temp;
}//end of function


//function bubbleSort
void bubblesort(int arr[], int n, char str[])
{
	int i, j;
	if(strcmp("up",str) == 0)  //if the sort order is up, then sort in ascending order
	{
		for(i=n-1; i>=0; i--)
			for(j=1; j<=i; j++)
				if(arr[j-1] > arr[j])
					swap(&arr[j-1], &arr[j]);
	}//end of if
	else   //else sort is descending order
	{
		for(i=n-1; i>=0; i--)
			for(j=1; j<=i; j++)
				if(arr[j-1] < arr[j])
					swap(&arr[j-1], &arr[j]);
	}//end of else
}//end of function


int main()
{
	int i, n;
	int arr[100];
	char str[10];
	printf("Enter sort order: ");
	scanf("%s",str);  //input the sorted order
	n = input(arr);  //calling function input() for user input
	bubblesort(arr, n, str);  //calling function bubblesort
	
	//printing the sorted array
	for(i=0; i<n; i++)
		printf("%d  ",arr[i]);
	
	printf("\n");
	return 0;
}

