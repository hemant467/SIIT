/* Template [OR] Generics
Function Template
*/
using namespace std;
#include<iostream>

template<typename t>
void swap(t *a,t *b)
{
	t c;
	c=*a ; *a=*b ; *b=c;
}
main()
{
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	float x,y;
	printf("Enter x: ");
	scanf("%f",&x);
	printf("Enter y: ");
	scanf("%f",&y);
	char m='x',n='y';
	
	swap(&a,&b);
	swap(&x,&y);
	swap(&m,&n);
	cout<<"a= "<<a<<" b= "<<b<<"\n";
	cout<<"a= "<<x<<" b= "<<y<<"\n";
	cout<<"a= "<<m<<" b= "<<n<<"\n";
}
/*
OUTPUT:
Enter a: 5
Enter b: 10
Enter x: 2.5
Enter y: 5.2
a= 10 b= 5
a= 5.2 b= 2.5
a= y b= x
*/
