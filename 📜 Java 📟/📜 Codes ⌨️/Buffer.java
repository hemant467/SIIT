package siit;

public class Buffer {

	public static void main(String[] args) {
		StringBuffer sb1=new StringBuffer("hello");
		sb1.append("students");
		sb1.append(25);
		sb1.append(2.5);
		System.out.println(sb1);
		sb1.insert(5, "boys");
		System.out.println(sb1);
		sb1.delete(5, 9);
		System.out.println(sb1);
		sb1.replace(5, 13, "boys");
		System.out.println(sb1);
		System.out.println(sb1.reverse());
		sb1.ensureCapacity(50);
		System.out.println(sb1.capacity());
	}
}
