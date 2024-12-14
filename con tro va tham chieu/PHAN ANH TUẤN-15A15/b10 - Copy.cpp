#include<iostream>
using namespace std;
void nhap(int *a,int *n)
{
	for(int i=1;i<=*n;i++){
	cout<<"a["<<i<<"]=";
	cin>>a[i];
    }
}
void xuat(int *a,int n)
{
	for(int i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void xoa(int *a,int &n,int k)
{
	for(int i=k+1;i<=n;i++){
		a[i-1]=a[i];
	}
		n--;
}
int main()
{
	int n,a[50],k;
	cout<<"nhap so ptu n=";cin>>n;
	cout<<"nhap gt:\n";
	nhap(a,&n);
	cout<<"xuat gt:\n";
	xuat(a,n);
	cout<<"\nvi tri can xoa la:";cin>>k;
	cout<<"\nsau khi xoa la:\n";
	xoa(a,n,k);
	xuat(a,n);
}

