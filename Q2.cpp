#include<iostream>

using namespace std;

int find(char cstr[], char c)   //function find() with 2 argument
{
	//if the index 0 of the current c-string is NULL then return -1
	if(cstr[0] == '\0')
		return -1;
	
	//if the index 0 of the current c-string is the desired character then return 0
	if(cstr[0] == c)
		return 0;

	//if the index 0 of the current c-string is the NOT the desired character then	
	else
	{
		int x = find(cstr+1, c);   //calling the function with increasing the cstr pointer
		
		
		//if doing so, the returned value is -1 => the character is not present. directly return -1
		if(x == -1)
			return -1;
			
		//returning the value of x+1
		else
			return 1+x;
	}//end of else
}//end of function

int main()
{
	char cstr[] = "this is my string";
	char c;
	cout<<"Input a character : ";
	cin>>c;
	int x = find(cstr,c);
	if(x!=-1)
		cout<<"The index of character '"<<c<<"' is "<<x<<endl;
	else 
		cout<<"The character '"<<c<<"' is not found"<<endl;
}
