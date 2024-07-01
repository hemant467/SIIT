//Constructors role in Inheritence
using namespace std;
#include<iostream>
class abc
{
	public:abc()
	{
		cout<<"abc Constructor called";
	}
	abc(int x)
	{
		cout<<"abc int Constructor called\n";
	}
};
class xyz:public abc
{
	public:xyz(int x,int y):abc(x)
	{
		cout<<"xyz Constructor called\n";
	}
};
main()
{
	xyz p(1,2);
}
/*
OUTPUT:
abc int Constructor called
xyz Constructor called
*/
