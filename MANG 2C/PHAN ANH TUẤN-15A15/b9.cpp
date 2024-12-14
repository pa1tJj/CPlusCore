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
bool kt_so_hoanthien(int n)
{
	int s=0;
	for(int i=0;i<n;i++){
		if(n%i==0){
			s=s+i;
		}
	}
	if(s==n){
		return true;
	}
	return false;
}
void so_hoan_thien(int a[][100],int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		if(i+j==n-1){
			if(kt_so_hoanthien(a[i][n-1-i])==true){
				cout<<a[i][j]<<"\t";
			}
		}		
    }
}
void solonnhat_dcc(int a[][100],int n)
{
	int max=a[0][0];
	for(int i=0;i<n;i++)
		if(a[i][i]>max){
			max=a[i][i];
		}	
		cout<<max;			
}
int main()
{
	int n,a[100][100];
	cout<<"nhap so hang va so cot:";cin>>n;
	cout<<"nhap gt mang:\n";
	nhap(a,n);
	cout<<"xuat gt mang:\n";
	xuat(a,n);
	cout<<"cac so hoan thien tren dg cheo phu la:";
	so_hoan_thien(a,n);
	cout<<"\nso lon nhat tren dg cheo chinh la:";
	solonnhat_dcc(a,n);
}
