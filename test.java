import java.io.*;

class test{
	public static void main(String args[]) throws IOException
	{
		File directory = new File("/home/shubhadip_nag/");
		int count = 0;

String filename[] = directory.list();

for (int i = 0; i < filename.length; i++)

{

System.out.println(filename[i]);
count ++; }
System.out.println(count);

}
}
