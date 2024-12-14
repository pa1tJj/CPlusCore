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
void gan(int &x,int &y)
{
	int td=x;x=y;y=td;
}
void sx(int a[],int n)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++){
		if(a[i]>a[j]){
			gan(a[i],a[j]);
		}
	}
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
	cout<<"sau khi sx la:\n";
	sx(a,n);
}
