#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void in(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
//10 5
// 1 2 5 7 9 10 11 15 16 20
bool tk(int a[],int n,int x)
{
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			return true;
		}else if(a[m]<x){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return false;
}
int main()
{
	int n,a[100];
	cout<<"nhap so phan tu mang:";cin>>n;
	cout<<"nhap gt\n";
	nhap(a,n);
	cout<<"in gt\n";
	in(a,n);
	int x;
	cout<<"nhap gt x can tim:";cin>>x;
	for(int i=0;i<n;i++){
		if(tk(a,n,x)){
			cout<<"found!";
		}else{
			cout<<"not found!";
		}
		return 0;
	}
	
}
