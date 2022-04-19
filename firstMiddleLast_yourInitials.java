import java.util.*;

public class firstMiddleLast_yourInitials
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);   //creating Scanner class object for taking input
		String f_name, m_name, l_name;
		
		//Question 1
		System.out.println("Enter your first name:");
		f_name = in.next();
		System.out.println("Enter your middle name:");
		m_name = in.next();
		System.out.println("Enter your last name:");
		l_name = in.next();
		
		//Question 2
		System.out.println("Length of First Name: " + f_name.length());  //f_name.length() returns the number of character in f_name
		System.out.println("Length of Middle Name: " + m_name.length());
		System.out.println("Length of Last Name: " + l_name.length());
		
		//Question 3
		int temp = f_name.length() + m_name.length() + l_name.length();   //calculating total number of character in all 3 names
		System.out.println("Total number of characters in all three names: " + temp);
		
		//Question 4
		char t1,t2,t3;
		t1 = f_name.charAt(0);  //storing the first character in t1
		t1 = Character.toUpperCase(t1);  //converting t1 to upper case
		
		t2 = m_name.charAt(0);  //storing the first character in t2
		t2 = Character.toUpperCase(t2);  //converting t2 to upper case
		
		t3 = l_name.charAt(0);  //storing the first character in t3
		t3 = Character.toUpperCase(t3);  //converting t3 to upper case
		
		System.out.println("Initials: "+t1+t2+t3);
		
		//Question 5
		int x = (int)t1 + (int)t2 + (int)t3;  //Typecasting the first 3 character to int and then summing up
		System.out.println("Total ASCII Values of Initials: "+ x);
	}
}
