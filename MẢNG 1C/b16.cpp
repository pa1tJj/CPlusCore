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
	{
		cout<<a[i]<<"\n";
	}
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
}
void tron(int a[],int b[],int c[],int n,int m,int &l)
{
	for(int i=0;i<n;i++){
		c[l]=a[i];
		l++;
	}
	for(int i=0;i<m;i++){
		c[l]=b[i];
		l++;
	}
}
void sx_tangdan(int a[],int b[],int c[],int n,int m,int &l)
{
	tron(a,b,c,n,m,l);
	for(int i=0;i<l;i++)
	for(int j=i+1;j<l;j++){
		if(c[i]>c[j]){
			gan(c[i],c[j]);
		}
	}
}
int main()
{
	int n,m,a[n],b[n],l=0,c[n];
	cout<<"nhap so ptu mang 1:";cin>>n;
	cout<<"nhap ptu:\n";
	nhap(a,n);
	cout<<"xuat ptu mang 1 theo gt tang dan:\n";
	sx(a,n);
	xuat(a,n);
	
	cout<<"\nnhap so ptu mang 2:";cin>>m;
	cout<<"nhap ptu:\n";
	nhap(b,m);
	cout<<"xuat ptu mang 2 theo gt tang dan:\n";
	sx(b,m);
	xuat(b,m);
	cout<<"\nsau khi tron 2 mang la:\n";
	sx_tangdan(a,b,c,n,m,l);
	xuat(c,l);
}

