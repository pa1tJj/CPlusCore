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
void tongvatbc(int a[],int n)
{
	float s=0;
	float tbc;
	for(int i=0;i<n;i++){
	s=s+a[i];
    }
    tbc=s/n;
    cout<<"Tong S="<<s;
    cout<<"\nTBC="<<tbc;
}

int main()
{
	int n,a[n];
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap gt mang\n";
	nhap(a,n);
	cout<<"xuat gt mang\n";
	xuat(a,n);
	tongvatbc(a,n);
}
