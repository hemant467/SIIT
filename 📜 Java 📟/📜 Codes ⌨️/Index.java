package siit;

public class Index {

	public static void main(String[] args) {
		String s1="good students";
		System.out.println(s1.indexOf('d'));
		System.out.println(s1.indexOf("stu"));
		System.out.println(s1.indexOf('d', 4));
		System.out.println(s1.lastIndexOf('d'));
		System.out.println(s1.length());
		System.out.println(s1.charAt(6));
		System.out.println(s1.startsWith("go"));
		System.out.println(s1.startsWith("st", 5));
		System.out.println(s1.endsWith("dents"));

	}

}
