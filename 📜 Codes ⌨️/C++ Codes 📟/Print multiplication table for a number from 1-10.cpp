//Print multiplication table for a number from 1-10 using C++
using namespace std;
#include<iostream>
main()
{
	int i,n;
	cout<<"enter n: ";
	cin>>n;
	i=1;
	while(i<=10)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;
	}
}
