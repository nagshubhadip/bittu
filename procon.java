/*====OutPut====
shubhadip_nag@ShubhadipNag:~$ javac procon.java
shubhadip_nag@ShubhadipNag:~$ java procon
Press CTRL+C to Stop !!!
Produced : 0
Consumed : 0
Produced : 1
Consumed : 1
Produced : 2
Consumed : 2
Produced : 3
Consumed : 3
Produced : 4
Consumed : 4
Produced : 5
Consumed : 5
Produced : 6
Consumed : 6
Produced : 7
Consumed : 7
Produced : 8
Consumed : 8
Produced : 9
Consumed : 9
Produced : 10
Consumed : 10
*/
import java.lang.*;
class Buffer
{
	int value;
	boolean temp = false;
	synchronized int get()
	{
		if(temp == false)
		{
			try
			{
				wait();
			}
			catch(InterruptedException e)
			{
				System.out.println("InterruptedException happend");
			}
		}
		System.out.println("Consumed : "+value);
		temp = false;
		notify();
		return value;
	}
	synchronized void put(int n)
	{
		if(temp == true)
		{
			try
			{
				wait();
			}
			catch(InterruptedException e)
			{
				System.out.println("InterruptedException happend");
			}
		}
		this.value = n;
		temp = true;
		System.out.println("Produced : "+value);
		notify();
	}
}
class Producer implements Runnable
{
	Buffer q;
	Producer(Buffer q)
	{
		this.q = q;
		Thread t = new Thread(this);
		t.start();
	}
	public void run()
	{
		int x=0;
		while(true)
		{
			q.put(x);
			x++;
		}
	}
}
class Consumer implements Runnable
{
	Buffer q;
	Consumer(Buffer q)
	{
		this.q = q;
		Thread t = new Thread(this);
		t.start();
	}
	public void run()
	{
		int x=0;
		while(true)
			q.get();
	}
}
class procon
{
	public static void main(String args[])
	{
		Buffer x = new Buffer();
		new Producer(x);
		new Consumer(x);
		
		System.out.println("Press CTRL+C to Stop !!!");
	}
}
