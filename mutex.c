#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int x = 10;  //shared variable
pthread_mutex_t lock; //mutex lock

void *process1()
{
	pthread_mutex_lock(&lock);  //acquiring lock before reading
	int x1 = x;  //read
	printf("Value of x read in process1: %d\n",x1);
	
	x1 = x1 - 5;  //decrementing value of x1 by 5
	sleep(10);  //in this time process1 will be preempted by process2, but process2 has to wait
	
	x = x1;  //update
	
	printf("Value of x wrote in process1: %d\n",x);
	pthread_mutex_unlock(&lock);  //releasing lock after update
}

void *process2()
{
	pthread_mutex_lock(&lock);  //acquiring lock before reading
	int x2 = x;  //read
	printf("Value of x read in process2: %d\n",x2);
	
	x2 = x2 + 2;   //incrementing value of x1 by 2
	sleep(10);  //in this time process2 will be preempted by process1, but process1 has to wait
	
	x = x2;  //update
	
	printf("Value of x wrote in process2: %d\n",x);
	pthread_mutex_unlock(&lock);  //releasing lock after update
}
int main()
{
	pthread_mutex_init(&lock, NULL);   //initializing mutex lock
	pthread_t t1, t2;
	//creating 2 thread
	pthread_create (&t1, NULL, process1, NULL);
	pthread_create (&t2, NULL, process2, NULL);
	
	//joining two thread
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	//printing final value of x, it will be always 7
	printf("Final value of x: %d\n",x);
	return 0;
}
