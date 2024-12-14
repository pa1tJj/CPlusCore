#include<iostream>
using namespace std;
int ucln(int a,int b)
{
	if(a>b){
		ucln(a-b,b);
	}
}
int main()
{
	int a,b,c,d;
	cout<<"nhap a,b:";cin>>a>>b>>c>>d;
	cout<<"UCLN="<<ucln(ucln(a,b),ucln(c,d));
}
