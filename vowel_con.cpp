#include<iostream>
using namespace std;
void Vowel_Consonant(char x)
{
	if(( x >= 65 && x <= 90 ) || ( x >= 97 && x <= 122 ))  //check if the character is a alphabet or not using the ASCII values of alphabet
	{
		if( x =='a' || x =='A' || x =='e' || x =='E' || x =='i' || x =='I' || x =='o' || x =='O' || x =='u' || x =='U' ) //if the character is vowel
			cout<<"'"<<x<<"' is a vowel\n";
		else
			cout<<"'"<<x<<"' is a consonant\n";  //if the character is consonant
	}
	else    //if the character is not an alphabet
		cout<<"'"<<x<<"' is neither vowel nor consonant\n";
}//end of function

int main()
{
	char x;
	cout<<"\nEnter a character : ";
	cin>>x; //taking input
	Vowel_Consonant(x);  //calling function
	return 0;
}

