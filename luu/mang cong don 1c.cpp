#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cout<<"nhap so ptu mang:";cin>>n;
	int a[n+1];
	cout<<"nhap gt mang:\t";
	for(int i=1;i<=n;i++)
	cin>>a[i];
	int prefix[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		prefix[i]=prefix[i-1]+a[i];
	}
	int q;
	cout<<"nhap so truy van:";cin>>q;
	while(q--){
		int l,r;
		cout<<"\nnhap trai va phai:";cin>>l>>r;
		cout<<"ket qua="<<prefix[r]-prefix[l-1];
	}
	return 0;
}
