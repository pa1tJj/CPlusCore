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
void dao(int a[],int n)
{
	for(int i=n-1;i>=0;i--)
	cout<<"a["<<i<<"]="<<a[i]<<"\n";
}
int main()
{
	int n,a[n];
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap mang:\n";
	nhap(a,n);
	cout<<"xuat mang:\n";
	xuat(a,n);
	cout<<"sau khi dao nguoc thu tu la:\n";
	dao(a,n);
}
