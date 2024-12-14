#include<iostream>
using namespace std;
int ucln(int a,int b)
{
	if(a>b){
		ucln(a-b,b);
	}
}
int rutgon(int a,int b)
{
	int i=ucln(a,b);
	a/=i;
	b/=i;
	if(a>0&&b<0||a<0&&b>0){
		a=-a;b=-b;
	}
	cout<<a<<"/"<<b;
	return 
}
int main()
{
	int a,b;
	cout<<"a/b=";cin>>a>>b;
	if(rutgon(a,b)==1){
		cout<<"rut gon "<<a<<"/"<<b<<"="<<rutgon(a,b);
	}
		
}
