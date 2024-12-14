#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void in(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
void BubbleSort(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(a[j]<a[i]){
				swap(a[j],a[i]);
			}
		}
	}
}
int main()
{
	int n,a[100];cin>>n;
	nhap(a,n);
	cout<<"mang sau khi sap xep:";
	BubbleSort(a,n);
	in(a,n);
}
