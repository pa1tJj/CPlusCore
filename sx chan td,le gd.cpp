#include<iostream>
#include<math.h>
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
bool kt_so_chinh_phuong(int n)
{
	int cp=sqrt(n);
	if(pow(cp,2)==n){
		return true;
	}else{
		return false;
	}
}
void so_chinh_phuong(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(kt_so_chinh_phuong(a[i])==true){
			cout<<a[i]<<"\t";
		}
    }
}
void gan(int &x,int &y)
{
	int g;
	g=x,x=y,y=g;
}
void sx_chan_tangdan(int a[],int n)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++){
		if(a[i]>a[j]){
			gan(a[i],a[j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0){
			cout<<"a["<<i<<"]="<<a[i]<<"\n";
		}
	}
	
}
void sx_le_giamdan(int a[],int n)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	{
		if(a[i]<a[j]){
			gan(a[i],a[j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		cout<<"a["<<i<<"]="<<a[i]<<"\n";
	}
	
}
int main()
{
	int a[100],n;
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap mang:";
	nhap(a,n);
	cout<<"xuat mang:";
	xuat(a,n);
	cout<<"so chinh phuong la:";
	so_chinh_phuong(a,n);
	cout<<"\nsap xep chan td:\n";
	sx_chan_tangdan(a,n);
	cout<<"sap xep le gd:\n";
	sx_le_giamdan(a,n);	
}
