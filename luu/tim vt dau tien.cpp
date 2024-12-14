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
// 10 x=3
// 1 2 2 3 3 3 3 7 8 9 
int vt_first(int a[],int n,int x)
{
	int res=-1,l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			r=m-1;
		}else if(a[m]<x){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return res;
}
int vt_last(int a[],int n,int x)
{
	int res=-1,l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			l=m+1;
		}else if(a[m]<x){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return res;
}
int main()
{
	int n,a[100];cin>>n;
	nhap(a,n);
	in(a,n);
	int x;
	cin>>x;
	for(int i=0;i<n;i++){
		cout<<vt_first(a,n,x)<<"\t"<<vt_last(a,n,x);
		return 0;
	}
}
