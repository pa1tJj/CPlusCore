#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[100];
	int n,dem=0;
	cout<<"nhap xau:";
	cin.getline(a,100);
	n=strlen(a);
	for(int i=1;i<=n;i++){
		if(toupper(a[i]='a')||toupper(a[i]=='b'))
		dem++;
	}
	cout<<"so ki tu a,b la:"<<dem;
}

