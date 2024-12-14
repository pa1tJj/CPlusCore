#include<iostream>
#include<math.h>
using namespace std;
long giaithua(int n)
{
	if(n==1){
		return 1;
	}else{
		return giaithua(n-1)*n;
	}
}
long tohop(int n,int k){
	return (giaithua(n)/(giaithua(k)*giaithua(n-k)));
}
int main()
{
	int n,k;
	cout<<"nhap n,k:";cin>>n>>k;
	if(n<k){
		cout<<"loi";
	}else
	cout<<"to hop chap k cua n="<<tohop(n,k);
}
