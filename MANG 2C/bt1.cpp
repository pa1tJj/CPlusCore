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
void chisole(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if((i+1)%2!=0){
		cout<<"\t"<<a[i][j];
	    }
	}
	cout<<"\n";
    }
}
void chuyenvi(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<"\t"<<a[j][i];
	}
	cout<<"\n";
    }
}
int main()
{
	int m,n,a[100][100];
	cout<<"nhap so hang:";cin>>m;
	cout<<"nhap so cot:";cin>>n;
	cout<<"nhap gt mang:";
	nhap(a,m,n);
	cout<<"xuat mang:\n";
	xuat(a,m,n);
	cout<<"xuat gt ptu tren dong chi so le:\n";
	chisole(a,m,n);
	cout<<"ma tran chuyen vi:\n";
	chuyenvi(a,m,n);
}
