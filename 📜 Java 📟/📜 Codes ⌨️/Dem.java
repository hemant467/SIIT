package siit;

public class Dem {
	public static void main(String[] args) 
	{
		Thread1 p=new Thread1();
		Thread2 q=new Thread2();
		 p.start();q.start();
	}

}
/*OUTPUT:
 *1
 *2
 *3
 *4
 *5
 *6
 *7
 *8
 *9
 *10
*/