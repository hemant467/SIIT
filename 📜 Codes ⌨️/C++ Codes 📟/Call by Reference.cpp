//Call by Reference
using namespace std;
#include<iostream>
void swap(int &a,int &b)
{
	int c;
	c=a;a=b;b=c;
}
main()
{
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	swap(a,b);
	cout<<"a= "<<a<<" ; b= "<<b<<"\n";
}
/*
OUTPUT:
Enter a: 5
Enter b: 10
a= 10 ; b= 5
*/
