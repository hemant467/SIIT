//Static Member
using namespace std;
#include<iostream>
class abc
{
	private:int a,b;
	public:static int c;
	public:void get()
	{
		cout<<"Enter a,b : ";
		cin>>a>>b;
	}
	void put()
	{
		cout<<a<<b;
	}
};
int abc::c=7;	//	::->Scope
main()
{
	cout<<abc::c;
	abc p,q,r;
	cout<<p.c<<q.c<<r.c<<abc::c;
}
/*
int abc::c=7;
	OUTPUT:
			77777
int abc::c=8;
	OUTPUT:
			88888
int abc::c=9;
	OUTPUT:
			99999
*/
