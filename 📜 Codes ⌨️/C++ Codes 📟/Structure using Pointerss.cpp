//Structure using Pointers in C++
#include <iostream>
using namespace std;
main()
{
	struct book
	{
		int a;
	};
	struct book p={5},*q;
	q=&p;
	cout << p.a << endl;  // Accessing struct member through variable
    cout << q->a << endl;  // Accessing struct member through pointer
}

/* Output:
			5
			5
*/
