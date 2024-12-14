#include<iostream>
#include<fstream>
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
bool sohh(int &shh)
{
	int s=0;
	for(int i=1;i<=shh/2;i++){
		if(shh%i==0){
			s=s+i;
		}
	}
		if(s==shh){
			return true;
		}else{
			return false;
		}
}
void xuat_shh(int a[],int n)
{
	
	for(int i=1;i<=n;i++){
		if(sohh(a[i])){
			cout<<a[i]<<"\t";
		}
	}
}
void gan(int &x,int &y)
{
	int gd=x;x=y;y=gd;
}
void sx(int a[],int n)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++){
		if(a[i]<a[j]){
			gan(a[i],a[j]);
		}
	}
}
void ghi(fstream &ghitep,int a[],int n)
{
	f.open("vao.txt",ios::out)
	
}
void doc(fstream &doctep,int a[],int n)
{
	
}
int main()
{
	int n,a[100];
	cout<<"nhap so phan tu mang:";cin>>n;
	cout<<"nhap gia tri mang\n";
	nhap(a,n);
	cout<<"cac so hoan hao la:";
	xuat_sohh(a,n);
	cout<<"mang sau khi sx giam dan la\n";
	sx(a,n);
	xuat(a,n);
}
