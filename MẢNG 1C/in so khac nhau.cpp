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
void tim_so_khac(int a[],int b[],int n,int &m)
{
	b[m]=a[0];
	m++;
	for(int i=1;i<n;i++){
		bool kt=true;
		for(int j=i-1;j>=0;j--){
			if(a[i]==a[j]){
			kt=false;
			break;
		    }
		}
		if(kt==true){
		b[m]=a[i];
		m++;
	    }
	}		
}
void demsl(int a[],int b[],int n,int &m)
{
	tim_so_khac(a,b,n,m);
	for(int i=0;i<m;i++){
		int dem=0;
		for(int j=0;j<n;j++){
			if(b[i]==a[j]){
				dem++;
			}
			cout<<"so lan xuat hien cua "<<b[i]<<" la:"<<dem<<"\n";
			break;
		}
	}
}
int main()
{
	int n,a[100],b[100],m=0;
	cout<<"nhap so ptu mang:";cin>>n;
	cout<<"nhap gt mang:\n";
	nhap(a,n);
	cout<<"xuat gt mang\n";
	xuat(a,n);
	
	cout<<"cac gt khac nhau la:\n";
	xuat(b,m);
	demsl(a,b,n,m);
}
