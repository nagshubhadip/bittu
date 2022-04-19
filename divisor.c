#include<stdio.h>
void calc_Divisor(int arr[2][20])
{
	int temp, i, j;
	//calculating the number of divisor
	for(i=0; i<20; i++)
	{
		temp = 0;  //initially taking the number of divisor of arr[0][i] is 0
		for(j=1; j<= arr[0][i]; j++)
		{
			if(arr[0][i] % j == 0 )
				temp++;  //if divisor found then increment temp
		}
		arr[1][i] = temp;  //storing the number of divisor of the number arr[0][i] in arr[1][i]
	}
}
void Sort(int arr[2][20])
{
	int i, j, a, b;
	//sorting the number of divisor using bubble sort
	for(i=0; i<20; i++)
	{
		for(j=0; j<20-i-1; j++)
		{
			if(arr[1][j] > arr[1][j+1])    // if the number of divisor of arr[0][j] > arr[0][j+1]
			{
				a = arr[0][j];   b = arr[1][j];   //a, b are the trmporary variable for sorting
				
				arr[0][j] = arr[0][j+1]; arr[1][j] = arr[1][j+1];
				
				arr[0][j+1] = a;  arr[1][j+1] = b;
				
			}//end of if
			
			else if(arr[1][j] == arr[1][j+1]) //if both the number of same number of divisor
			{
				if(arr[0][j] > arr[0][j+1])  //then sorting by the number smallest to largest
				{
					a = arr[0][j];   b = arr[1][j];
					arr[0][j] = arr[0][j+1]; arr[1][j] = arr[1][j+1];
					arr[0][j+1] = a;  arr[1][j+1] = b;
				}
			}//end of else if
		}
	}
	
}
int main()
{
	int arr[2][20], i, j;   //arr[0][] will store the number and arr[1][] will store the number of divisor of the corresponding number
	printf("Enter 20 integer values -> ");
	for(i=0; i<20; i++)
		scanf("%d",&arr[0][i]);   //scanning the number
	//calling function calc_Divisor() for calculating the number of divisor
	calc_Divisor(arr);
	
	//calling function Sort() for sorting array
	Sort(arr);
	
	printf("\nData sorted by number of divisors: ");
	for(i=0; i<20; i++)
		printf("%d  ",arr[0][i]);  //printing the final result
	printf("\n");
	return 0;
}
