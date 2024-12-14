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
void vt_chan_cuoi(int a[][100],int m,int n)
{
	int i,j;
	for(i=m-1;i>=0;i--){
	for(j=n-1;j>=0;j--)
		if(a[i][j]%2==0)
			break;
			
			break;
		}
		cout<<a[i][j]<<" la gt chan cuoi cung nam o hang "<<i+1<<" cot "<<j+1;
}
int main()
{
	int n,m,a[100][100];
	cout<<"nhap so hang va so cot:";cin>>m>>n;
	cout<<"nhap gt mang:\n";
	nhap(a,m,n);
	cout<<"xuat gt mang:\n";
	xuat(a,m,n);
	vt_chan_cuoi(a,m,n);
}
