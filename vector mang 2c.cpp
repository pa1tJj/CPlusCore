#include<bits/stdc++.h>
using namespace std;
//main()
//{
//	int n;
//	cout<<"nhap so ptu:";cin>>n;
//	vector<int> v(n);
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<"v["<<i<<"]=";
//		cin>>v[i];
//	}
//	cout<<"day ban dau:";
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<"\t";
//	}
//	reverse(v.begin(),v.end());
//	cout<<"day dao nguoc:";
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<"\t";
//	}
//}
main()
{
	int n,x,y;
	cout<<"nhap so hang,so cot";
	cin>>x>>y;
	vector<vector<int> > v(x,vector<int>(y));
	for(int i=0;i<x;i++)
	for(int j=0;j<y;j++)
	{
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>v[i][j];
	}
	cout<<"mang vua nhap\n";
	for(int i=0;i<x;i++)
	{
	for(int j=0;j<y;j++)
	{
		cout<<v[i][j]<<"\t";
		
	}
	cout<<"\n";
}
}
