package siit;

public class Palindrome_of_a_string {

	public static void main(String ar[]) {
		StringBuffer sb=new StringBuffer(ar[0]);
		sb.reverse();
		if(ar[0].contentEquals(sb)) {
			System.out.println("PALINDROME");
		}
			else {
		System.out.println("NOT A PALINDROME");
			}

	}
}
/*
 *OUTPUT:
 *To run the program right click -> Run As -> Run Configuration -> Arguments -> Input in Program arguments -> RUN
 *Palindrome = MOM ; DAD ; SIS ; ROTOR ; 121 ; 1221 ; etc...
 * */