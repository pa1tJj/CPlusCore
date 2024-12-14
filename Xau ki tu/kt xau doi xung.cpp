#include<iostream>
#include<string.h>
using namespace std;
int ktdx(char a[])
{
	int n;
	n=strlen(a);
	for(int i=0;i<n;i++)
		if(a[i]!=a[n-i-1]){
			return false;
		}
		return true;
}
int main()
{
	char a[100];
	int n;
	cout<<"nhap xau:";
	cin.getline(a,100);
	if(ktdx(a)==true){
		cout<<"xau dx";
	}else{
		cout<<"xau k dx";
	}
}

