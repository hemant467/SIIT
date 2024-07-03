package siit;

public class Threadd_2 implements Runnable {

	@Override
	public void run() {
		for(int i=2;i<=10;i+=2)
		{
			System.out.println(i);
			try
			{
				Thread.sleep(1000);
			}
			catch (InterruptedException e) 
			{
				e.printStackTrace();
			}
		}
	}
}
