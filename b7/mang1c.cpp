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
void chen(int a[],int n,int x)
{
	int p=n;
	while(p>0 && a[p-1]>x){
		a[p]=a[p-1];
		p--;
	}
	a[p]=x;
	
}
int main()
{
	int n,a[n],x;
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap ptu:\n";
	nhap(a,n);
	cout<<"xuat ptu:\n";
	xuat(a,n);
	cout<<"sau khi sx la:";
	sx(a,n);
	cout<<"x=";cin>>x;
	chen(a,n,x);
	sx(a,n+1);
}
