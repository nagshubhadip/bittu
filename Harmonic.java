//import stdlib.StdOut;

public class Harmonic
{
	public static void main(String[] args)
	{
		int n = Integer.parseInt(args[0]);  //scanning input
		int  i, x;
		
		double total = 0, temp, y;
		
		//for each 1 <= i <= n, add the rational term 1/i to total
		
		for(i = 1; i <= n; i++)
			total += 1/(double)i;
			
		
		//write total to standard output
		for(i = 1;; i++)
		{
			temp = i*total;  //multiplying total with i
			
			//extracting the fraction part of temp
			x = (int)temp; 
			y = temp - x;  //y stores the fraction part of temp
			
			
			//if y is very very very close to 0 or 1, that implies total*i  very very very close is an integer
			if( y < 0.0000000001 || y > 0.9999999999 )
			{
				//printing the result
				
				System.out.println(Math.round(total*i)+"/"+i);
				break;
			}
		}//end of for
			
	}//end of main
}//end of class
