/******************************************************************
NAME: Shubhadip Nag
College Roll No.: CSE/18/112
University Roll No.: 10700118048
******************************************************************/

/******** GROUP A Problem No.: 2 ********/

import java.util.Scanner;

class Complex
{
	double real,img;
	Complex(double a1,double b1)      //two argument constructer
	{                           
		this.real=a1;
		this.img=b1;
	}//end of constructer
	public static Complex add(Complex c1,Complex c2)   //methord for add two complex numbers
	{  
	 	Complex temp= new Complex(0,0);
	 	temp.real=c1.real+c2.real;
	 	temp.img=c1.img+c2.img;
	 	return temp;
	 }//end of methord add
	 public static Complex sub(Complex c1,Complex c2) //methord for subtract two complex numbers
	 {
	 	Complex temp= new Complex(0,0);
	 	temp.real=c1.real-c2.real;
	 	temp.img=c1.img-c2.img;
	 	return temp;
	 }//end of methord sub
	 public static Complex mul(Complex c1,Complex c2) //methord for multiply two complex numbers
	 {
	 	Complex temp= new Complex(0,0);
	 	temp.real=c1.real*c2.real - c1.img*c2.img;
	 	temp.img=c1.img*c2.real+c2.img*c1.real;
	 	return temp;
	 }//end of methord mul
    public static void display(Complex temp,int i)   //methord for display the resultant complex number
    {
	 	if(i==1)
	 	System.out.println("SUM = " + temp.real +" + ( "+temp.img+"i ) ");
	 	else if(i==2) 
	 	System.out.println("SUBTRACTION = " + temp.real +" + ( "+temp.img+"i ) ");
	 	else if(i==3)
	 	System.out.println("MULTIPLICATION = " + temp.real +" + ( "+temp.img+"i ) ");
	 }//end of methord display
}//end of class Complex
public class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        double r,i;
        System.out.print("Enter the real and imaginary pare of the first number : ");
        r=in.nextDouble();
        i=in.nextDouble();
        Complex x1=new Complex(r,i);
        System.out.print("Enter the real and imaginary pare of the second number : ");
        r=in.nextDouble();
        i=in.nextDouble();
        Complex x2=new Complex(r,i);
        Complex res1=Complex.add(x1,x2);
        Complex.display(res1,1);
        Complex res2=Complex.sub(x1,x2);
        Complex.display(res2,2);
        Complex res3=Complex.mul(x1,x2);
        Complex.display(res3,3);
    }//end of main methord
}//end of Main class

/******************************************************************
Complete or Partial OUTPUT:

Enter the real and imaginary pare of the first number : 3 2                                                         
Enter the real and imaginary pare of the second number : 4 -3                                                       
SUM = 7.0 + ( -1.0i )                                                                                               
SUBTRACTION = -1.0 + ( 5.0i )                                                                                       
MULTIPLICATION = 18.0 + ( -1.0i )  


******************************************************************/

//Group B



/******************************************************************
NAME: Shubhadip Nag
College Roll No.: CSE/18/112
University Roll No.: 10700118048
******************************************************************/

/******** GROUP B Problem No.: 6 ********/

import java.util.Scanner;
import java.lang.*;
class MyException extends Exception
{
	private static String str;
	MyException(String str1)
	{
		super(str1);   //calling the parent class using super() keyword
	}//end of constructor
}//end of MyException class
public class Main{
    public static void main(String[] args){
        try
		{
			Scanner sc = new Scanner(System.in);  //creating object of scanner class
			System.out.print("Enter a string : ");
			String str=sc.nextLine();
			if(str.equalsIgnoreCase("CSE CEMK"))   //equalsIgnoreCase() ignores the cases of the string
			{
				System.out.println("Bingo !!!\nYou entered correctly");	
			}//end of if
			else
			{
				MyException me=new MyException("Ahhhhh !!!\nYour string is not equal to cemk");
				throw me;  //throwing the MyException
			}//end of else
			
		}//end of try
		catch(MyException me)
		{
			me.printStackTrace();
		}//end of catch
    }//end of main methord
}//end of Main class

/******************************************************************
Complete or Partial OUTPUT:
Enter a string : CsE CemK                                                                                           
Bingo !!!                                                                                                           
You entered correctly

Enter a string : cemk cse                                                                                           
MyException: Ahhhhh !!!                                                                                             
Your string is not equal to cemk                                                                                    
        at Main.main(Main.java:32)  
******************************************************************/

