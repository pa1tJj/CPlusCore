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
// 6
// 3 28 7 6 8 496
// 3 496 7 28 6
bool sohh(int n)
{
	int s=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			s=s+i;
		}
	}
		if(s==n){
			return true;
		}else{
			return false;
		}
}
int ln(int a[],int n)
{
	for(int i=0;i<n;i++){
		if(sohh(a[i])){
			for(int j=i+1;j<n;j++){
			int max=i;
			if(a[j]>a[max] && sohh(a[j])){
				max=j;
			}
			swap(a[i],a[max]);
		    }
		}
	}
}
int main()
{
	int n,a[100];cin>>n;
	nhap(a,n);
	in(a,n);
	cout<<"\n";
	ln(a,n);
	in(a,n);
}
