/*          output
Enter a string  : cemk
you entered correctly
----------------------
Enter a string : gfhg
CEMKNotMatchException: your string is not equal to cemk
	at CEMKNotMatchException.main(CEMKNotMatchException.java:23)
*/
import java.util.*;
import java.lang.*;
class MyException extends Exception
{
	private static String str;
	MyException(String str1)
	{
		super(str1);
	}
}
public class Main
{
	public static void main(String args[])
	{
		try
		{
			Scanner sc = new Scanner(System.in);
			System.out.print("Enter a string : ");
			String str=sc.nextLine();
			if(str.equalsIgnoreCase("CSE CEMK"))
			{
				System.out.println("you entered correctly");	
			}
			else
			{
				MyException me=new MyException("your string is not equal to cemk");
				throw me;
			}
			
		}
		catch(MyException me)
		{
			me.printStackTrace();
		}
		
	}
}
