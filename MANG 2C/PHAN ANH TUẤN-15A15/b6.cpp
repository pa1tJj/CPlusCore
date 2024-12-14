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
void tb_phantule(int a[][100],int m,int n)
{
	float s=0,demle=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++){
		if(a[i][j]%2!=0){
		s=s+a[i][j];	
		demle++;
		}
	}
	cout<<s/demle;
}
bool so_ngto(int n)
{
	if(n<2){
		return false;
	}else{
		if(n==2){
			return true;
		}else{
			if(n%2==0){
				return false;
			}else{
				for(int i=2;i<n;i++)
				{
					if(n%i==0){
						return false;
					}
				}
			}
		}
    }	
	return true;
}
void demso_ngto(int a[][100],int m,int n)
{
	int dem=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++){
		if(so_ngto(a[i][j])==true){
			dem++;
		}
	}
	cout<<dem;
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
	cout<<"gia tri tb cua ptu le=";
	tb_phantule(a,m,n);
	cout<<"\nso luong so ngto la:";
	demso_ngto(a,m,n);
	
}
