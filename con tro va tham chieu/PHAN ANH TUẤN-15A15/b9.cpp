#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int dem=0,n;
	char a[100];
	char *kt=a;
	cout<<"nhap xau ki tu:";
	cin.getline(kt,100);
	n=strlen(kt);
	for(int i=1;i<=n;i++)
	{
		if(*(kt+i)==' ')
		{
			dem=dem+1;
		}else{
			dem++;
		}	
	}
	cout<<"xau co "<<dem<<" ki tu";
} 
