#include<bits/stdc++.h>
using namespace std;
// 3 4 2 7 9 5
int rf(int a[],int n)
{
	if(n==1){
		if(a[n]%2==0){
			return a[n];
		}else{
			return 0;
		}
	}
	if(a[n-1]%2==0){
		return a[n-1]+rf(a,n-1);
	}else{
		return 0+rf(a,n-1);
	}

}
//B2
//123
//int rf(int n)
//{
//	if(n<10){
//		return 1;
//	}
//	return rf(n/10)+1;
//}
//B3
//235=200+30+5
int rf(int n)
{
	if(n<10){
		return n;
	}
	return rf(n/10);
}
int main()
{
	int n,a[100];cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\n"<<rf(a,n);
}
