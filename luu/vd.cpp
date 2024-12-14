#include<bits/stdc++.h>
using namespace std;
//B1 sx doi truc tiep
//main()
//{
//	int n,a[100];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]>a[j]){
//				swap(a[i],a[j]);
//			}
//		}
//		cout<<"buoc"<<i+1<<":";
//		for(int i=0;i<n;i++){
//		cout<<a[i];
//	    }
//	    cout<<endl;
//	}
//
//}
//B2 sx chon
//main()
//{
//	int n,a[100];cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n-1;i++){
//	    int min=i;
//		for(int j=i+1;j<n;j++){	
//			if(a[j]<a[min]){
//				min=j;
//			}
//		}
//		swap(a[i],a[min]);
//		cout<<"buoc"<<i+1<<":";
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<"\t";
//	    }
//	    cout<<endl;
//	}		    
//}
//B3 sx noi bot
//main()
//{
//	int n,a[100];cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n-i-1;j++){
//			if(a[j]>a[j+1]){
//				swap(a[j],a[j+1]);
//			}
//		}
//		cout<<"buoc"<<i+1<<":";
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<"\t";
//		}
//		cout<<endl;
//	}
//}
//B4 tk vt dau va cuoi
//bool np(int a[],int n,int x)
// 7 x=5
// 1 2 2 3  5 7 9
//{
//	int l=0,r=n-1;
//	while(l<=r){
//		int m=(l+r)/2;
//		if(a[m]==x){
//			return true;
//		}else if(a[m]<x){
//			l=m+1;
//		}else{
///			r=m-1;
//		}
//	}
//	return false;	
//}
// 9 2
// 1 2 2 3 3 4 5 7 9 
//int first(int a[],int n,int x)
//{
//	int l=0,r=n-1,res=-1;
//	while(l<=r){
//		int m=(l+r)/2;//=4
//		if(a[m]==x){
//			res=m;
//			r=m-1;
//		}else if(a[m]>x){
//			r=m-1;
//		}else{
//			l=m+1;
//		}
//	}
//	return res;
//}
// 10 8
// 1 2 3 4 5 5 7 8 8 9
//int last(int a[],int n,int x)
//{
//	int l=0,r=n-1,res=-1;
//	while(l<=r){
//		int m=(l+r)/2;
//		if(a[m]==x){
//			res=m;
//			l=m+1;
//		}else if(a[m]>x){
//			r=m-1;
//		}else{
//			l=m+1;
//		}
//	}
//	return res;
//}
//B5 sx phan hoach quicksort
// 2 10 3 9 5 8 7 6 1 4
// 2  3 1 4 5 8 7 6 10 9
//void quick(int a[],int l,int r)
//{
//	int x=a[r];
//	int i=l-1,j=l;
//	for(int j=l;j<r;j++){
//		if(a[j]<x){
//			++i;
//			swap(a[i],a[j]);
//		}
//	}
//	++i;
//	swap(a[i],a[r]);
//}
//B6 sx tron
// 4 2 7 3 9 8 5 
// 2 4 3 5 9 8 7

//int main()
//{
//	int n,a[100];cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	tron(a,0,n-1);
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<"\t";
//	}
//	int x;
//	cout<<"nhap x:";cin>>x;
	//for(int i=0;i<n;i++){
	//	if(np(a,n,x)){
	//		cout<<"yes";
	//	}else{
	//		cout<<"no";
	//	}
	//	return 0;
	//}
//}
//B7 dua 1 so ve dau mang
//  4 3 5 7 6 9 
/*
void d(int a[],int n)
{
	for(int i=0;i<n;i++){	
	    for(int j=i+1;j<n;j++){
		    if(a[j]%2==0 && a[j]!=0){
			swap(a[j],a[i]);
		    }
	    }
    }
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(a[i]%2!=0 && a[j]==0){
				swap(a[i],a[j]);
			}
		}
	}
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	d(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
*/
void in(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		
	}
}
