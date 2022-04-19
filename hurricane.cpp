#include<iostream>
using namespace std;

int main()
{
	int w;  //for input the wind speed
	char choice;   //for input the choice to continue
	while(1)
	{
		cout<<"\nEnter the wind speed in miles per hour : ";
		cin>>w;   //scanning input wind speed
		
		if(w>= 74 && w<= 95)  //checking if wind speed is in between 74 - 95
			cout<<"\nIt qualifies as a hurricane and the catagory of the hurricane is 1\n";
			
		else if(w>= 96 && w<= 110)   //checking if wind speed is in between 96 - 110
			cout<<"\nIt qualifies as a hurricane and the catagory of the hurricane is 2\n";
			
		else if(w>= 111 && w<= 130)   //checking if wind speed is in between 111 - 130
			cout<<"\nIt qualifies as a hurricane and the catagory of the hurricane is 3\n";
			
		else if(w>= 131 && w<= 155)   //checking if wind speed is in between 131 to 155
			cout<<"\nIt qualifies as a hurricane and the catagory of the hurricane is 4\n";
			
		else if(w>= 155)     //checking if wind speed is >= 156
			cout<<"\nIt qualifies as a hurricane and the catagory of the hurricane is 5\n";
			
		else  // i.e. wind speed is < 74
			cout<<"\nIt doesn't qualify for hurricane\n";
			
		cout<<"--------------------------------------------------------------------------\n";
		cout<<"Enter 'N' to exit or enter any character except 'N' to continue : ";
			cin>>choice;  //input the choice
		if (choice == 'N')  //if N is inputted the break
			break;
	}//end of while
	return 0;
}//end of main

