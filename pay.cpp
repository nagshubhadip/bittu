#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declaring variables
	string name;
	float gross_pay, tax_ded, net_pay, pay_rate;
	int noh;
	
	//input
	cout<<"Enter the name of the employee(connect the first name to the last name by a '-'): ";
	cin>>name; //input name
	cout<<"Enter the pay rate: ";
	cin>>pay_rate;  //input pay rate
	cout<<"Enter number of hours worked: ";
	cin>>noh;  //input number of hours worked
	
	//calculation part
	
	gross_pay = pay_rate * noh;  //gross pay is the pay rate times the number of hours
	
	//two-way selection structures for calculating tax deduction
	if(gross_pay < 1000)
		tax_ded = gross_pay * 0.1;
	else
		tax_ded = gross_pay * 0.15;
		 
	net_pay = gross_pay - tax_ded;  //The net pay is the gross pay minus the tax deduction
	
	
	//output
	//setprecision() is used to set the floting point precision. the function is declared in the header "iomanip"
	cout<<"-----------------------------------------\n";
	cout<<"Name:                      "<<fixed<<setprecision(2)<<name<<endl;
	cout<<"Your gross pay is:         "<<fixed<<setprecision(2)<<gross_pay<<endl;
	cout<<"Your tax deduction is:     "<<fixed<<setprecision(2)<<tax_ded<<endl;
	cout<<"Your net pay is:           "<<fixed<<setprecision(2)<<net_pay<<endl;
	
	return 0;
}//end of program
