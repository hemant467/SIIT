//iOS Function
using namespace std;
#include<iostream>
#include<iomanip>
main()
{
	int a=5;
	cout<<a<<endl;
	cout.fill('*');
	cout.width(5);
	cout<<a<<endl;
	cout<<a<<endl;
	
	float b=5.2678;
	cout<<b<<endl;
	cout.precision(2);
	cout<<b<<endl;
}

/*

OUTPUT: 
		5
		****5
		5
		5.2678
		5.3
*/
