#include<iostream>
using namespace std;
void nhap(int a[],int *n)
{
	for(int i=1;i<=*n;i++)
	{
		cin>>a[i];
	}
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
void so_ngto(int a[],int *n)
{
	int dem=0;
	for(int i=1;i<=*n;i++)
	{
		if(kt_so_ngto(a[i])==true){
			dem++;
		}
	}
	cout<<"co "<<dem<<" so ngto";
}
int main()
{
	int a[50],*n,vt;
	n=&vt;
	cout<<"nhap so ptu:";cin>>vt;
	cout<<"nhap day so:\n";
	nhap(a,n);
	so_ngto(a,n);
}
