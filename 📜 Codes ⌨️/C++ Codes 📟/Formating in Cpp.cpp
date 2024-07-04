//Formating in C++ [OR] Manipulators in iOS functions
using namespace std;
#include<iostream>
#include<iomanip>
main()
{
	int a=5;
	cout<<a<<endl;
	cout<<setfill('*');
	cout<<setw(5);
	cout<<a<<endl;
	cout<<a<<endl;
	float b=2.5288475;
	cout<<b<<endl;
	cout<<setprecision(2);
	cout<<b<<endl;
}
/*
OUTPUT: 
		5
		****5
		5
		2.52885
		2.5
*/
