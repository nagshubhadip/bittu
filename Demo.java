import java.io.*;
import java.lang.*;
import java.util.*;
public class Demo{
	public static void main(String args[]) throws FileNotFoundException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the input file name : ");
		String fname = sc.nextLine();
		File text = new File(fname);
		Scanner in = new Scanner(text);
		String[] data = new String[20];   //creating 2D string to store the file content
		int n=0;
		while(in.hasNextLine())
		{
			data[n] = in.nextLine();  //storing the sentence to data[]
			n++;
		}
		int i,j,temp;
		int[] c = new int[20];  //creating array to count the words in each line
		String word;
		System.out.print("Enter the destination file name : ");
		fname = sc.nextLine();
		try{
			FileWriter f = new FileWriter(fname);
			
			for(i=0;i<n;i++)
			{
				c[i]=0;
				for(j=0;j<data[i].length();j++)
				{
					if(data[i].charAt(j) == ' ')
						c[i]++;   //counting the number of space in each line
				}
				c[i] += 1;  //total words in a line = number of space in that line + 1
				temp = data[i].indexOf(' ');  //finding the index of first word
				if( ! Character.isLetterOrDigit(data[i].charAt(temp-1)))  //if there is any punctuation after the first word
					temp--;
				word = data[i].substring(0,temp);   //coping the first word
				word+="...";   //concatinating "..." with the first word
				temp = data[i].lastIndexOf(' ');  //finding the index of the last space
				word+=data[i].substring(temp+1,data[i].length()-1); //concatinating the last word to the String word
				f.write((i+1)+".  "+c[i]+"  "+word+"\n");  //writing in the file
			}
			f.close();//closing file
		}
		catch(IOException e)
		{
			System.out.println("Failed to open file....");
			e.printStackTrace();
		}
		System.out.println("DONE");		
	}
}
