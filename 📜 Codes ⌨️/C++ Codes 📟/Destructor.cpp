/*Destructor: It distructs an object.It should have class name.
			  It should have telta sign '~' before it.
		The order of the destructor execution is reverse order of the constructor execution.
		We have only 1 destructor for an entire class i.e a destructor can't be overloaded.
 */
using namespace std;
#include <iostream>
class complex
{
	private:int a,b;
	public:complex()
	{
		a=1,b=2;
	}
	complex(int x,int y)
	{
		a=x;b=y;
	}
	void display()
	{
		cout<<a<<"+i"<<b<<"\n";
	}
	~complex()
	{
		cout<<"Destructor called \n";
	}
};
main()
{
	complex p,q(5,6);
	p.display();
	q.display();
}
