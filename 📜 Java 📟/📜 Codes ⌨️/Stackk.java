package siit;

import java.util.Stack;

public class Stackk {

	public static void main(String[] args) 
	{
		Stack<String>a=new Stack<String>();
		a.push("Hello");a.push("Hai");a.push("Bye");
		System.out.println(a);
		System.out.println(a.peek());
		System.out.println(a.pop());
		System.out.println(a.isEmpty());
	}
}
/*
 *Stack: LIFO order. It is a sub-class of vector(). It operates on the principle of LIFO. 

 *Peek() : Last element 
 *Pop()  : LIFO - Last In First Out
 
 OUTPUT: 
 *[Hello, Hai, Bye]
 *Bye
 *Bye
 *false
 */