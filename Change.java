import java.util.Scanner;

public class Change
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);  //creating Scanner class object
		String name;
		int n;
		
		System.out.println("Welcome to the smart Change Machine");
		System.out.println("-----------------------------------");
		
		System.out.print("Your name: ");
		name = in.nextLine();  //scanning name
		System.out.print("Change amount in cents: ");
		n = in.nextInt();  //scanning cents
		
		int halfDollar = n / 50;  //calculating half a dollar
		n = n%50;
		
		int quarter = n / 25;  //calculating quarters
		n = n%25;
		
		int dime = n / 10;  //calculating dimes
		n = n%10;
		
		int nickel = n / 5;  //calculating nickels
		n = n%5;
		
		int penny = n;    //the remainder is pennies
		
		//printing output
		
		System.out.println("\nChange coins due:");
		System.out.println("-----------------");
		
		System.out.println("Half dollars: "+halfDollar);
		System.out.println("Quarters: "+quarter);
		System.out.println("Dimes: "+dime);
		System.out.println("Nickels: "+nickel);
		System.out.println("Pennies: "+penny);
		
		System.out.println("\nGood Bye!");
	}//end of main
}//end of class
