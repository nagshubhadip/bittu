import java.util.*;

public class table
{
	public static void main(String args[])
	{
		int n, i;
		Scanner in = new Scanner(System.in);  //creating Scanner class object for input
		
		//input part
		System.out.print("Please enter a number: ");
		n = in.nextInt();
		
		//output part
		System.out.println("\nMultiplication table for "+n);
		System.out.println("Multiplier    Result");
		System.out.println("--------------------");
		
		//inside for loop, the result is calculated and printed
		for(i=1; i <= 10; i++)
			System.out.println(" "+i+"             "+n*i);
	}//end of main methord
}//end of class

