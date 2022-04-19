/*====OutPut====
shubhadip_nag@ShubhadipNag:~$ javac thread2.java
shubhadip_nag@ShubhadipNag:~$ java thread2
Enter the size of the array (use -1 for default size) : 5
Current Element : 
   0   0   0   0   0
54 is added by Thread-0
38 is added by Thread-0
47 is added by Thread-1
64 is added by Thread-1
59 is added by Thread-1
Array overflow
Current Element : 
  54  38  47  64  59
*/
import java.util.Arrays;
import java.util.*;

class TArray
{
        int s=6;
        int[] arr;
        int i=0;
        public TArray()  //default constructer
        {
                arr = new int[s];
	}
        public TArray(int size)  //parameterized constructer
        {
                arr = new int[size];
                s=size;
        }
        public synchronized void add(int a)
        {
        	if(i < s)
        	{
                	arr[i]=a;
                	i++;
                       System.out.println(a+" is added by "+Thread.currentThread().getName());
                }
                else
                       System.out.println("Array overflow");
        }
        public void display()
        {
                System.out.println("Current Element : ");
                for(int j=0;j<s; j++)
                {
                        System.out.printf("%4d",arr[j]);
                }
                System.out.println();
        }
}

class WriteThread implements Runnable
{
        Thread t;
        TArray tArray;
        Random r=new Random();
        public WriteThread(TArray tArray)
        {
                this.tArray=tArray;
                t=new Thread(this);
                t.start();
        }
        public void run()
        {
		for(int i=0;i<3;i++)
                        tArray.add(r.nextInt(100));
        }
}

public class thread2
{
        public static void main(String[] args)throws InterruptedException
        {
		Scanner in = new Scanner(System.in);
		System.out.print("Enter the size of the array (use -1 for default size) : ");
		int n = in.nextInt();
		if(n==-1)
			n=6;
		TArray tArray=new TArray(n);
		tArray.display();
		WriteThread t1=new WriteThread(tArray);
		WriteThread t2=new WriteThread(tArray);
		t1.t.join();
		t2.t.join();
		tArray.display();
        }
}
