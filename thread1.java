/*===== OUTPUT=====
shubhadip_nag@ShubhadipNag:~$ javac thread1.java
shubhadip_nag@ShubhadipNag:~$ java thread1
 Thread with priority 1 : 203595312 ( 31.0% of cpu )
 Thread with priority 5 : 203608488 ( 31.0% of cpu )
 Thread with priority 9 : 234968788 ( 36.0% of cpu )
*/
import java.lang.*;
class CounterThread implements Runnable
{
	long temp = 0;
	Thread t;
	private volatile boolean running = true;
	public CounterThread(int p)
	{
		t = new Thread(this);
		t.setPriority(p);
	}
	public void run()
	{
		while(running == true)
			temp ++;
	}
	public void stop()
	{
		running = false;
	}
	public void start()
	{
		t.start();
	}
}
class thread1
{
	public static void main(String args[])
	{
		Thread.currentThread().setPriority(Thread.MAX_PRIORITY);
		CounterThread one = new CounterThread(1);
		CounterThread five = new CounterThread(5);
		CounterThread nine = new CounterThread(9);
		one.start();
		five.start();
		nine.start();
		try
		{
			Thread.sleep(500);
		}
		catch (InterruptedException e)
		{
			System.out.println("Main Thread interrupted");
		}
		one.stop();
		five.stop();
		nine.stop();
		try
		{
			one.t.join();
			five.t.join();
			nine.t.join();
		}
		catch(InterruptedException e)
		{
			System.out.println("Exception happend ");
		}
		long x = one.temp+five.temp+nine.temp;
		double per= (one.temp * 100 ) / x ;
		System.out.println(" Thread with priority 1 : "+one.temp+" ( "+per+"% of cpu )");
		per= (five.temp * 100) / x ;
		System.out.println(" Thread with priority 5 : "+five.temp+" ( "+per+"% of cpu )");
		per= ( nine.temp * 100) / x ;		
		System.out.println(" Thread with priority 9 : "+nine.temp+" ( "+per+"% of cpu )");		
	}
}
