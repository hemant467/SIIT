package siit;

public class Threadd_1_2_Combine {

	public static void main(String[] args) throws InterruptedException
	{
		Threadd_1 p=new Threadd_1();
		Threadd_2 q=new Threadd_2();
		Thread r=new Thread(p);
		Thread s=new Thread(q);
		r.start();s.start();
		r.join();s.join();
		System.out.println("HEMANT");
	}

}
/*
 * OUTPUT:
 			The output is the combination of Threadd_1.java & Threadd_2.java 
 			1st the output starts/runs from Threadd_2 then Threadd_1
 			Threadd_2 : for(int i=2;i<=10;i+=2)
 			Threadd_1 : for(int i=1;i<=10;i+=2)
 * 2
 * 1
 * 4
 * 3
 * 6
 * 5
 * 8
 * 7
 * 10
 * 9
 * HEMANT
*/