#include<iostream>
using namespace std;
int main()
{
	string name1, name2;
	cout<<"Enter your first friend's full name: ";
	getline(cin, name1);  //storing the first name in variable name1
	cout<<"Enter your second friend's full name: ";
	getline(cin, name2);  //storing the second name in variable name2
	
	
	//comparing two name
	if( name1 == name2 )  //if both the names are equal then print that they  have the same name
		cout<<"They have the same name.\n";
	else  //i.e. if both the names are not equal then print that they do not have the same name
		cout<<"They DO NOT have the same name.\n";
	return 0;
}
