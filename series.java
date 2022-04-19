import java.util.*;

public class series{
	public static int factorial(int n)   //methodd for calculate factorial
	{
		int i, s = 1;
		for(i = 1; i <= n; i++)
			s = s * i;
		return s;
	}
	
	public static double sum(int n, int x)
	{
		int i;
		double s = 0;
		double temp;
		
		for(i = 1; i <= n; i++)
		{
			//calling the factorial() method and storing the result in a temporary variable
			temp = factorial(i);
			
			//if the current term is odd then we have to add the result of the current term
			if(i % 2 == 1)
				s = s + (x/temp);
				
			//if the current term is even then we have to subtract the result of the current term
			else
				s = s - (x/temp);
		}
		return s;  //returning sum
	}
	
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);  //creating scanner class object
		int n, x;
		System.out.print("Enter the value of n and x : ");
		n = in.nextInt();  //input n
		x = in.nextInt();  //input x
		double res = sum(n, x);  //calling method sum()
		System.out.println("Sum = "+res);//printing result
	}
}
