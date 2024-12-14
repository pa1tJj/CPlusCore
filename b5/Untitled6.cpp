#include<iostream>
#include<math.h>
using namespace std;
int maxZ(int a,int b,int c)
{
	int max=1;
	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	return max;
}
int minZ(int a,int b,int c)
{
	int min=1;
	min=a;
	if(b<min){
		min=c;
	}
	if(c<min){
		min=c;
	}
	return min;
}
int main()
{
	int a,b,c,d;
	cout<<"nhap a,b,c:";cin>>a>>b>>c;
	cout<<"\nso lon nhat la:"<<maxZ(a,b,c);
	cout<<"\nso be nhat la:"<<minZ(a,b,c);
}

