package siit;

import java.util.ArrayList;

public class List {

	public static void main(String[] args) 
	{
		ArrayList<String>a=new ArrayList<String>();
		a.add("Hai");a.add("Hello");a.add("Chello");
		System.out.println(a);
		a.add(1, "Bye");
		a.remove(2);
		System.out.println(a);
	}
}
/*
 * List: It is a Linear Data-Structure elements that are stored in preserved order.
 *			Duplicates are allowed. 

 * Using ArrayList
  
 *	 ArrayList<String>a=new ArrayList<String>();
 
 * OUTPUT:
 * [Hai, Hello, Chello]
 * [Hai, Bye, Chello]
 */