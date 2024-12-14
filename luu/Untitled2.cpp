#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string a,string b)
{
	return a.length()<b.length();
}
int main()
{
	int n;cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
