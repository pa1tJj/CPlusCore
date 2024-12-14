#include<bits/stdc++.h>
using namespace std;
// SAP XEP CHON
//void sx_chon(int a[],int n)
//{
//	for(int i=0;i<n-1;i++){
//		int min_pos=i;
//		for(int j=i+1;j<n;j++){
//			if(a[j]<a[min_pos]){
//				min_pos=j;
//			}
//		}
//		swap(a[i],a[min_pos]);
//	}
//}
// 5
// 2 15 6 4 88-->2 4 6 15 88
// SAP XEP NOI BOT
// 5--> 3 6 2 8 24==> 2 3 6 8 24 i=0

//void sx_noibot(int a[],int n)
//{
//	for(int i=0;i<n-i;i++){
//		for(int j=0;j<n-i-1;j++){
//			if(a[j]>a[j+1]){
//				swap(a[j],a[j+1]);
//			}
//		}
//	}
//}
/*
int main()
{
	int n,a[100];cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sx_noibot(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
*/
//SX CHEN insertion sort
// day co dang ([2 3 4] 1 8 9  ) thi chay nhanh
void is(int a[],int n)
{
	for(int i=1;i<n;i++){
		int x=a[i],pos=i-1;
		while(pos>=0 && x<a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
	}
}
int main()
{
	int n,a[100];cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	is(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
