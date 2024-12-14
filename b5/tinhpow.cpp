#include<iostream>
#include<math.h>
using namespace std;
int p(int x,int y)
{
	return pow(x,y);
}
int main()
{
	int a,n;
	cout<<"nhap a,n:";cin>>a>>n;
	cout<<a<<"^"<<n<<"="<<p(a,n);
}
