#include<iostream>
using namespace std;
int max(int x, int y)
{
int max=1;
return (x>y)? x:y;
}
int main()
{
	int a,b,c,d;
	cout<<"nhap a,b:";cin>>a>>b>>c>>d;
	cout<<"so lon nhat la:"<<(max(a,b),max(a,b));
}
	

