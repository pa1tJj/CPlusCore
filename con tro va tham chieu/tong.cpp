#include<iostream>
using namespace std;
main()
{
	int *i,*j,s=0,a=2,b=4;
	i=&a;
	j=&b;
	s=(*i)+(*j);
	cout<<"a+b="<<s;
}
