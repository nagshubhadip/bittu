#include<iostream>

using namespace std;

void truthTable(bool X, bool Y)  //Functioon for building the truth table
{
	bool arr[11];  //We have to compute 11 functions
	int i;
	
	if(X == true)  //printing the value of X
		cout<<"   T   ";
	else
		cout<<"   F   ";
	
	if(Y == true)  //printing the value of Y
		cout<<"   T   ";
	else
		cout<<"   F   ";
	
	//calculation part
	arr[0] = !X;
	arr[1] = !Y;
	arr[2] = X && Y;
	arr[3] = X || Y;
	arr[4] = X ^ Y;
	arr[5] = X ^ Y ^ X;
	arr[6] = X ^ Y ^ Y;
	arr[7] = ! ( X && Y );
	arr[8] = !X || !Y;
	arr[9] = ! ( X || Y );
	arr[10] = !X && !Y;
	
	for(i = 0; i < 11; i++)  //printing the value of that 11 function w.r.t. X and Y 
	{
		if(arr[i] == true)
			cout<<"   T   ";
		else
			cout<<"   F   ";
	}
	cout<<endl;
}

int main()
{
	//printing the geading
	cout<<"   X      Y     !X     !Y     X&&Y   X||Y   X^Y   X^Y^X  X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
	//calling function
	truthTable(true, true);
	truthTable(true, false);
	truthTable(false, true);
	truthTable(false, false);
	
	return 0;
}

