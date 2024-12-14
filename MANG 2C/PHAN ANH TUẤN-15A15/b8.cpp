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
void demso(int a[][100],int m,int n)
{
	int dem=0;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if(a[i][j]>=10&&a[i][j]<100)
			dem++;
		}
	}
	cout<<dem;
}
void gan(int &x,int &y)
{
	int td=x;x=y;y=td;
}
void sx_dongdt_td(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	for(int c=0;c<m;c++)
	for(int d=0;d<n;d++){
	if(i==0&&c==0){
	    if(a[i][j]<a[c][d]){
	    	gan(a[i][j],a[c][d]);
			}
		}
    }
    for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
    cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<"\n";
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
	cout<<"so luong ptu trong [10;100] la:";
	demso(a,m,n);
	cout<<"\nsx gt dong 1 theo tttd la:\n";
	sx_dongdt_td(a,m,n);
}
