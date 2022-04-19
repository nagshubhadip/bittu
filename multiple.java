import java.util.Scanner;
public class multiple
{
	public static void main(String args[])
	{
		int m,n,count;
		Scanner in = new Scanner(System.in);
		System.out.print("\nEnter the value of n, m : ");
		n=in.nextInt();
		m=in.nextInt();
		//TO-DO PART
		count = 0;  //initializing count to 0
		do
		{
			
			if(n != 0 && n%7 == 0)  //if n is divisible by 7 and n is not equal to 0 then break
				break;
			if(n==0)  //if n = 0 then count ++
				count++;
			n++; //incrementing n
			count++; //incrementing count
		}while(n<m);  //loop will continue until n != m
		System.out.println("\nCount = "+count);
	}
}
		
