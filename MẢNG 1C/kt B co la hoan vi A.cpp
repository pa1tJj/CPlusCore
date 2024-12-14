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
		cout<<"a["<<i<<"]="<<a[i]<<"\n";
	}
}
void hoanvi(int a[],int b[],int n)
{
    int hv;
	for(int i=0;i<n;i++)
	for(int j=i-1;j>=0;j--){
		if(a[i]!=b[n-i-1]){
			hv=false;
		}else{
			hv=true;
		}	
	}
	if(hv==true){
		cout<<"B la hoan vi cua A";
	}else{
		cout<<"B k la hoan vi cua A";
	}
}
int main()
{
	int n,a[100],b[100];
	cout<<"nhap so ptu mang :";cin>>n;
	cout<<"nhap gt mang A:\n";
	nhap(a,n);
	cout<<"nhap gt mang B:\n";
	nhap(b,n);
	cout<<"xuat gt mang A\n";
	xuat(a,n);
	cout<<"xuat gt mang B\n";
	xuat(b,n);
	hoanvi(a,b,n);
}
