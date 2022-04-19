#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;
//E is changed to '#' and T is changed to '$' in main function for better understanding
int calculateShiftAmount(char **arr)    //function to calculate shift amount
{
	int c=0,i,j;
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			if(arr[i][j] == '#' || arr[i][j] == '$')   //when current index is # or $ then break
				break;
			if(isdigit(arr[i][j]) )  //if the current index is a digit
			{
				if(arr[i][j-1] == '-')  //checking if the previous index is '-' sign or not. if so, then it is a negative number
					c+= (-1)*(arr[i][j] - 48);
				else
					c+= arr[i][j] - 48;
			} //end of if
		}//end of for j
		if(arr[i][j] == '$')  //$(T) comes. i.e. end of input string
			break;
	}//end of for i
	return c;  //returning the sum
}
void shift(char **arr, int x)
{
	int i,j;
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			if(arr[i][j] == '#' || arr[i][j] == '$')//when current index is # or $ then break
				break;
			if(isupper( arr[i][j] ))    //if the character is in upper case
			{
				if(arr[i][j]+x > 90)   //after addition of the current index with the shifting value, if is gets greater than 90
					arr[i][j] -= (26-x);  //then we have to move forward from the front
				else if(arr[i][j]+x < 65)   //after addition of the current index with the shifting value, if is gets lesser than 65
					arr[i][j] += (26+x);  //then we have to move backward from the back
				else
					arr[i][j] += x;  //else normal shifting
			} //end of if
			else if(islower(arr[i][j] ))   //if the character is in lower case
			{
				if(arr[i][j]+x > 122)  //after addition of the current index with the shifting value, if is gets greater than 122
					arr[i][j] -= (26-x);  //then we have to move forward from the front
				else if(arr[i][j]+x < 97)   //after addition of the current index with the shifting value, if is gets lesser than 65
					arr[i][j] += (26+x);  //then we have to move backward from the back
				else
					arr[i][j] += x;  //else normal shifting
			} //end of else if
		}//end of for j
		if(arr[i][j] == '$')  //if we reach to the end of input
			break;
	}//end of for i
} //end of function
		
int main()
{
	int i,j;
	char a;
	char **arr = (char **)malloc(20*sizeof(char *));  //dynamically allocating memory using malloc
	for(i=0;i<20;i++)
		arr[i] = (char *)malloc(20*sizeof(char));
	//=====================input===========================
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			cin>>a;  //storing the input in a temporary variable a
			arr[i][j]=a;  //copying a to current index of the array
			if(arr[i][j] == 'E' || arr[i][j] == 'T')  //if the input is 'E' or 'T' then break making the index as #
			{
				arr[i][j]= '#';
				break;
			} //end of if
		}//end of for j
		if(a == 'T')  //if input is T then making it '$'
		{
			arr[i][j]='$';
			break;
		} //end of if
	}//end of for i
	int totalShiftamount = calculateShiftAmount(arr);   //calling calculateShiftAmount()
	shift(arr,totalShiftamount);  //calling shift() for shifting
	//==============Printing result=======================
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			if(arr[i][j] == '#' || arr[i][j] == '$')
			{
				cout<<"\n";
				break;
			} //end of if
			if(arr[i][j] == '-')
				cout<<arr[i][j];
			else
				cout<<arr[i][j]<<" ";
		}//end of for j
		if(arr[i][j] == '$')
			break;	
	}//end of for i
	free(arr); //freeing the allocated memory
	return 0;
}//end of main

