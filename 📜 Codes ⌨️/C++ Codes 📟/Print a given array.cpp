//To print a given array[] in C++
using namespace std;
#include<iostream>
main()
{
	int a[20],i,n;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter array of elements: ";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
