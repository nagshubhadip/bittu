#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int x = 10;  //shared variable

void *process1()
{
	int x1 = x;  //read
	printf("Value of x read in process1: %d\n",x1);
	
	x1 = x1 - 5;  //decrementing value of x1 by 5
	sleep(10);  //in this time process1 will be preempted by process2
	
	x = x1;  //update
	
	printf("Value of x wrote in process1: %d\n",x);
}

void *process2()
{
	int x2 = x;  //read
	printf("Value of x read in process2: %d\n",x2);
	
	x2 = x2 + 2;   //incrementing value of x1 by 2
	sleep(10);  //in this time process2 will be preempted by process1
	
	x = x2;  //update
	
	printf("Value of x wrote in process2: %d\n",x);
}
int main()
{
	pthread_t t1, t2;
	//creating 2 thread
	pthread_create (&t1, NULL, process1, NULL);
	pthread_create (&t2, NULL, process2, NULL);
	
	//joining two thread
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	//printing final value of x, it will be either 5 or 12
	printf("Final value of x: %d\n",x);
	return 0;
}

