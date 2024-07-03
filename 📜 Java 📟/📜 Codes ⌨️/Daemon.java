package siit;

public class Daemon {

	public static void main(String[] args) {
		ThreadGroup tg=new ThreadGroup("Satvik");
		Thread t=new Thread(tg,"Hello");
		System.out.println(t.getName());
		t.setName("HEMANT");
		System.out.println(t.getName());
		System.out.println(t.getPriority());
		t.setPriority(Thread.MAX_PRIORITY);
		System.out.println(t.getPriority());
		System.out.println(t.isAlive());
		t.start();
		System.out.println(t.isAlive());
		System.out.println(t.isDaemon());
		t.setDaemon(true);
		System.out.println(t.isDaemon());
		System.out.println(t.getThreadGroup());
	}

}
/*	OUTPUT:
 * Hello
 * HEMANT
 * 5
 * 10
 * false
 * true
 * false
 * true
 * null
*/