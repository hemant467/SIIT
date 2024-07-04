package siit;

import java.util.Arrays;

public class Arrays_Sort_Java {

	public static void main(String[] args) 
	{
		int a[]= {10,5,9,4,8,3,7,2,6,1};
		Arrays.sort(a);
		for(int i:a)
			System.out.println(i);
		System.out.println(Arrays.binarySearch(a, 1));
	}

}
/* OUTPUT:
 * 1
 * 2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 * 10
 * 0
 */