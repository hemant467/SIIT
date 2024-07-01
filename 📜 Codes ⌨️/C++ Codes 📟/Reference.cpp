//Reference
using namespace std;
#include<iostream>
main()
{
	int a=5,&b=a;	//a reference b [OR] a lias b
	b=10;
	cout<<a;
}
/*
OUTPUT:
10
*/
