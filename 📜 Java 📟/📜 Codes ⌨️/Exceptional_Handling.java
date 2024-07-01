package siit;

public class Exceptional_Handling {

	public static void main(String[] args) {
		int a = Integer.parseInt(args[0]);
		int b = Integer.parseInt(args[1]);
		try
		{
			int c=a/b;
			System.out.println(c);
		}
		catch(ArithmeticException e)
		{
			System.out.println(e);
		}
		System.out.println("Program Continued");
	}
}
/*
 * OUTPUT:
 * To run the above program right click -> Run As -> Run Configuration -> Arguments -> Input in Program arguments -> RUN
 * 100 2
 * Output : 
 * 			50
			Program Continued
 * 100 25
 * Output : 
 * 			4
			Program Continued
 *625 25
 * Output : 
 * 			25
			Program Continued
 */