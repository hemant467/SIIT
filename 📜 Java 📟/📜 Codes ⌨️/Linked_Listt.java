package siit;

import java.util.LinkedList;

public class Linked_Listt {

	public static void main(String[] args) 
	{
		LinkedList<String>l=new LinkedList<String>();
		l.add("Hai");l.add("Bye");l.add(1, "Chello");
		l.addFirst("Hemant");l.addLast("K");
		System.out.println(l);
	}
}
/*OUTPUT:
 * [Hemant, Hai, Chello, Bye, K]
 */