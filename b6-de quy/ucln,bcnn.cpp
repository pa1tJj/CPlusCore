#include<iostream>
#include<math.h>
using namespace std;
int ucln(int a,int b)
{
	if(a>b){
		ucln(a-b,b);
	}
}
int bcnn(int a,int b)
{
	if(b<a){
		bcnn(a,b-a);
	}

}
int main()
{
	int a,b;
	cout<<"nhap a,b:";cin>>a>>b;
	cout<<"UCLN="<<ucln(a,b);
	cout<<"\nBCNN="<<bcnn(a,b);
}
