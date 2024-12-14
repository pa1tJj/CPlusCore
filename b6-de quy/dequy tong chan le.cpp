#include<iostream>
#include<math.h>
using namespace std;
int tongchanle(int n)
{
	if(n==1){
		return 1;
	}else if(n%2==0){
		return tongchanle(n-1)+n;
	}else{
		return tongchanle(n-1)+(2*n+1);
	}
}
int main()
{
	int n;
	cout<<"n=";cin>>n;
	cout<<"TONG="<<tongchanle(n);
}
