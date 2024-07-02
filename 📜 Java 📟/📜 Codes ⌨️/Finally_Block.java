package siit;

public class Finally_Block {

	public static void main(String[] args) 
	{
		try
		{
			int a=Integer.parseInt(args[0]);
			int b=Integer.parseInt(args[1]);
			int c=a/b;
			System.out.println(c);
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
		finally
		{
			System.out.println("Finally blocked");
		}
		System.out.println("Program Continued");
	}

}
/*OUTPUT:
 * Finally blocked
 * Program Continued
*/
