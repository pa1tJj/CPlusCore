#include<iostream>
#include<math.h>
using namespace std;
void n_dau_can(int n,int k)
{
	float s=sqrt(k);
	for(int i=1;i<n;i++){
		s=sqrt(s+k);
	}
	cout<<s;
}
int main()
{
	int n,k;
	cout<<"nhap n:";cin>>n;
	cout<<"nhap k=";cin>>k;
	cout<<"tong n dau can cua k la:";
	n_dau_can(n,k);
}
