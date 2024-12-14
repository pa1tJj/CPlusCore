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
void tongle(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	if(a[i]%2!=0){
		s=s+a[i];
	}
	cout<<"tong le S="<<s;
}
int main()
{
	int n,a[n];
	cout<<"nhap so ptu n=";cin>>n;
	cout<<"nhap gt:\n";
	nhap(a,n);
	cout<<"xuat gt:\n";
	xuat(a,n);
	tongle(a,n);
}
