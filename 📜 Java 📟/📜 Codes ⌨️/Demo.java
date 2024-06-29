package siit;

public class Demo implements Cloneable {

	int a;
	public static void main(String[] args) throws CloneNotSupportedException
	{
		Demo p=new Demo();
		p.a=5;
		Demo q=(Demo)p.clone();
		System.out.println(p.hashCode());
		System.out.println(p.toString());
		System.out.println(p.a);
		System.out.println(q.a);
		q.a=10;
		System.out.println(p.a);
		System.out.println(q.a);
	}

}
