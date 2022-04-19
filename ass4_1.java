import java.util.*;
import java.text.*;
class person
{
	String name,dept;
	Date dob;
	person() throws Exception  //default constructor
	{
		name = "Nil";
		dept = "Nil";
		try
		{
			dob = new SimpleDateFormat("dd/MM/yyyy").parse("1/1/0");
		
		}
		catch(ParseException e)
		{
			e.printStackTrace();
		}
	}
	person(String n,String d, String db) throws Exception //parameterised constructor
	{
		name = n;
		dept = d;
		try
		{
			dob = new SimpleDateFormat("dd/MM/yyyy").parse(db);
		}
		catch(ParseException e)
		{
			e.printStackTrace();
		}
	}
}
class student extends person
{
	int rollno,sem;
	double cgpa;
	student()  //default constructor
	{
		super();
		rollno = sem = -1;
		cgpa = 0;
	}
	student(int r,int s,double c,String n,String d,String db)    //parameterised constructor
	{
		super(n,d,db);
		rollno = r;
		sem = s;
		cgpa = c;
	}
	void display()
	{
		System.out.println("Name :> "+name+"\nDept. :> "+dept+"\nRoll no. :> "+rollno+"\nSem. :> "+sem+"\nCGPA :> "+cgpa+"\nDOB :> "+dob);
	}
}
class employee extends person
{
	String empid,desg;
	employee()  //default constructor
	{
		super();
		empid = "-999999";
		desg = "Nil";
	}
	employee(String id,String ds,String n,String d,String db)    //parameterised constructor
	{
		super(n,d,db);
		empid = id;
		desg = ds;
	}
	void display()
	{
		System.out.println("Name :> "+name+"\nDept. :> "+dept+"\nEmployee ID :> "+empid+"\nDesignation :> "+desg+"\nDOB :> "+dob);
	}
}
public class ass4_1
{
	public static void main(String args[])
	{
		student st = new student();
		st.display();
	}
}
