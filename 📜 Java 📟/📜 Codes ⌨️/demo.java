
public class demo implements Cloneable
{
	int a;
	public static void main(String ar[]) throws CloneNotSupportedException
	{
		Demo p=new Demo();
		p.a=5;
		Demo q=(Demo)p.Clone;
		System.out.println(p.hashCode());
		System.out.println(p.toString());
		System.out.println(p.a);
		System.out.println(q.a);
		q.a=10;
		System.out.println(p.a);
		System.out.println(q.a);
	}

}
