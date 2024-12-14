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
// 12321 34543 34 2 578 131 
int ganh(int n)
{
	int t=n;
	int dv,dn=0;
	while(t!=0){
		dv=t%10; // 1+30+100
		dn=dn*10+dv;   // 1+1*10+
		t=t/10;
	}
	if(dn==n)
		return 1;
    return 0;
}
int soganh(int a[],int n)
{
	for(int i=0;i<n;i++){
		if(ganh(a[i])==1){
			return a[i];
		}
	}
	return 0;
}
int main()
{
	int n,a[100];cin>>n;
	nhap(a,n);
	in(a,n);
	int gfirst=soganh(a,n);
	cout<<"\nso ganh dau tien la:"<<gfirst;
}
