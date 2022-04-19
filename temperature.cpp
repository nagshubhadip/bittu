#include<iostream>
#include<fstream>
using namespace std;
void getData(double arr[12][2])  //function for read data from text file
{
	int i=0;
	double a,b;
	ifstream input("temps.txt");  //opening file in read mode.
	if(! input.is_open())  //if the file is !opened i.e. failed to open
	{
		cout<<"\nfailed to open file\n";
		exit(0);  //exiting from the program
	}
	while(input >> a >> b ) //scanning high and low at a time for each month
	{
		arr[i][0] = a; //storing the temperature in the array
		arr[i][1] = b;
		i++;
	}
	input.close();//closing the file
}//end of function

double averageHigh(double arr[12][2])  //function for average high temperature
{
	int i;
	double sum = 0;
	for( i=0; i<12; i++)
		sum += arr[i][0];  //calculating sum of the high temperature. i.e. index 0
	return sum/12;   //returning the average
}//end of function

double averageLow(double arr[12][2])  //function for average low temperature
{
	int i;
	double sum = 0;
	for( i=0; i<12; i++)
		sum += arr[i][1];  //calculating sum of the low temperature, i.e. index 1
	return sum/12;   //returning the average
}//end of function

int indexHighTemp(double arr[12][2])  //function for calculating highest temperature
{
	int i,temp=0;
	double max = arr[0][0]; //storing the first high temperature as high
	for( i=0; i<12; i++)
	{
		if(arr[i][0] > max)  //calculating maximum
		{
			max = arr[i][0];
			temp = i;  //storing the index value
		}
	}
	return temp;    // returning the index value
}//end of function

int indexLowTemp(double arr[12][2])  //function for calculating lowest temperature
{
	int i,temp=0;
	double min = arr[0][1]; //storing the first low temperature as min
	for( i=0; i<12; i++)
	{
		if(arr[i][1] < min)  //calculating minimum
		{
			min = arr[i][0];
			temp = i;  //storing the index value
		}
	}
	return temp;   // returning the index value
}//end of function

int main()  //main function
{
	double arr[12][2]; //allocating memory for array
	int x;
	getData(arr);  //calling function getData() for reading the temp. from file
	
	cout<<"\nAverage high temperature is : "<< averageHigh(arr);  //calling function averageHigh() and printing result
	
	cout<<"\nAverage low temperature is : "<< averageLow(arr);  //calling function averageLow() and printing result
	
	x = indexHighTemp(arr);  //calling function indexHighTemp() and storing the result in variable x
	cout<<"\nHighest temperature of the year : "<<arr[x][0];   //printing the value of arr[x][0] which is max high temperature
	
	x = indexLowTemp(arr);  //calling function indexLowTemp() and storing the result in variable x
	cout<<"\nLowest temperature of the year : "<<arr[x][1]<<endl;   //printing the value of arr[x][1] which is min low temperature
	
	return 0;
}

