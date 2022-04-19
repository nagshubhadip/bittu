import java.lang.*;

public class absolute
{
	//methord maxminAbsVal()
	public static String maxminAbsVal(int inintArr[])
	{
		int i, j, maxAbsVal, minAbsVal, temp;
		
		maxAbsVal = 0;  //taking maxAbsVal as 0
		minAbsVal = Math.abs(inintArr[1] - inintArr[0]);   //taking maxAbsVal as absolute value between first two number
		
		//i loop will continue from i = 0 to inintArr.length-2 (inclusive)
		for(i=0; i < inintArr.length-1; i++)
		{
			//j loop will continue from j = i+1 to inintArr.length-1 (inclusive)
			for(j = i+1; j < inintArr.length; j++)
			{
				//calculating absolute value in the index i and j and storing it in temp
				temp = Math.abs(inintArr[i] - inintArr[j]);
				
				//we have to conceder nonzero absolute value
				if(temp > 0 && temp < minAbsVal)
					minAbsVal = temp;
				if(temp > 0 && temp > maxAbsVal)
					maxAbsVal = temp;
			}//end of for j
		}//end of for i
		//converting the integer to string
		String outStrArr = Integer.toString(minAbsVal) + ":" + Integer.toString(maxAbsVal);
		//returning the string
		return outStrArr;
	}//end of methord
	
	public static void main(String []args)
	{
		int[] inintArr = {2, -1, 4, 7, 2};
		System.out.println(maxminAbsVal(inintArr));
	}
}

