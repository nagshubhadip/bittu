import java.util.*;
public class Sales
{
	public static void print()  //method for printing the menu
	{
		System.out.println("Enter a 1 to query the commission array ==>");
		System.out.println("Enter a 2 to get a summary report       ==>");
		System.out.print("Enter a -1 to end the program           ==> ");
	}
	public static int query(int arr[], int n)  //method for querry
	{
		int c = 0;
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i] == n)  //comparing all elements in the array with n
				c++;     //if equal then increment c
		}
		return c;
	}
	public static void summary(int arr[])
	{
		int c100 = 0, c300 = 0, c50 = 0, c900 = 0;
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i] == 100)
				c100++;   //counteing the number of 100 occurs
			else if(arr[i] == 300)
				c300++;   //counteing the number of 300 occurs
			else if(arr[i] == 50)
				c50++;   //counteing the number of 500 occurs
			else if(arr[i]  == 900)
				c900++;   //counteing the number of 900 occurs
		}
		//printing result
		System.out.println("The number of times 100 appears is "+c100);
		System.out.println("The number of times 300 appears is "+c300);
		System.out.println("The number of times 50 appears is "+c50);
		System.out.println("The number of times 900 appears is "+c900);
	}
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in); //creating scanner class object
		//declaring array and assigning value
		int []arr = {300, 500, 200, 150, 600, 750, 900, 150, 100, 200, 250, 650, 300, 750, 800, 350, 250, 150, 100, 300};
		int ch, n;
		while(true)  //infinite loop
		{
			print();  //printing menu
			ch = in.nextInt(); //taking the choice as input
			if(ch == 1)  //if choice is 1 then perform query
			{
				System.out.print("Enter the commission amount ");
				n = in.nextInt();
				System.out.println("The number of times that commission appears is "+query(arr, n));
			}
			else if(ch == 2)  //if choice is 2, then print summary
				summary(arr);
			else if(ch == -1)  //if choice is -1 then break
				break;
		}
		System.out.println("The program is shutting down");
		System.out.println("Thank you for using our program");
	}
}

