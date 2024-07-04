package siit;

public class Demoo {

	public static void main(String[] args) {
		Threead p=new Threead();
		Thread q=new Thread(p);
		Thread r=new Thread(p);
		q.setName("Hemant");
		r.setName("K");
		q.start();r.start();

	}

}
/*The above code is the combination of Threead.java*/

/*OUTPUT:
 * Hemant
 * Hemant
 * Hemant
 * Hemant
 * Hemant
 * Hemant
 * Hemant
 * Hemant
 * Hemant
 * Hemant
 * K
 * K
 * K
 * K
 * K
 * K
 * K
 * K
 * K
 * K
 */