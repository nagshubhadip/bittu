import java.util.Scanner;   //importing scanner class
public class Multiples
{
	public static boolean isMultiple(int m,int n)  //methord isMultiple which takes 2 arguments
	{
		if(m%n == 0)
			return true;   //after dividing the first number with the second number, if the remainder is 0 then return true
		else
			return false;  //otherwise, return false
	}//end of methord
	public static void main(String args[])  //main methord starts
	{
		Scanner in = new Scanner(System.in);  //creating scanner class object
		int x;
		System.out.print("Enter the number of pairs : ");
		x = in.nextInt();   // inputing the number of pairs 
		int[][] arr = new int[x][2];  //allocating memory for those number of pairs inputed in the previous step
		System.out.println("Enter "+x+" pairs of integers :");
		for(int i = 0; i < x; i++ )
		{
			arr[i][0] = in.nextInt();  //storing integers
			arr[i][1] = in.nextInt();
		}//end of for loop
		for(int i = 0; i < x; i++ )
		{
			if(isMultiple(arr[i][0],arr[i][1]))   //calling function inside if condition
				System.out.println(arr[i][0]+" is a multiple of "+arr[i][1]);  //if the function returns true
			else
				System.out.println(arr[i][0]+" is not a multiple of "+arr[i][1]);  //if the function returns false
		}//end of for loop
	}//end of main methord 
}//end of class

