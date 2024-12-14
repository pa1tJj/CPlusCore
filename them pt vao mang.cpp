#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void them(int a[],int &n,int vt,int b){
	for(int i=n-1;i>=vt;i--){
		a[i+1]=a[i];
	}
	a[vt]=b;
	n++;
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int main(){
	int n;
	cout<<"nhap n:";cin>>n;
	int a[n];
	nhap(a,n);
	int x;
	cout<<"nhap gt:";cin>>x;
	int vt;
	cout<<"nhap vt:";cin>>vt;
	them(a,n,vt,x);
	in(a,n);
}
