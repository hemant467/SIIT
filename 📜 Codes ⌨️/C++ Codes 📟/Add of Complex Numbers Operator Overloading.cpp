//Add of Complex Numbers Operator Overloading
using namespace std;
#include<iostream>
class Complex
{
	private: int a,b;
	public: void get()
	{
		cout<<"Enter a, b: ";
		cin>>a>>b;
	}
	Complex operator+(Complex q)
	{
		Complex r;
		r.a=a+q.a;
		r.b=b+q.b;
		return r;
	}
	void display()
	{
		cout<<a<<"+i"<<b;
	}
};
main()
{
	Complex p,q,r;
	p.get();
	q.get();
	r=p+q;
	r.display();
	int a=5+2;
	cout<<endl;
	cout<<a;
}
