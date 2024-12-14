#include<bits/stdc++.h>
using namespace std;
bool kt=true;
int dem=0;
void khoi_tao(int x[],int n){
	for(int i=0;i<n;i++){
		x[i]=i+1;
	}
}
void sinh_xau_nhi_phan_ke_tiep(int x[],int n){
	int i=n-1;
	while(i>=0 && x[i]==1){
		x[i]=0;
	    --i;
	}
	if(i>=0){
		x[i]=1;
	}else{
		kt=false;
	}
}
void in(int x[],int n){
	for(int i=0;i<n;i++){
		cout<<"\n"<<dem++<<":"<<x[i]<<" ";
	}
}
void sinh_tap_con_k_pt(int x[],int n,int k){
	int i=k-1;
	while(i>=0 && x[i]==n-k+i+1){
		--i;		
	}
	if(i<0){
		kt=false;
	}else{
		x[i]++;
		for(int j=i+1;j<k;j++){
			x[j]=x[j-1]+1;
		}
	}
}
int main(){
	int n,k;
	cout<<"nhap n:";cin>>n;
	cout<<"nhap k:";cin>>k;
	int x[k];
	while(kt){
		khoi_tao(x,k);
		sinh_tap_con_k_pt(x,n,k);
		in(x,k);
	}
}
