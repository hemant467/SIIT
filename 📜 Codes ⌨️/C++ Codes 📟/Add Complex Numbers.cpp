/*Program to add Complex Numbers using C++*/
#include <iostream>
using namespace std;
class complex
{
	private:int a,b;
	public:void get()
	{
		cout<<"Enter a,b: ";
		cin>>a>>b;
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
	p.get();
	q.get();
	r.add(p,q);
	r.put();
}

/*Output:
Enter a,b:2 3
Enter a,b:5 6

7+i9
*/
