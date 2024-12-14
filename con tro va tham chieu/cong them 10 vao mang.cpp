#include<iostream>
using namespace std;
void nhap(int a[][100],int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];
	}
	cout<<"\n";
}
void xuat(int a[][100],int n)
{
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<"\t"<<a[i][j];
	}
	cout<<"\n";
	}
	
}
void tro(int a[][100],int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		*(*(a+i)+j)=*(*(a+i)+j)+10;	
	}
}
int main()
{
	int a[100][100],n;
	cout<<"nhap so hang va cot:";cin>>n;
	cout<<"nhap:";
	nhap(a,n);
	cout<<"xuat:";
	xuat(a,n);
	cout<<"sau khi cong:\n";
	tro(a,n);
	xuat(a,n);
}
