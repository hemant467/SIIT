//Run Time Binding
using namespace std;
#include<iostream>
class abc
{
	public: virtual void rose()
	{
		cout<<"abc rose";
	}
};
class xyz:public abc
{
	public: void rose()
	{
		cout<<"xyz rose";
		cout<<endl;
	}
};
main()
{
	abc *p,r;
	xyz q;
	p=&q;
	p->rose();
	p=&r;
	p->rose();
}
/*
Output :
		 xyz rose
		 abc rose
*/
