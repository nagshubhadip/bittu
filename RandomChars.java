import java.util.Scanner;
import java.util.Random;
public class RandomChars {
	public static void main(String[] args) {
		makeRandoms();
	}
	public static void makeRandoms() {
		Scanner in = new Scanner(System.in);  //creating scanner class object
		Random rd = new Random();   //creating random class object
		System.out.println("Enter a seed for rando number generator:");
		long sd = in.nextLong();  //input the seeed
		int x;
		rd.setSeed(sd);  //setting seed value
		System.out.println("RANDOM:");
		x = rd.nextInt(26) + 65 ;   //generating random value for upper case letter
		System.out.println("UpperCase = "+(char)x);
		x = rd.nextInt(26) + 97 ;   //generating random value for lower case letter
		System.out.println("LowerCase = "+(char)x);
		x = rd.nextInt(10) + 48 ;   //generating random value for digit
		System.out.println("Digit = "+(char)x);
	}
}
