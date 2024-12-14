#include<iostream>
using namespace std;
void nhap(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++){
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];
	}
	cout<<"\n";
}
void xuat(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<"\t"<<a[i][j];
	}
	cout<<"\n";
	}
}
void xoa(int a[][100],int m,int &n,int x)
{
	for(int i=0;i<m;i++)
	for(int j=x+1;j<n;j++){
		a[i][j-1]=a[i][j];
	}
	n--;
}
int main()
{
	int m,n,a[100][100];
	cout<<"nhap so hang:";cin>>m;
	cout<<"nhap so cot:";cin>>n;
	cout<<"nhap gt mang:\n";
	nhap(a,m,n);
	cout<<"xuat gt mang:\n";
	xuat(a,m,n);
	int x;
	cout<<"nhap cot x can xoa:";cin>>x;
	xoa(a,m,n,x);
	xuat(a,m,n);
}

