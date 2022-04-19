import java.util.*;
import java.lang.*;
public class giftBox
{
	public static boolean isValidItemCode(String ic)
	{
		if(ic.length() != 8)
			return false;
		for(int i=0; i<8; i++)
			if( ! Character.isDigit(ic.charAt(i)))
				return false;
		return true;
	}
	public static int getArea(int s, int h)
	{
		if( s >=1 && h >=1 )
		{
			int area = 2 * s*s + 4 * s*h ;
			return area;
		}
		else
			return 0;
	}
	public static void printBoxPrice(int s, int h, String g)
	{
		int area = getArea(s,h);
		double bp;
		if(g.equalsIgnoreCase("jewelry"))
			bp = Math.sqrt(100 + area) * 3;
		else if(g.equalsIgnoreCase("flowers"))
			bp = (area + 300) / 50;
		else
			bp = 40;
		System.out.println("Box Price = "+bp);
	}
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("Enter the item code: ");
		String ic = in.next();
		System.out.print("Enter the box side: ");
		int s = in.nextInt();
		System.out.print("Enter the box height: ");
		int h = in.nextInt();
		System.out.print("Enter the gift type: ");
		String g = in.next();
		boolean valid = isValidItemCode(ic);
		int area = getArea(s,h);
		System.out.println("The area = "+area);
		if( valid == true && area != 0)	
			printBoxPrice(s,h,g);	
		else if(valid == false)
			System.out.println("Invalid item code");
		else if(valid == true  && area == 0)
			System.out.println("Invalid item dimensions");
	}
}
