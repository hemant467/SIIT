package siit;

public class Thread2 extends Thread 
{

	public void run() {
		// TODO Auto-generated method stub
		for(int i=2;i<=10;i+=2)
		{
			System.out.println(i);
			
				try {
					Thread.sleep(1000);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			
		}
		
	}
	
}
