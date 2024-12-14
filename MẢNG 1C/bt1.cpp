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
void gtnn(int a[],int n)
{
	int min,i,j,vt=0;
	min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			vt=i;
		}	
	}
	cout<<"phan tu co gtnn la:"<<"a["<<vt<<"]"<<"\n";
	cout<<"GTNN="<<min<<"\n";
	cout<<"nam o vt thu "<<vt<<"\n";
}
int main()
{
	int n,a[n];
	cout<<"nhap so ptu n=";cin>>n;
	cout<<"nhap gt:\n";
	nhap(a,n);
	cout<<"xuat gt mang:\n";
	xuat(a,n);
	gtnn(a,n);
}

