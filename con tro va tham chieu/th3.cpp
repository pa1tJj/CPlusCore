#include<iostream>
using namespace std;
main()
{
	int i,j,*p,*q;
	p=&i;
	q=&j;
	cout<<"dia chi bien nguyen i la:"<<&i;
	cout<<"\ndia chi bien nguyen j la:"<<q<<"\n";
	i=2;
	*q=3;
	(*p)++;
	cout<<"i="<<i<<"\n";
	(*q)++;
	cout<<"j="<<j<<"\n";
	
}
