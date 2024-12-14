#include<iostream>
using namespace std;
void nhap(int a[][100],int m)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<m;j++){
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];
	}
	cout<<"\n";
}
void xuat(int a[][100],int m)
{
	for(int i=0;i<m;i++){
	for(int j=0;j<m;j++){
		cout<<"\t"<<a[i][j];
	}
	cout<<"\n";
	}
	
}
void le(int a[][100],int m)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<m;j++){
		if(i==j&&a[i][j]%2!=0){
			cout<<"\t"<<a[i][j];
		}
	}
}
void tongphu(int a[][100],int m)
{
	int s=0;
	for(int i=0;i<m;i++){
	for(int j=0;j<m;j++){
		if(i+j==m-1){
			s=s+a[i][j];
		}
	}
	}
	cout<<s;
}
int main()
{
	int m,n,a[100][100];
	cout<<"nhap so hang va so cot cua mt vuong:";cin>>m;
	cout<<"nhap gt mang:";
	nhap(a,m);
	cout<<"xuat mang:\n";
	xuat(a,m);
	cout<<"phan tu le nam tren dcc la:";
	le(a,m);
	cout<<"\nS=";
	tongphu(a,m);
}
