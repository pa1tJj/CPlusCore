#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	return abs(a)<abs(b);
}
main()
{
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	sort(a,a+n);//sx trong doan a[x]-->a[y] sort(a+x,a+y+1)
//	sort(a,a+n,greater<int>());// sx giam dan
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<"\t";
//	}
    stable_sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
    	cout<<a[i]<<"\t";
	}
}
