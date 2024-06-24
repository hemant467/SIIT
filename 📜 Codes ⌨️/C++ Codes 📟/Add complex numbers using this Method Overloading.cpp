/*Program to add Complex Numbers using this Method Overloading() in C++*/
using namespace std;
#include <iostream>
class complex
{
	private:int a,b,c;
			float x,y,z;
	public:void get(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	void get(float x,float y)
	{
		this->x=x;
		this->y=y;
	}
	void add()
	{
		c=a+b;
		z=x+y;
	}
	void display()
	{
		cout<<c<<"\n"<<z;
	}
};
main()
{
	complex p;
	p.get(5,6);
	p.get(3.2f,2.3f);
	p.add();
	p.display();
}
/*Output:
Enter a,b:1 2
Enter a,b:3 4

4+i6
*/
