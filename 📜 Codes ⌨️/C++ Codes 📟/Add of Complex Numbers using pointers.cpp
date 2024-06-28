//Add of Complex Numbers
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
	void add(Complex *p,Complex *q)
	{
		a=p->a+q->a;
		b=p->b+q->b;
	}
	void display()
	{
		cout<<a<<"+i"<<b;
	}
};
main()
{
	Complex *p,*q,*r;
	p=new Complex();
	q=new Complex();
	r=new Complex();
	p->get();
	q->get();
	r->add(p,q);
	r->display();
}
