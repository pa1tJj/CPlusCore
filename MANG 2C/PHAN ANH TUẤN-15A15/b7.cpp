#include<iostream>
#include<math.h>
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
bool kt(int n)
{
	int cp=sqrt(n);
	if(cp*cp==n){
		return true;
	}
	return false;
}
void chinhphuong(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++){
		if(kt(a[i][j])==true){
			cout<<a[i][j]<<"\t";
		}
	}
}
void vt_am(int a[][100],int m,int n)
{
	int demam=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++){
		if(a[i][j]<0){
			demam++;
			if(demam==1){
			cout<<"\n"<<a[i][j]<<" la ptu am dau tien nam o hang "<<i+1<<" cot "<<j+1;
		}
		}	
	}
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
	cout<<"so chinh phuong la:";
	chinhphuong(a,m,n);
	vt_am(a,m,n);
}
