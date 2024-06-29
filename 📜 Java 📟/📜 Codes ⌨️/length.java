package siit;

public class length {

	public static void main(String[] args) {
		StringBuffer sb1=new StringBuffer();
		StringBuffer sb2=new StringBuffer(10);
		StringBuffer sb3=new StringBuffer("hello");
		
		System.out.println(sb1.length());
		System.out.println(sb2.length());
		System.out.println(sb3.length());
		System.out.println(sb1.capacity());
		System.out.println(sb2.capacity());
		System.out.println(sb3.capacity());

	}

}
