#include<bits/stdc++.h>
using namespace std;
void tron(int a[],int l,int m,int r)
{
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0;
	while(i<x.size() && j<y.size()){
		if(x[i]<=y[j]){
			a[l]=x[i];
			++l;++i;
		}else{
			a[l]=y[j];
			++l;++j;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		++l;++i;
	}
	while(j<y.size()){
		a[l]=y[j];
		++l;++j;
	}
}
// 6 5 12 10 9 1
// 6 5 12
void sxtron(int a[],int l,int r)
{
	if(l>=r) return;
	int m=(l+r)/2;
	sxtron(a,l,m);
	sxtron(a,m+1,r);
	tron(a,l,m,r);
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sxtron(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<" ";
	}
}
