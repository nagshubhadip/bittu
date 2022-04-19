#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LOOP 100000
#define SIZE 10000

void statically()
{
	static int x[SIZE];  //static variable declaration
}

void atStack()
{
	int y[SIZE];    //stack variable declaration  (it is an auto variable which is stored in stack)
}

void atHeap()
{
	int *z;
	z = (int *)malloc(SIZE*sizeof(int));  //dynamically allocated variable are stored in heap memory
}

int main()
{
	int i;
	double time;
	clock_t t;
	
	//calculating time for statically declared array
	t = clock();
	for(i = 0; i < LOOP; i++)
		statically();
	t = clock() - t;
	time = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken by statically declared array: %lf sec\n",time);
	
	//calculating time for stack declared array
	t = clock();
	for(i = 0; i < LOOP; i++)
		atStack();
	t = clock() - t;
	time = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken by stack declared array: %lf sec\n",time);
	
	//calculating time for heap declared array
	t = clock();
	for(i = 0; i < LOOP; i++)
		atHeap();
	t = clock() - t;
	time = ((double)t)/CLOCKS_PER_SEC;
	printf("Time taken by heap declared array: %lf sec\n",time);
	return 0;
}
