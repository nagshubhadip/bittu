#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[100],x;
	int i,c,w;
	while(1)
	{
		cout<<"\nEnter the sentence : ";
		cin.getline(s,100);   //reading sentence from user
		w=0;   //it counts the number of words
		for(i=0;i<strlen(s)-1; i++)
			if(s[i] == ' ' && s[i+1] != ' ')   //counting the number of blanks
				w++;
		cout<<"\nThe number of words : "<< w+1;  //number of words = number of blanks + 1
		cout<<"\nTo uppercase : ";
		for(i=0;i<strlen(s); i++)
			putchar(toupper(s[i]));   //toupper() converts the character in upper case
		cout<<endl;
		cout<<"\nTo lowercase : ";
		for(i=0;i<strlen(s); i++)
			putchar(tolower(s[i]));   //tolower() converts the character in lower case
		cout<<endl;
		cout<<"\nTo exit, input 0 else input 1: ";   //taking choice input for continue or break
		cin>>c;
		if(c==0)  //if choice == 0 then break
			break;
		cin.getline(s,100);   // clearing keyboard buffer
	}  //end of while
	return 0;
}
