import java.util.*;
public class Swap
{
	//methord for swapping digits
	public static int swapDigitPairs(int n)
	{
		int nod = 0, temp = n, s = 0, i;   //nod = number of digits
		
		//calculating the number of digits in the number
		while(temp > 0)
		{
			temp = temp / 10;
			nod ++;
		}
		
		//creating a integer array of size nod
		int arr[] = new int[nod];
		
		temp = n;
		i = nod - 1;
		//storing the digits of the number in the array
		while(temp > 0)
		{
			arr[i] = temp % 10;
			temp = temp / 10;
			i --;
		}
		//swapping the digits of the array
		//if the nod is even, then the loop will start from 0, else it will start from 1 
		for(i = nod % 2; i < nod-1; i = i+2)
		{
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
		
		//converting the array into number
		for(i = 0; i < nod; i++)
			s = s * 10 + arr[i];
		
		//returning result
		return s;
	}//end of methord swapDigitPairs()
	
	public static String swapLetterPairs(String str)
	{
		int noc = str.length(), i;     //noc = length of the string = number of characters
		char temp;
		
		char arr[] = str.toCharArray();  //converting the string to character array
		
		//swapping the characters of the array
		//if the noc is even, then the loop will start from 0, else it will start from 1 
		for(i = noc % 2; i < noc-1; i = i+2)
		{
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
		
		 //converting the character arrsay to string and returning result
		return new String(arr);
	}//end of methord swapLetterPairs()
	
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);  //creating Scanner class object
		int n;
		String str;
		System.out.print("Please input a number to be swapped: ");
		n = in.nextInt();  //taking input the integer
		//calling methord swapDigitPairs() and printing result
		System.out.println("The swapped result is: "+swapDigitPairs(n)+"\n");
		
		System.out.print("Please input a string to be swapped: ");
		str = in.next();  //taking input the String
		//calling methord swapLetterPairs() and printing result
		System.out.println("The swapped result is: "+swapLetterPairs(str)+"\n");
		
	}//end of main() methord
}//end of class

