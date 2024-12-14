#include<iostream>
#include<string.h>
using namespace std;
bool kt_xau(char s[],char t[])
{
	int n=strlen(s),m=strlen(t);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		if(s[i]==t[j]){
			return true;
		}else{
			return false;
		}
	}
}
int main()
{
	char s[100],t[50];
	cout<<"nhap xau:";
	cin.getline(s,100);
	cout<<"nhap xau can tim:";
	cin.getline(t,50);
	if(kt_xau(s,t)==true){
		cout<<"ton tai xau vua nhap";
	}else{
		cout<<"k ton tai xau vua nhap";
	}
}

