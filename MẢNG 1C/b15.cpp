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
	cout<<a[i]<<"\t";
}
bool kt_so_ngto(int n)
{
	if(n<2){
		return false;
	}else{
		if(n==2){
			return true;
		}else{
			if(n%2==0){
				return false;
			}else{
				for(int i=2;i<n;i++)
				{
					if(n%i==0){
						return false;
					}
				}
			}
		}
    }	
	return true;
}
void so_ngto(int a[],int n)
{
	for(int i=0;i<n;i++){
		if(kt_so_ngto(a[i])==true){
			cout<<a[i]<<"\t";
		}
	}
}
int main()
{
	int n,a[n];
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap gt mang\n";
	nhap(a,n);
	cout<<"xuat gt mang\n";
	xuat(a,n);
	cout<<"\ncac so nguyen to la:";
	so_ngto(a,n);
}
