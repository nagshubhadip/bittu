import java.util.Scanner;  //importing Scanner class
public class sum100
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in); //creating Scanner class object
		int n,i,sum = 0;
		System.out.print("Enter an integer between 1 and 20: ");
		n = in.nextInt();  //inputting the number
		if(n >= 1 && n <= 20)  //if int number is between 1 and 20
		{
			for(i = n; i <=100; i++)
				sum = sum + i;  //calculating sum
			System.out.printf("Sum of the numbers between %d and 100 is %d\n",n,sum);
		}//end of if
		else
			System.out.println("invalid number");
	}//end of main
}//end of class

