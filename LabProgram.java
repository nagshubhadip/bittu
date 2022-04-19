import java.util.Scanner;

public class LabProgram {
	
	public static double recursiveSum(double[] array,int size) {
		//add your code here!
		if( size == 1 )   //base case. if size == 1 then return the 0'th index
			return array[0];
		else
			return array[size-1] +  recursiveSum(array,size-1);  //if size != 1 then calling the function again decreasing the size
	}


	public static void main(String[] args) {
		//Don't write code inside the main methord
		Scanner scnr = new Scanner(System.in);
		double[] array = new double[scnr.nextInt()];
		double input;
		
		for(int i = 0; i < array.length; i++) {
			input = scnr.nextDouble();
			array[i] = input;
		}
		System.out.println(recursiveSum(array,array.length));
	}
}

