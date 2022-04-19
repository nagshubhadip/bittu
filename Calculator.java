import java.util.Arrays;
import java.util.Scanner;

public class Calculator {

    public static void main(String[] args) {
        pow(2, 4);
        pow(4, 3);
        pow(8, 3);
        pow(3, 5);
        pow(5, 4);
        reverse("abc");
        reverse("ddgg");
        reverse("ertyu");
        reverse("ca");
        reverse("lpzet");
    }

    public static int pow(int base, int exponent) {
        int result = 1;
        for (int i = 1; i <= exponent; i++) {
            result = result * base;

        }
        System.out.println(result);

        return result;

    }


    public static String reverse(String arg) {

        char[] ch = arg.toCharArray();


        int j = ch.length;
        //print statement should be here
        //the print statement should be System.out.print  (not println)
        System.out.print("Reverse of a String is : ");
        for (int i = j; i > 0; i--) {
            System.out.print(ch[i - 1]);
        }
        //Print statement should not be here
        
        //print statement added for new line so that each time it will print in new line
        System.out.println();
        return Arrays.toString(ch);
    }
}

