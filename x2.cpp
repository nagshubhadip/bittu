#include<iostream>
#include<iomanip>
using namespace std;

void ptr(const int values[], int size)
{
	int i, x = 1;
	
	for( i = 0; i < size; i++)
	{
		values[i]++;
		cout<<"  "<<values[i];
		}
}

int main()
{
	const int size = 25;
	int val [size] ;
	
	for(int i = 0; i < size; i++)
	{
		val[i] = i+1;
		
		}
	ptr(val, size);
	
}
