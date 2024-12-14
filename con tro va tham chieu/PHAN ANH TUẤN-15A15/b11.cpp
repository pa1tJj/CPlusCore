#include<iostream>
using namespace std;
void nhap(char *a,int *n)
{
	for(int i=1;i<=*n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin.getline(a,50);
		fflush(stdin);
	}
}
void xuat(char *a,int *n)
{
	for(int i=1;i<=*n;i++)
	{
		cout<<a[i]<<"\n";
	}
}
void tro_n(char *a,int *n,int vt)
{
	for(int i=1;i<=*n;i++)
	{
		if(i==vt)
		{
			cout<<a[i];
		}
	}
}
int main()
{
	int n,vt;
	char a[50];
	cout<<"nhap so ten nguoi dung:";cin>>n;
	cout<<"nhap danh sach ten:";
	nhap(a,&n);
	cout<<"xuat danh sach ten nguoi dung:\n";
	xuat(a,&n);
	cout<<"\ntro vi tri can xuat ten:";cin>>vt;
	tro_n(a,&n,vt);
}
