// CPP code to illustrate
// Queue in Standard Template Library (STL)
#include <iostream>
#include <queue>

using namespace std;

// Print the queue
void showq(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

// Driver Code
int main()
{
	queue<int> gquiz;
	gquiz.push(8);
	gquiz.push(4);
	gquiz.pop();
	showq(gquiz);
	gquiz.push(1);
	gquiz.pop();
	showq(gquiz);
	gquiz.pop();
	showq(gquiz);

	

	return 0;
}

