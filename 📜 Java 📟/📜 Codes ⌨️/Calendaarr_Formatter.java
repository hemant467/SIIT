package siit;

import java.util.Formatter;

public class Calendaarr_Formatter {

	public static void main(String[] args) 
	{
		int a=65;
		Formatter f=new Formatter(System.out);
		
		f.format("%d", a);
		f.format("%5d", a);
		f.format("%+5d", a);
		
		float b=2.34567f;
		f.format("%f", b);
		f.format("%.2f", b);
		
		String s="Hemant";
		f.format("%s", s);
		f.format("%12.4s", s);
		
	}
}

/* OUTPUT:
 	65   65  +652.3456702.35Hemant        Hema
 */