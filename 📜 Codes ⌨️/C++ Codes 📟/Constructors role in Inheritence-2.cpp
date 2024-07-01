//Constructors role in Inheritence-2
using namespace std;
#include<iostream>
class abc
{
	public:abc()
	{
		cout<<"abc Constructor called\n";
	}
};
class xyz
{
	public:xyz()
	{
		cout<<"xyz Constructor called\n";
	}
};
class mno
{
	public:mno()
	{
		cout<<"mno Constructor called\n";
	}
};
main()
{
	mno p;
}
/*
OUTPUT:
mno Constructor called
*/
