/*
Enter a name 
John
Enter total sales 
50
name is : John sales :50
the gross earning is:----> 1000.0
name is : shubhadip sales :1000
the gross earning is:----> 1200.0
*/
import java.util.*;
interface Salary
{
		public static final double basic =1000;
		public abstract double calcsal();
	
}

class SalesPerson{
	private String name;
	public int totalsales;
	//constructors
	public SalesPerson(){}
	public SalesPerson(String name,int totalsales)
	{
		this.name=name;
		this.totalsales=totalsales;
	}
	//methods
	public void show()
	{
	System.out.println("name is : "+name+" sales :"+totalsales);	
	}
	
}

class Commision extends SalesPerson{
	public int compercent=0;
	//constructor
	public Commision(){super();}
	
	public Commision(String name,int totalsales)
	{
		super(name,totalsales);
	}
	//method returning  comppercent
	
	public int calccom()
	{
		if(totalsales>200 && totalsales<=500)
		{
			compercent=10;
		}
		else if(totalsales>500)
		{
			compercent=20;
		}
		return compercent;
	}
}

class Earnings extends Commision implements Salary{
	
	
	private double gross;
	
	//constructors
	public Earnings(){};
	public Earnings(String name,int totalsales)
	{
		super(name,totalsales);
	}
	
	//method calculating gross salary
	
	public double calcsal()
	{
		double comm=(totalsales*calccom())/100.0;
		gross=basic+comm;
		return gross;
	}
	//method yo display all details .....
	
	public void show(){
		super.show();
		System.out.println("the gross earning is:----> "+calcsal());
	}
	
}

class Inheritance_Problem_4
{
	
	public static void main(String[] args)
	{
		
		Scanner sc=new Scanner (System.in);
		System.out.println("Enter a name ");
		String name=sc.next();
		System.out.println("Enter total sales ");
		int totalsales=sc.nextInt();
		Earnings o1=new Earnings(name,totalsales);
		o1.show();
		Earnings o2=new Earnings("shubhadip",1000);
		o2.show();
	}
	
}
