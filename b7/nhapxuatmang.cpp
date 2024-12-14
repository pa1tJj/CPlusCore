#include<iostream>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++){
	cout<<"a["<<i<<"]=";
	cin>>a[i];
    }
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<"a["<<i<<"]="<<a[i]<<"\n";
}
int main()
{
	int n,a[n];
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap ptu:\n";
	nhap(a,n);
	cout<<"xuat ptu:\n";
	xuat(a,n);
}
