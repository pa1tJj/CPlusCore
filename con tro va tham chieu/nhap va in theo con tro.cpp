#include<iostream>
using namespace std;
main()
{
	int n,a[5];
	cout<<"nhap so ptu:";cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		*(a+i)=a[i];
	}
	cout<<"in ra:\n";
	for(int i=1;i<=n;i++)
		cout<<*(a+i)<<"\n";
}
