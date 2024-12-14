#include<iostream>
using namespace std;
main()
{
	int S=1,n;
	cout<<"n=";cin>>n;
	for(int i=1;i<=n;i++)
	S=i*S;
	cout<<n<<"!="<<S;
}
