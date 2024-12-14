#include<iostream>
using namespace std;
main()
{
	float a,b,c,*i,*j,*t;
	i=&a;
	j=&b;
	t=&c;
	cout<<"nhap he so:";cin>>a>>b>>c;
	cout<<"pt la:"<<a<<"x"<<"+"<<b<<"="<<c<<"\n";
	if(*i==0){
		cout<<"pt vo nghiem";
	}else{
		if(*j==0){
			cout<<"pt co nghiem x="<<*t/ *i;
		}else{
			cout<<"pt co nghiem x="<<(*t-*j)/ *i;
		}
	}
}
