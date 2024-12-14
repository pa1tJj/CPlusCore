#include<iostream>
using namespace std;
void soln(int &x,int &y,int &z)
{
	int max=0;
	max=x;
	if(y>max){
		max=y;
	}
	if(z>max){
		max=z;
	}
	cout<<max;
}
int main()
{
	int a,b,c;
	cout<<"nhap a,b,c:";cin>>a>>b>>c;
	cout<<"so lon nhat la:";
	soln(a,b,c);
}
