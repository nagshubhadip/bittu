import java.util.Scanner;  //importing scanner class
public class temp
{
	static void change(double study[], int n)  //methord change
	{
		System.out.println("Result : ");
		for(int i=0; i<n; i++)
			System.out.print("   "+study[i] * 5);  //multiplying the arrAy index value with 5 and printing it
		System.out.println();  //new line
	}  //end of methord change()
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);   //creating object of scanner class
		System.out.print("Enter the number of elements in the array : ");
		int n = in.nextInt();  //scanning the number of elements for the array
		double []study = new double[n];   //declaring static array named study
		System.out.println("Enter "+n+" elements in the array : ");
		for(int i=0; i<n; i++)
			study[i] = in.nextDouble();   //entering the elements in the array
		change(study,n);  //calling methord change()
	} //end of main methord
}//end of class
