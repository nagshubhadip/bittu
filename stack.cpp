#include <bits/stdc++.h>

using namespace std;

class Stack {
	int top;
	public:
	int arr[100]; //max capacity of stack is 100 
	Stack()
	{
		top = -1;  //initializing stack top as -1
	}
	void push(int x)  //function for push into the stack
	{
		if (top >= 99)  //if top reaches to max capacity
		{
			cout << "Stack is full";
		}
		else
		{
			top++;  //incrementing top
			arr[top] = x;  //storing result is stack top position
		}
	}
	void pop()  //function for pop from the stack
	{
		if (top < 0) //if stack top is negative
		{
			cout << "Stack is empty";
		}
		else
		{
			int x = arr[top];  //storing the stack top value in x
			top--; //decrementing stack top
			cout<<x<<"  "; //printing result
		}
	}
};//end of class

int main()
{
	class Stack s;
	s.push(15);
	s.push(13);
	s.pop();
	s.push(17);
	s.push(16);
	s.pop();
	s.pop();
	s.pop();
	cout<<endl;
	return 0;
}

