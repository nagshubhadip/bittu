#include<iostream>
#define size 20
using namespace std;


class Queue
{
	int front, rear;
	int Q[size];
	public:
		Queue()
		{
			front=-1;
			rear=-1;
		}

	int enqueue(int value)
	{
		if((rear == size-1 && front == 0) || (rear+1 == front)) //For circular Queue change here
		{
			cout<<"Queue is Full"<<endl;
			return 0;
		}

		if(front==-1)
		{
			front++;
		}

		if(rear == size - 1) //For circular Queue change here
			rear = 0;
		else
			rear ++;
		Q[rear]=value;

		return 0;
	}

	int dequeue()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"Queue is empty"<<endl;
		}

		int temp;
		temp = Q[front];

		if(front == rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			if(front == size - 1) //For circular Queue change here
				front = 0;
			else
				front ++;
		}

		return temp;
	}

	bool isFull()
	{
		if((rear == size-1 && front == 0) || (rear+1 == front)) //For circular Queue change here
		{
			return true;
		}

		return false;
	}

	bool isEmpty()
	{
		if(front ==-1 && rear==-1)
		{
			return true;
		}

		return false;
	}

	void printQueue()
	{
		int i;
		cout<<"Queue values: ";
		if(rear >= front)   //For circular Queue change here
			for(i=front;i<=rear;i++)
			{
				cout<<Q[i]<<" ";
			}
		else
		{
			for(i=front;i<size;i++)
			{
				cout<<Q[i]<<" ";
			}
			for(i=0;i<=rear;i++)
			{
				cout<<Q[i]<<" ";
			}
		}
		cout<<endl;
	}
};



int main()
{

	Queue q;
	q.enqueue(6);
	q.enqueue(9);
	q.enqueue(7);
	q.enqueue(8);
	q.dequeue();
	q.dequeue();
	q.enqueue(4);
	q.printQueue();

	return 0;
}



