#include<iostream>
using namespace std;

int main()
{
	string password;
	bool len = false, upp = false, dig = false;   //variable 'len' is for length, 'upp' is for upper case, 'dig' is for digits
	int i;
	cout<<"Enter a password: ";
	cin>>password;  //input password
	
	//checking if the length >= 8 then make len = true
	if(password.length() >= 8)
		len = true;
	
	//traversing the whole string
	for(i = 0; i < password.length(); i++)
	{
		//uppercase ASCII lies between 65-90 //if the character is upper case, then make upp = true
		if(password[i] >= 65 && password[i] <= 90)
			upp = true;
		//digits ASCII lies between 48-57 //if the character is a digit, then make dig = true
		if(password[i] >= 48 && password[i] <= 57)
			dig = true;
	}
	
	//if all boolean variables are true then output valid password
	if(len && upp && dig)
		cout<<"Valid password\n";
	//if any one variable is false, then it is invalid password
	else
		cout<<"Invalid password\n";
	
	cout<<"\nProgram Ends\n\n";
	return 0;
}

