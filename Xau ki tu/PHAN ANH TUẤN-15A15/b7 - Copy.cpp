#include<iostream>
#include<string.h>
using namespace std;
void tim_ki_tu(char a[])
{
	char kt;
	int n;
	n=strlen(a);
	for(int i=1;i<=n;i++){
		if(a[i]==kt){
			cout<<"ki tu can tim la:"<<a[i];
		}
	}
}
int main()
{
	char a[100],kt=0;
	cout<<"nhap xau:";
	cin.getline(a,100);
	cout<<"nhap ki tu can tim:";
	cin>>kt;
	tim_ki_tu(a);
}

