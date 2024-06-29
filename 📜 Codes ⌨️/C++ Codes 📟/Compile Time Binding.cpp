//Compile Time Binding
using namespace std;
#include<iostream>
class abc
{
	public: void rose()
	{
		cout<<"abc rose";
		cout<<endl;
	}
};
class xyz:public abc
{
	public: void rose()
	{
		cout<<"xyz rose";
	}
};
main()
{
	abc *p,r;
	xyz q;
	p->rose();
	p=&r;
	p->rose();
}
/*
Output :
		 abc rose
		 abc rose
*/
