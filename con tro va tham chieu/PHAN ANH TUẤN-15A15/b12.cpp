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
void so_chan(int *a,int *n)
{
	int dem=0;
	for(int i=1;i<=*n;i++){
		if(a[i]%2==0)
		{
			dem++;
		}
	}
	cout<<"co "<<dem<<" so chan";
}
int main()
{
	int n,a[50],k;
	cout<<"nhap so ptu n=";cin>>n;
	cout<<"nhap gt:\n";
	nhap(a,&n);
	cout<<"xuat gt:\n";
	xuat(a,n);
	so_chan(a,&n);
}

