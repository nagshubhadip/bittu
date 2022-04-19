#include<iostream>
#include<fstream>
using namespace std;
struct Student {    //declaring structure
	int ID;
	string first;
	string last;
	float gpa;
	int semesterHours; 
	int totalHours;
	};
int main()
{
	struct Student students[100];   //declaring array of struct Student
	int i=0, n;
	struct Student temp;   // Declaring a temporary variable
	
	ifstream ip("student.txt");   //opening file "student.txt" in read mode
	
	if(ip.fail())   //if we are failed to open the i/p file
	{
		cout<<"\nFailed to open file...\n";
		return 0;  //getting out of the program
	}
	while( ! ip.eof() )   //loop will continue until it reaches to END OF FILE
	{
		ip >> temp.ID >> temp.first >> temp.last >> temp.gpa >> temp.semesterHours >> temp.totalHours ;  //storying data in the temporay variable
		//copying data from temporary variable to the array of structure
		students[i].ID = temp.ID;
		students[i].first = temp.first;
		students[i].last = temp.last;
		students[i].gpa = temp.gpa;
		students[i].semesterHours = temp.semesterHours;
		students[i].totalHours = temp.totalHours;
		i++;   // incrementing the index value
	}
	n = i-1;  //storing the number of data stored in the array, in the variable 'n'
	
	//printing the student name whose gpa is < 2
	cout<<"\nStudent, whose gpa are < 2 :\n";
	for(i=0; i<n; i++)
	{
		if(students[i].gpa < 2)
			cout<<students[i].first<<"  "<<students[i].last<<"\n";
	}
	//printing the student name whose gpa is  in between 2 and 3
	cout<<"\nStudent, whose gpa are in between 2 and 3 :\n";
	for(i=0; i<n; i++)
	{
		if(students[i].gpa >= 2 && students[i].gpa <= 3)
			cout<<students[i].first<<"  "<<students[i].last<<"\n";
	}
	return 0;
}//end of main()

