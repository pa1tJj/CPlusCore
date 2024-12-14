#include<iostream>
#include<string.h>
using namespace std;
void x(char a[],int vt)
{
	int i=0,n;
	n=strlen(a);
	for(i=vt+1;i<n;i++){
		a[i-1]=a[i];
	}
	a[n-1]='\0';
}
void xoa_dau_cau(char a[])
{
	while(a[0]==' '){
		x(a,0);
	}
}
void xoa_cuoi_cau(char a[])
{
	int n=strlen(a);
	while(a[n-1]==' '){
		x(a,n-1);
	}
}
void xoa_giua(char a[])
{
	int n=strlen(a);
	for(int j=0;j<=n-1;j++){
		if(a[j]==' '&&a[j+1]==' '){
			x(a,j);
			j--;
		}
	}
}
int main()
{
	char a[50];
	int n,i;
	cout<<"nhap xau:";
	cin.getline(a,50);
	xoa_dau_cau(a);
	xoa_cuoi_cau(a);
	xoa_giua(a);
	cout<<"xau sau khi chuan hoa la:"<<a;
	
}
