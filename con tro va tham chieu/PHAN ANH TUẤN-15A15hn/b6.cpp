#include<iostream>
using namespace std;
void nhap(int a[],int *n)
{
	for(int i=1;i<=*n;i++)
	{
		cin>>a[i];
	}
}
void so_chan(int a[],int *n)
{
	int dem=0;
	for(int i=1;i<=*n;i++)
	{
		if(a[i]%2==0){
			dem++;
		}
	}
	cout<<"co "<<dem<<" so chan";
}
int main()
{
	int a[50],*n,vt;
	n=&vt;
	cout<<"nhap so ptu:";cin>>vt;
	cout<<"nhap day so:\n";
	nhap(a,n);
	so_chan(a,n);
}
