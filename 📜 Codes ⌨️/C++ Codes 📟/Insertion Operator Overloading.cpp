//Insertion Operator Overloading
using namespace std;
#include<iostream>
class abc
{
	public:int x;
	abc(int x)
	{
		this->x=x;
	}
	friend ostream& operator<<(ostream&,int&);
};
ostream& operator << (ostream& out,abc& p)
{
	out<<p.x; 
	out<<endl;
	out<<"Overloaded function called";
	out<<endl;
	return out;
}
main()
{
	abc p(5);
	cout<<p<<p<<p;
}

/*

main()
{
	abc p(5);
	cout<<p<<p<<p;
}
Output:
		5
		Overloaded function called
		5
		Overloaded function called
		5
		Overloaded function called

main()
{
	abc p(5);
	cout<<p<<p<<p<<p<<p;
}
Output:
		5
		Overloaded function called
		5
		Overloaded function called
		5
		Overloaded function called
		5
		Overloaded function called
		5
		Overloaded function called



main()
{
	abc p(10);
	cout<<p<<p<<p<<p<<p;
}
Output:
		10
		Overloaded function called
		10
		Overloaded function called
		10
		Overloaded function called
		10
		Overloaded function called
		10
		Overloaded function called
*/
