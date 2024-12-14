#include<bits/stdc++.h>
using namespace std;
struct SV{
	int ms,tuoi;
};
typedef struct SV sv;
void nhap_1sv(sv &x){
	cout<<"nhap ma:";cin>>x.ms;
	cout<<"nhap tuoi:";cin>>x.tuoi;
}
void in_1sv(sv &x){
	cout<<"\nma:"<<x.ms;
	cout<<"\ntuoi:"<<x.tuoi;
}
void nhap(sv s[],int n){
	for(int i=0;i<n;i++){
		nhap_1sv(s[i]);
	}
}
void in(sv s[],int n){
	for(int i=0;i<n;i++){
		in_1sv(s[i]);
	}
}
void them(sv s[],int &n,int vt,sv x){
	for(int i=n-1;i>=vt;i--){
		s[i+1]=s[i];
	}
	s[vt]=x;
	++n;
}
void xoa(sv s[],int &n,int x){
	for(int i=0;i<n;i++){
		if(s[i].tuoi==x){
			for(int j=i;j<n;j++){
				s[j]=s[j+1];
			}
			--n;
		}
	}
}
int main(){
	int n;
	cout<<"nhap so luong sv:";cin>>n;
	sv s[n];
	nhap(s,n);
	sv s1;
	int vt;
	cout<<"nhap vt them:";cin>>vt;
	cout<<"nhap thong tin sv them\n";
	nhap_1sv(s1);
	them(s,n,vt,s1);
	in(s,n);
	int x;
	cout<<"\nnhap tuoi sv can xoa:";cin>>x;
	cout<<"\n dssv sau khi xoa";
	xoa(s,n,x);
	in(s,n);
}
