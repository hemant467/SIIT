/*Streams: A stream is a collection of flow of bytes.
Input Stream : The stream which supplies data is called Input stream. We extract data from input stream.
Output Stream : The stream which is useful to produce output is called Output stream. We insert data in output stream.
iOS : It is a virtual based class. It provides all basic facilities for formated i/o operations.
iStream : It inherits the properties of iOS. It defines get() ; getLine() ; read(). It overload extraction operator.
oStream : It inherits the properties of iOS. It defines put() ; write(). It overload insertion operator.
ioStream : It inherits the properties of istream & ostream through multiple inheritance.
				ioStream -> Virtual -> Virtual Base Class
*/
using namespace std;
#include<iostream>
main()
{
	char a[20];
	int i;
	cout<<"Enter a string: ";
	cin.getline(a,20);
	for(i=1;i<=6;i++,cout<<"\n")
	cout.write(a,i);
}

/*
	for(i=1;i<=8;i++,cout<<"\n")
OUTPUT: 

Enter a string: SREEDHAR
S
SR
SRE
SREE
SREED
SREEDH
SREEDHA
SREEDHAR

for(i=1;i<=6;i++,cout<<"\n")
OUTPUT: 

Enter a string: Hemant
H
He
Hem
Hema
Heman
Hemant

Enter a string: HEMANT
H
HE
HEM
HEMA
HEMAN
HEMANT

*/
