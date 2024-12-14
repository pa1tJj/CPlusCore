#include<bits/stdc++.h>
using namespace std;
class phanso{
	int tu,mau,du,kq;
	public:
		friend istream& operator>>(istream &in,phanso&);
		friend ostream& operator<<(ostream &out,phanso);
		phanso operator+(phanso);
		void tinh(phanso[],int);
		void dua_ve_dang(phanso[],int);
};
istream& operator>>(istream &in,phanso &p){
	cout<<"nhap tu so:";cin>>p.tu;
	cout<<"nhap mau so:";cin>>p.mau;
}
ostream& operator<<(ostream &out,phanso p){
	out<<p.tu<<"/"<<p.mau<<endl;
}
phanso phanso::operator+(phanso p){
	phanso tong;
	tong.tu=this->tu*p.mau+this->mau*p.tu;
	tong.mau=this->mau*p.mau;
	return tong;
}
void phanso::tinh(phanso a[],int n){
	phanso sum=a[0];
	for(int i=1;i<n;i++){
		sum=sum+a[i];
	}
	cout<<sum;
}
void phanso::dua_ve_dang(phanso p[],int n){	
	for(int i=0;i<n;i++){
		cout<<p[i].tu/p[i].mau<<"("<<p[i].tu%p[i].mau<<"/"<<p[i].mau<<")"<<endl;
	}
}
int main(){
	int n;
	cout<<"nhap n:";cin>>n;
	phanso ps[n],x;
	for(int i=0;i<n;i++){
		cin>>ps[i];
	}
	for(int i=0;i<n;i++){
		cout<<ps[i];
	}
	x.dua_ve_dang(ps,n);
}
