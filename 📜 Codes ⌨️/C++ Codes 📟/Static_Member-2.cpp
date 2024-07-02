//Static Member 2
using namespace std;
#include<iostream>
class abc
{
	public:
		static void display()
		{
			cout<<"Hello display";
		}
};
main()
{
	abc::display();		//	::->Scope
}

/*
	OUTPUT: 
			Hello display
*/
