#include<iostream>
using namespace std;
int main()
{
	string program;
	double cgpa;
	cout<<"Enter the Program (Diploma/Bachelor/Master) : ";
	cin>> program;             //inputting the program name
	
	
	if( program == "Diploma" ||  program == "diploma" )  //comparing the program with diploma 
	{
		cout<<"Enter CGPA : ";
		cin>>cgpa;   //inputting the cgpa
		if(cgpa >= 3.00 && cgpa <= 5)  //if the cgpa is >=3.00 and <=5
			cout<<"\nScholarship amount is RM 7,000\n\n";
		else if(cgpa < 3.00 && cgpa > 0)  //if the cgpa is >0 and <3.00
			cout<<"\nScholarship amount is RM 5,000\n\n";
		else  //if the cgpa is not valid
			cout<<"\nWrong CGPA. it must be greater than 0 and less than or equal to 5.. Try again...\n\n";
	}
	
	
	else if( program == "Bachelor" || program == "bachelor" )  //comparing the program with bachelor
	{
		cout<<"Enter CGPA : ";
		cin>>cgpa;     //inputting the cgpa
		if(cgpa >= 3.30 && cgpa <= 5)     //if the cgpa is >=3.30 and <=5
			cout<<"\nScholarship amount is RM 10,000\n\n";
		else if(cgpa < 3.30 && cgpa > 0)     //if the cgpa is >0 and <3.30
			cout<<"\nScholarship amount is RM 6,000\n\n";
		else
			cout<<"\nWrong CGPA. it must be greater than 0 and less than or equal to 5.. Try again...\n\n";
	}
	
	
	else if( program == "Master" || program == "master" )  //comparing the program with master
	{
		cout<<"Enter CGPA : ";
		cin>>cgpa;     //inputting the cgpa
		if(cgpa >= 3.50 && cgpa <= 5)      //if the cgpa is >=3.50 and <=5
			cout<<"\nScholarship amount is RM 12,000\n\n";
		else if(cgpa < 3.50 && cgpa > 0)     //if the cgpa is >0 and <3.50
			cout<<"\nScholarship amount is RM 9,000\n\n";
		else  //if the cgpa is not valid
			cout<<"\nWrong CGPA. it must be greater than 0 and less than or equal to 5.. Try again...\n\n";
	}
	
	
	else //if the program is not valid
		cout<<"\nWrong Program... Try again...\n\n";

	return 0;
} 
