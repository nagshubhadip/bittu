#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double l,  payment, temp, rate, r, paid_back, int_paid;
	int n;
	
	//input data
	
	cout<<"Enter Loan Amount : ";
	cin>> l;
	cout<<"Enter Monthly interest rate : ";
	cin>> r;
	cout<<"Enter number of payments : ";
	cin>> n; 
	
	//calculation part
	
	rate = r / 100;   //transfering the percentage rate to fraction
	temp = pow(1+rate, n);   //calculating the term (1+rate)^n and storing it into a temporary variable
	payment = ( rate * temp * l )  /  ( temp - 1);  //calculating payment amount
	paid_back = payment * (double) n ;  //calculating paid back
	int_paid = paid_back - l; //calculating interest paid
	
	//printing results
	
	cout<<"\n-----------------------------------------------\n";
	cout<<"\nLoan Amount:               $" << setw(10) << fixed << setprecision(2) << l ;
	cout<<"\nMonthly Interest Rate:      " << setw(9) << (int)r << "%";
	cout<<"\nNumber of Payments:         " << setw(10) << n ;
	cout<<"\nMonthly Payment:           $" << setw(10) << payment;
	cout<<"\nAmount Paid Back:          $" << setw(10) << paid_back;
	cout<<"\nInterest Paid:             $" << setw(10) << int_paid << endl;
	
	
	return 0;
}
