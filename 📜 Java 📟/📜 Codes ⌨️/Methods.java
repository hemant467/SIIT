package siit;

public class Methods {

	public static void main(String[] args) {
		String s1="good";
		String s2="good";
		String s3=new String("good");
		String s4="Good";
		StringBuffer sb=new StringBuffer("good");
		System.out.println(s1==s2);;
		System.out.println(s1==s3);
		System.out.println(s1.equals(s3));
		System.out.println(s1.equalsIgnoreCase(s4));
		System.out.println(s1.compareTo(s4));
		System.out.println(s1.compareTo(s3));
		System.out.println(s1.compareToIgnoreCase(s4));
		System.out.println(s1.matches(s3));
		System.out.println(s1.equals(sb));
		System.out.println(s1.contentEquals(sb));
		System.out.println(s1.regionMatches(1, s4, 1, 3));
		System.out.println(s1.regionMatches(0, s4, 0, 2));
		System.out.println(s1.regionMatches(true, 0, s4, 0, 0));

	}

}
