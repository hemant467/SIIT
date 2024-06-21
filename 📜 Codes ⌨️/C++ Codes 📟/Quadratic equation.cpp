//To find Quadratic equation
using namespace std;
#include<iostream>
main()
{
	int x,a,b,c;
	cout<<"enter a,b,c: ";
	cin>>b>>a>>c;
	x=b*b-4*a*c;
	cout<<x;
	if(x==0)
	cout<<" Real & Equal";
	else if(x>0)
	cout<<" Real & not equal";
	else
	cout<<" Imaginary";
}
