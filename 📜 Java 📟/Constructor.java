public class Demo
{
   int a,b,c;
   public void setA(int a)
   {
      this.a=a;
   }
   public void setB(int b)
   {
      this.b=b;
   }
   void add()
   {
      c=a+b;
      System.out.println(c);
   }
   public static void main(String[] args)
   {
      Demo p=new Demo();
      Demo q=new Demo();
      Demo r=new Demo();
      Demo s=new Demo();
      p.SetA(5);p.SetB(6);
      q.SetA(10);q.SetB(20);
      r.SetA(100);r.SetB(200);
      s.SetA(1000);s.SetA(2000);
      p.add();q.add();r.add();s.add();
   }
}

Output :
11
30
300
3000

---------------------------------------------------------------------------------

this : It is a keyword of JAVA which always refers current object.

	this.a=a;

---------------------------------------------------------------------------------

CONSTRUCTOR : 
	1. It constructs an object & initializes values.
	2. It should have class name. It should not have return type at least void.
	3. If we do not write any constructor JVM substitutes a default constructor.
	4. Once we write any constructor JVM can't substitutes a default constructor.
	5. We may have any number of constructors within a class i.e. a constructor can be overloaded.

---------------------------------------------------------------------------------

Types of Constructor :
1. Default Constructor :
	public classname()
	{
	}

2. Parameterised Constructor :
	public classname()
	{
	   body
	}


Example :

package xyz;
public class Demo
{
   int a,b,c;
   public Demo()
   {
   	System.out.println("Con Called");	//Con: Constructor
   }
   public Demo(int a,int b)
   {
        this.a=a;
        this.b=b;
   }
   void add()
   {
        c=a+b;
        System.out.println(c);
   }
   public static void main(String[] args)
   {
        Demo p=new Demo(1,2);
        Demo q=new Demo(5,6);
        Demo r=new Demo(10,20);
        Demo s=new Demo(100,200);
        Demo t=new Demo();
        p.add();q.add();r.add();s.add();t.add();
   }
}

Output :
3
11
30
300
0

---------------------------------------------------------------------------------

this(): It is used to call present class constructor.
It must be 1st statement within a constructor.

Example :

package xyz;
public class Demo
{
   int a,b,c;
   public Demo()
   {
   	System.out.println("Def Con Called");	//Con: Constructor
   }
   public Demo(int a,int b)
   {
        this();
        this.a=a;
        this.b=b;
        System.out.println("2 argument con called");	//Con: Constructor
   }
   public Demo(int a,int b,int c)
   {
        this(1,2);
        this.a=a;
        this.b=b;
        System.out.println("3 argument con called");	//Con: Constructor
   }
   public static void main(String[] args)
   {
        Demo p=new Demo(1,2,3);
   }
}

Output:
Def Con Called
2 argument con called
3 argument con called