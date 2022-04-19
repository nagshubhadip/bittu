/* output
java.lang.ArithmeticException: / by zero
java.lang.ArrayIndexOutOfBoundsException: Index 12 out of bounds for length 10
java.lang.ArrayStoreException: java.lang.Integer
java.lang.NumberFormatException: For input string: "123.44"
java.lang.ClassNotFoundException: xyz
*/
import java.lang.*;
import java.util.*;
class Excp2
{
	public static void main(String args[])
	{
		//1.for Arithmetic exception	
		try
		{
			
			int a=10,b=0;
			int c=a/b;
		}
		catch(ArithmeticException ae)
		{
			System.out.println(ae);
		}
		//2. for array index out of bound exception	
		try
		{
			int arr1[]=new int[10];
			
			arr1[12]=100;
		}
		catch(ArrayIndexOutOfBoundsException ai)
		{
			System.out.println(ai);
		}
		//3. ArrayStoreException in Java occurs whenever an attempt is made to store the wrong type of object 		//into an array of objects.	
		try
		{
			Object arr[] = new String[4]; 
			arr[1]="xyz";
			arr[2]=20;
			
			 
		}
		catch(ArrayStoreException as)
		{
			System.out.println(as);
		}
		//4. number format exception
		try
		{
			int i=Integer.parseInt("123.44");
		}
		
		catch(NumberFormatException nf)
		{
			System.out.println(nf);
		}
		//5. class not found exception	
		try
		{
			Class.forName("xyz");
		}
		catch(ClassNotFoundException cn)
		{
			System.out.println(cn);
		}		
	}
}
