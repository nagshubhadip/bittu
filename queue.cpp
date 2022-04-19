#include <bits/stdc++.h>
using namespace std;
class Queue {
	int front, rear;
	public:
	int arr[100]; //max capacity of queue is 100
	Queue()
	{
		front = rear = 0;   //initializing front and rear as 0
	}
	void enque(int x)  //inserting in queue
	{
		if (rear == 99)   //i.e. rear is full
		{
			cout << "Queue is full";
		}
		else
		{
			arr[rear] = x;   //storing the value in the rear position
			rear++;  //incrementing rear
		}
	}
	void deque()//deleting from queue
	{
		if (front == rear)  //if front and rear is same then queue is empty
		{
			cout << "Queue is empty";
		}
		else  //if queue is not empty then
		{
			int x = arr[0];  //taking out the value from front
			cout<<x<<"  "; //printing result
			for (int i = 0; i < rear-1; i++)  //shifting each value to the left
				arr[i] = arr[i+1];
			rear = rear-1;//decrementing rear
			
		}
	}
};//end of class

int main()
{
	class Queue q;
	q.enque(8);
	q.enque(4);
	q.deque();
	q.enque(1);
	q.deque();
	q.deque();
	cout<<endl;
	return 0;
}

