#include<bits/stdc++.h>
using namespace std;
// 1 2 2 3
// 1 2 3 5 9
// 1 1 2 2 2 3 3 5 9
main()
{
	int n,m;
	cin>>n>>m;
	int a[100],b[100];
	cout<<"nhap a\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"nhap b\n";
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int i=0,j=0,cnt=0,c[n+m];
	while(i<n && j<m){
		if(a[i]<=b[j]){
			c[cnt++]=a[i];
			++i;
	    }else{
	    	c[cnt++]=b[j];
	    	++j;
		}
	}
	while(i<n){
		c[cnt++]=a[i++];
	}
	while(j<m){
		c[cnt++]=b[j++];
	}
	cout<<"sau khi tron\n";
	for(int i=0;i<n+m;i++){
		cout<<c[i]<<"\t";
	}
}
