#include<iostream>
#include<iomanip>
using namespace std;
//global variables
int CHILD = 5;
int SENIOR = 55;
double PRICE = 15.0;
double DISCOUNT = 3.0;
//function returns true if discount is available else returns false
bool IsDiscount(int age)
{
	if(age <= CHILD || age >= SENIOR)
		return true;
	else
		return false;
}
//function for calculating total price
void CalcTotal(int age, double *total, int *discounts)
{
	if(IsDiscount(age))  //if discount is available
	{
		*total += PRICE - DISCOUNT;  //then add discounted price with total
		*discounts += 1;  //increment the number of discount
	}
	else
		*total += PRICE;   //if discount is not available, then simply add price with total
}
//function for input age from user
int GetAge(int movie_goer)
{
	int age;
	cout<<"Enter movie goer "<<movie_goer<<"'s age: ";
	cin>>age;
	return age;//returning the inputted age
}
int main()
{
	int discounts = 0, movie_goer, i, age;
	double total = 0;
	cout<<"Enter how many movie goers: ";
	cin>>movie_goer;  //input the number of movie goer
	for(i = 1; i <= movie_goer; i++)  //for every movie goer, the loop will run
	{
		age = GetAge(i);  //calling function for input age
		CalcTotal(age, &total, &discounts); //calculating total. variable total and discounts are passed by reference
	}
	cout<<"The price for "<<movie_goer<<" movie goers is $"<<fixed<<setprecision(2)<<total;  //printing the total with fixing the decimal upto 2 decimal place
	if(discounts < 2)
		cout<<"\nThere is "<<discounts<<" discount.\n";  //if the discounts is a singular number
	else
		cout<<"\nThere are "<<discounts<<" discounts.\n";  //if the discounts is a plural number
	cout<<"Goodbye\n";
	return 0;
}
