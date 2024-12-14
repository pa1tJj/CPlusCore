#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int n;
	char a[50];
	cout<<"nhap xau:";
	cin.getline(a,50);
	strupr(a);
	for(int i=0;i<n;i++)
	cout<<a;
}
