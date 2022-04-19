
public class AssignIP
{
	public static void main(String Args[])
	{
		short ip[][] = new short[5][4];  //creating array of 5 ip address
		
		//assigning value to each octate of the ip address
		ip[0][0] = 126; ip[0][1] = 0; ip[0][2] = 0; ip[0][3] = 1;
		
		ip[1][0] = 145; ip[1][1] = 31; ip[1][2] = 255; ip[1][3] = 255;
		
		ip[2][0] = 8; ip[2][1] = 210; ip[2][2] = 180; ip[2][3] = 111;
		
		ip[3][0] = 35; ip[3][1] = 67; ip[3][2] = 5; ip[3][3] = 81;
		
		ip[4][0] = 255; ip[4][1] = 255; ip[4][2] = 255; ip[4][3] = 255;
		
		//printing result
		for(int i = 0; i< 5; i++)
		{
			System.out.println((i+1)+"'th ip address: "+ip[i][0]+"."+ip[i][1]+"."+ip[i][2]+"."+ip[i][3]);
		}
	}
}

