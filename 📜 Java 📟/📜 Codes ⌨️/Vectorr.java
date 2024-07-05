package siit;

import java.util.Vector;

public class Vectorr {

	public static void main(String[] args) 
	{
		Vector<String>a=new Vector<String>();
		a.add("Hai");a.add("Hello");a.add("Chello");
		System.out.println(a);
		a.add(1,"Happy");
		a.remove(2);
		System.out.println(a);
	}
}
/*
 * Vector : It is a legacy class.

 * Using VectorList

 *	 Vector<String>a=new Vector<String>();
 
 * OUTPUT:
 * [Hai, Hello, Chello]
 * [Hai, Happy, Chello]
 */