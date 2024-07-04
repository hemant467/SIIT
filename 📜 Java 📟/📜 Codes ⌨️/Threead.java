package siit;

public class Threead implements Runnable 
{

	@Override
	public synchronized void run() {
		for(int i=1;i<=10;i++)
		{
			System.out.println(Thread.currentThread().getName());
			try
			{
				Thread.sleep(1000);
			}
			catch(InterruptedException e)
			{
				e.printStackTrace();
			}
		}
		
	}
	
}
