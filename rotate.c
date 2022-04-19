#include<stdio.h>

void rotate_array(int Arr[], int N)   //function for rotating array clockwise. it will rotate 1 element
{
	int temp = Arr[N-1];// storing the last element in a temporary variable
	for( int i = N-2; i >= 0; i--)
	{
		Arr[i+1] = Arr[i];//shifting each element to the right
	}
	Arr[0] = temp;  //storing the last element to the first element
}//end of function

int main()
{
	int Arr[100], N, K, i;
	
	//input N
	scanf("%d",&N);
	
	//input array of N elements
	for(i = 0; i < N; i++)
		scanf("%d",&Arr[i]);

	//input K
	scanf("%d",&K);
	
	//calculating the effective rotation	
	K = K%N;
	
	//calling the rotation function K times. Here, K is the effective rotation number
	for(i = 1; i <= K; i++)
		rotate_array(Arr, N);
	
	//printing the rotated array
	for(i = 0; i < N; i++)
		printf("%d ",Arr[i]);
	printf("\n");
	
	return 0;
	
}

