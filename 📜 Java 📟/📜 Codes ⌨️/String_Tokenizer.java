package siit;

import java.util.StringTokenizer;

public class String_Tokenizer {

	public static void main(String[] args) 
	{
		String s=" hello: hai: good: bad";
		StringTokenizer st =new StringTokenizer(s,":");
		while(st.hasMoreTokens())
			System.out.println(st.nextToken());
	}

}
/*OUTPUT:
 *  hello
 *  hai
 *  good
 *  bad
 */