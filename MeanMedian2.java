import java.util.*;    //EDITED

class MeanMedian2
{

	public static void main(String []args)
	{

		int [] nums = new int[20]; //EDITED // ALLOCATING MEMORY OF ARRAY OF SIZE 20

		int num =0;
		String entry;  //NOT USED
		String list = "You entered: ";
		int a, b;
		int temp;  //NOT USED
		double median;
		int total =0;
		double mean =0;
		final int QUIT = 9999;
		int size =0;
		Scanner in  = new Scanner(System.in); //===ADDED====  //CREATING SCANNER CLASS OBJECT
		for(a=0; num!= QUIT && a < nums.length; ++a)
		{
			// your code here
			System.out.printf("Enter number %d or 9999 to quit\n",a+1);  //===ADDED====   
			num = in.nextInt();  //===ADDED==== 
			nums[a] = num; //===ADDED==== 
		}

		//System.out.println("size is " + a);    //======EDITED=====    //THIS IS NOT REQUIRED
		if(num != QUIT)
			size=nums.length;
		else
			size=a-1;

		System.out.println("\nsize is " + size);     //======EDITED===== //added '\n'
		System.out.print(list);
		////=======ADDED===========
		for(a=0; a < size-1; a++)                    //===ADDED==== 
			System.out.print(nums[a]+",  ");     //===ADDED==== 
		System.out.println(nums[size-1]);           //===ADDED==== 
		////=======ADDED UPTO THIS POINT=======
		
	//===============This Part is not required================	
		
		/*int comparisonToMake = size -1;
		for(a=0; a< size -1; ++a)
		{
			for(b=0; b < comparisonsToMake; ++b)
			{

				if(nums[b] > nums[b+1])
				{
					temp = nums[b];
					nums[b]= nums[b+1];
					nums[b+1] = temp;
				}

			}

		--comparisonsToMake;
		}
		*/
	//===============Upto this point======================
		//your code here
		for(a=0; a < size; a++)
			total += nums[a];  //CALCULATING TOTAL
		mean = (double) total / size;   //CALCULATING MEAN
		if(size % 2 == 0)   //IF THERE ARE EVEN NUMBER OF VALUES THEN MEDIAN IS AVERAGE OF TWO MIDDLE ELEMENT
			median = (double)(nums[size/2 -1 ] + nums[size/2]) / 2;
		else
			median = nums[size/2];
		System.out.println("The mean is " + mean + " and the median is " + median);   //EDITED  //ADDED A SPACE BEFORE 'and the ... ' AND "median" SPELLING WAS WRONG
	}
}


