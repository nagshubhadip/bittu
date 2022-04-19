#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	float x,y,z,avg;
	ifstream input;   //declaring input file stream variable
	input.open("Scores.txt");   //opening input file
	input>>x>>y>>z;  //scanning input from the file
	avg = ( x+y+z ) / 3;  //calculating average
	cout<<"mark1 = "<<x<<"\nmark2 = "<<y<<"\nmark3 = "<<z;  //printing results on the monitor
	cout<<"\nThe average is "<<avg<<endl;
	
	ofstream output;    //declaring output file stream variable
	output.open("Average.txt");   //opening output file
	output<<"\nThe average is "<<avg<<endl;  //writing in output file
	input.close();  //closing input file
	output.close();  //closing output file
	return 0;
}
