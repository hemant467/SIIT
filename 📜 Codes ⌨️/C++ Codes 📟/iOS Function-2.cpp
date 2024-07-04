//iOS Function-2
using namespace std;
#include<iostream>
#include<iomanip>
main()
{
	int a=45;
	//cout.setf(ios::hex,ios::basefield);
	cout.setf(ios::showpos);
	cout<<a;
	cout.setf(ios::showbase);
	cout.setf(ios::hex,ios::basefield);
	cout<<a;
}

/*
1.
	int a=45;
	cout.setf(ios::hex,ios::basefield);
	cout.setf(ios::showpos);
	cout<<a;
	cout.setf(ios::showbase);
	cout.setf(ios::hex,ios::basefield);
	cout<<a;
	
OUTPUT: 
		2d0x2d
		

2.
	int a=45;
	//cout.setf(ios::hex,ios::basefield);
	cout.setf(ios::showpos);
	cout<<a;
	cout.setf(ios::showbase);
	cout.setf(ios::hex,ios::basefield);
	cout<<a;
	
OUTPUT:
		+450x2d
*/
