/* output  
Enter the year(YYYY): 
1899
Enter the month(MM): 
1
Enter the Day(DD): 
4
Exception occuredYearException: Enter a valid year(1970 to 2069)
Default Date : 
Date: 1/1/1970
Entered Date : 
Date: 4/1/1899
shubhadip_nag@ShubhadipNag:~/javaprog$ java MonthExcp
Enter the year(YYYY): 
1987
Enter the month(MM): 
12
Enter the Day(DD): 
23
Default Date : 
Date: 1/1/1970
Entered Date : 
Date: 23/12/1987
shubhadip_nag@ShubhadipNag:~/javaprog$ java MonthExcp
Enter the year(YYYY): 
558
Enter the month(MM): 
576
Enter the Day(DD): 
23
Exception occuredYearException: Enter a valid year(1970 to 2069)
Exception occured: MonthException: Enter a valid month(1 to 12)
Default Date : 
Date: 1/1/1970
Entered Date : 
Date: 23/576/558
*/
import java.util.*;

class DateException extends Exception
{
	
	DateException(String s)
	{
	    super(s);
	}
}

class MonthException extends Exception
{
	MonthException(String s)
	{
		super(s);
	}
}

class YearException extends Exception
{
	YearException(String s)
	{
		super(s);
    	}
}

//Date class
class Date 
{
	private int date;
	private int month;
	private int year;
	//no argument constructor
	public Date() 
	{
		year = 1970;
		month = 1;
		date = 1;
    	}
    	//three argument constructor
	public Date(int date,int month,int year)
	{
		this.year = year;
		this.month =month;
		this.date = date;
    	}
	static void validateYear(int year) throws YearException
	{
		if(year<1970 || year>2069)
	        	throw new YearException("Enter a valid year(1970 to 2069)");

	}
	static void validateMonth(int month) throws MonthException
	{
		if(month<1 || month>12)
	        	throw new MonthException("Enter a valid month(1 to 12)");

	}
	static void validateDate(int date,int month,int year) throws DateException
	{
        	if(month== 1 || month== 3 || month== 5 || month== 7 || month== 9 || month== 11)
        	{
            		if(date<1 || date>31)
            		{
                		throw new DateException(" Entered Date is not valid");
            		}
       		}
       		 else if(month==2)
       		 {
            		if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
            		{
                		if(date<1 || date>29)
                		{
                    			throw new DateException(" Entered Date is not valid");
                		}
                    
            		}        
            		else
                		if(date<1 ||date>28)
                    			throw new DateException(" Entered Date is not valid");    

        	}
        	else if( month== 4 || month== 6 || month== 8 || month== 10 || month== 12)
        	{
            		if(date<1 || date>30)
            		{
                		throw new DateException(" Entered Date is not valid");
           		}    
        	}
	}
	void dispaly()
        {
		System.out.println("Date: "+date+"/"+month+"/"+year);
        }
}

public class MonthExcp
{
	public static void main(String[] args) 
	{
        	int year;
        	int date;
        	int month;
        
        	Scanner sc=new Scanner(System.in);
        	System.out.println("Enter the year(YYYY): ");
        	year=sc.nextInt();
        	System.out.println("Enter the month(MM): ");
        	month=sc.nextInt();
		System.out.println("Enter the Day(DD): ");
        	date=sc.nextInt();
        	Date ob=new Date();
        	Date ob1=new Date(date,month,year);
        
        	try//for checking year exception
        	{
        		ob1.validateYear(year);//validating date 1970 to 2069
		}
        	catch(Exception e)
        	{
            		System.out.println("Exception occured"+e);
        	}
        
        	try //for checking month exception
        	{
        		ob1.validateMonth(month);//validating month 1 to 12
        	}
        	catch(Exception e)
        	{
            		System.out.println("Exception occured: "+e);
        	}
		try
		{
        		ob1.validateDate(date,month,year);//validating date
        	}
        	catch(Exception e)
        	{
            		System.out.println("Exception occured: "+e);
        	}
    		finally
    		{    
        		System.out.println("Default Date : ");
        		ob.dispaly();
        		System.out.println("Entered Date : ");
        		ob1.dispaly();       		
    		}
    	}
}
