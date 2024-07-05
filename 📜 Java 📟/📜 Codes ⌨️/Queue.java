package siit;

import java.util.PriorityQueue;

public class Queue {

	public static void main(String[] args) 
	{
		PriorityQueue<String> p=new PriorityQueue<String>();
		p.add("10");p.add("20");p.add("5");
		System.out.println(p);
		System.out.println(p.poll());
		System.out.println(p.poll());
	}
}
/*OUTPUT:
 * [10, 20, 5]
 * 10
 * 20
*/