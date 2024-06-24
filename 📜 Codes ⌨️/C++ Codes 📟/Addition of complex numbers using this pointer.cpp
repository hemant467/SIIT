/*Program to add Complex Numbers using this POINTER in C++*/
#include <iostream>
using namespace std;
class complex
{
	private:int a,b;
	public:void get(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	void add(complex p, complex q)
	{
		a=p.a+q.a;
		b=p.b+q.b;
	}
	void put()
	{
		cout<<a<<"+i"<<b;
	}
};
main()
{
	complex p,q,r;
	p.get(5,6);
	q.get(3,2);
	r.add(p,q);
	r.put();
}
/*Output:
8+i8
*/
