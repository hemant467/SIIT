package siit;

import java.util.Date;

public class Date_Month_Year_Time {

	public static void main(String[] args) 
	{
		Date d=new Date();
		System.out.println(d);
		System.out.println(d.getDate());
		System.out.println(d.getMonth()+1);
		System.out.println(d.getYear()+1900);
		System.out.println(d.getTime());
	}

}

/*	04-07-2024
 * OUTPUT:
 * Thu Jul 04 16:40:57 IST 2024
 * 4
 * 7
 * 2024
 * 1720091457318
 */