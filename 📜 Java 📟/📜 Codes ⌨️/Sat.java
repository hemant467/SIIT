package siit;

public class Sat {

	public static void main(String[] args) {
		String s1="good";
		String s2="     hello     ";
		System.out.println(s1.toUpperCase());
		System.out.println(s1.concat("boy: "));
		System.out.println(s1.substring(2));
		System.out.println(s1.substring(1, 4));
		System.out.println(s1.codePointAt(3));
		System.out.println(s1.codePointBefore(4));
		System.out.println(s1.codePointCount(0, 3));
		System.out.println(s2.trim());
	}

}
