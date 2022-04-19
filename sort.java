import java.util.*;
public class sort
{
	public static boolean checksort(int []arr)
	{
		int i;
		for(i=0; i< arr.length-1; i++)
		{
			if(arr[i] < arr[i+1])
				return false;
		}
		return true;
	}
	public static void main(String args[])
	{
		Scanner in = new Scanner (System.in);
		int arr [] = {5,6,6,7};
		System.out.println(checksort(arr));
	}
}
