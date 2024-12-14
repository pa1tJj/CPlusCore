#include<iostream>
using namespace std;
main()
{
	int a,b,*i,*j,hv;
	i=&a;
	j=&b;
	cout<<"nhap a,b:";cin>>a>>b;
	cout<<"ban dau la:"<<a<<"\t"<<b;
	hv=*i;
	*i=*j;
	*j=hv;
	cout<<"\nhoan vi la:"<<a<<"\t"<<b;
}
