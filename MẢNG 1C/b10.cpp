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
	int td;
	td=x;x=y;y=td;
}
void sxtangdan(int a[],int n)
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
void chen(int a[],int &n,int x,int vt)
{
	for(int i=x-1;i>=vt;i--){
		a[i+1]=a[i];
	}
	a[vt]=x;
	n++;
}
int main()
{
	int n,a[n],x,vt;
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap ptu:\n";
	nhap(a,n);
	cout<<"xuat ptu:\n";
	xuat(a,n);
	cout<<"sx tang dan la:\n";
	sxtangdan(a,n);
	cout<<"nhap gt x=";cin>>x;
	chen(a,n,x,vt);
	sxtangdan(a,n);
}
