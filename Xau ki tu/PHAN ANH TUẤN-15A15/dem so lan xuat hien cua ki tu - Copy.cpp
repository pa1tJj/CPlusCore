#include<iostream>
#include<string.h>
using namespace std;
void dem_kt(char a[])
{
	int n=strlen(a);
	for(int i=0;i<n;i++){
		bool kt=true;
		for(int j=i-1;j>=0;j--){
			if(a[i]==a[j]){
				kt=false;
				break;
			}
		}
		if(kt==true){
			int dem=0;
			for(int k=0;k<n;k++){
				if(a[i]==a[k]){
					dem++;
				}
			}
			cout<<"\nki tu "<<a[i]<<" xuat hien "<<dem<<" lan";
		}
	}
}
int main()
{
	char a[100];
	cout<<"nhap xau:";
	cin.getline(a,100);
	dem_kt(a);
}

