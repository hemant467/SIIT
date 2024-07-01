/* Template [OR] Generics
Class Template
*/
using namespace std;
#include<iostream>

template<typename t>
class abc
{
	t a,b;
	public:void get()
	{
		cout<<"Enter a,b: ";
		cin>>a>>b;
	}
	void put()
	{
		cout<<a<<" "<<b;
		cout<<endl;
	}
};
main()
{
	abc<int> p;
	abc<float> q;
	p.get();p.put();q.get();q.put();
}
/*
OUTPUT:
Enter a,b: 5
10
5 10
Enter a,b: 2.5
3.5
2.5 3.5
*/
