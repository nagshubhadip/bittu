import java.util.*;

public class ll
{
	Info head;
	static class Info  //declaring class for the node with name,age and link
	{
		int age;
		String name;
		Info link;
		Info(String n,int a)  //defining constructer
		{
			age = a;  //copying age
			name = n;   //copying name
			link = null;  //making the link as null
		}  //end of constructer
	}//end of class Info
	
	public static ll input(ll top,String n,int a)   //methord input which returns the reference of the Head/top Node
	{
		Info in = new Info(n,a);  //creating object of Info class
		in.link = null;  //making the link of the new node as null
		if(top.head != null)   //i.e. if it is not the first node
		{
			Info temp = top.head;  //storing the top in a temporary variable of type Info
			while ( temp.link != null)   //Traversing the liunked list to find the end of the list
				temp = temp.link;    //temp is now pointing to the link of temp
			temp.link = in;   //storing the referance of the new node at the end of the list
		}
		else  //i.e. it is the first node.....
			top.head = in;
		return top;   //returning the top
	}  //end of methord input
	
	public static void display(ll top)  //methord for display the linked list
	{
		Info temp = top.head; //storing the top in a temporary variable of type Info 
		int i;
		for(i =0;i<5;i++)
		{
			System.out.println("Name : "+temp.name +"    Age : "+temp.age);  //printing data
			temp = temp.link;  //temp is now pointing to the link of temp
		}//end of for
	}//  //end of methord display
	
	public static void main(String args[])  //main methord
	{
		ll temp = new ll();  //creating object of ll class
		Scanner sc = new Scanner(System.in);//creating object of scanner class
		int age,i;
		String name;
		System.out.println("           INPUT\nEnter name and age of 5 students....");
		for(i=1;i<=5;i++)  //reading data of 5 student
		{
			name = sc.next();
			age = sc.nextInt();
			temp = input(temp,name,age);  //adding data to linked list
		}
		System.out.println("------------Output----------");
		display(temp);   //display linked list
	}//end of main methord
}//end of class ll


