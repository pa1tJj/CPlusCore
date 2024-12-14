#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int dema=0,demb=0,n,m;
	char a[50],b[50];
	cout<<"nhap xau a:";
	cin.getline(a,50);
	cout<<"nhap xau b:";
	cin.getline(b,50);
	n=strlen(a);
	m=strlen(b);
	for(int i=1;i<=n;i++){
		if(a[i]==' '){
			dema=dema+1;
		}else{
			dema++;
		}
	}
	for(int j=1;j<=m;j++){
		if(b[j]==' '){
			demb=demb+1;
		}else{
			demb++;
		}
	}
	if(dema==demb){
		cout<<"2 xau = nhau";
	}else{
		if(dema>demb){
			cout<<"xau a nhieu ki tu hon b";
		}else{
			cout<<"xau a it ki tu hon b";
		}
	}
}
