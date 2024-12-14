#include<bits/stdc++.h>
using namespace std;
class CD{
	int ma,so_bh;
	string ten_cd;
	float gia;
	public:
		int getMa(){
			return ma;
		}
		void setMa(){
			this->ma=ma;
		}
		int getSo(){
			return so_bh;
		}
		void setSo(){
			this->so_bh=so_bh;
		}
		string getTen(){
			return ten_cd;
		}
		void setTen(){
			this->ten_cd=ten_cd;
		}
		float getGia(){
			return gia;
		}
		void setGia(){
			this->gia=gia;
		}
	    CD(){
	    	ma=so_bh=0;
	    	ten_cd="";
	    	gia=0;
		}
		void in(){
			cout<<"\nma:"<<ma;
			cout<<"\nten:"<<ten_cd;
			cout<<"\nso bai hat:"<<so_bh;
			cout<<"\ngia tien:"<<gia;
		}
		void nhap(CD &c){
			
		    cout<<"nhap ma:";cin>>c.ma;
		    cin.ignore();
		    cout<<"nhap ten:";getline(cin,c.ten_cd);
		    cout<<"nhap so bai hat:";cin>>c.so_bh;
		    cout<<"nhap gia tien:";cin>>c.gia;
		}
};
class CDList{
	CD c[100];
	public:
		void them(CD c[],int &n,CD);
		void nhap(CD c[],int n);
		void in(CD c[],int );
		void sx_giamdan_gia(CD c[],int n);
		void tinh_tong(CD c[],int );
		void sx_tangdan_theoten(CD c[],int);
};
void CDList::nhap(CD c[],int n){
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin thu:"<<i+1<<endl;
		nhap(c[i]);
	}
}
void CDList::in(CD c[],int n){
	for(int i=0;i<n;i++){
		c[i].in();
	}
}
void CDList::them(CD c[],int &n,CD x){
	for(int i=n-1;i>=0;i--){
		c[i+1]=c[i];
	}
	c[0]=x;
	++n;
}
void CDList::sx_giamdan_gia(CD c[],int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if(c[j].getGia()<c[j+1].getGia()){
				swap(c[j],c[j+1]);
			}
		}
	}
}
void CDList::tinh_tong(CD c[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		s+=c[i].getGia();
	}
	cout<<s;
}
void CDList::sx_tangdan_theoten(CD c[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(c[j].getTen()<c[min].getTen()){
				min=j;
			}
		}
		swap(c[i],c[min]);
	}
}
int main(){
	int n;
	cout<<"nhap so luong dia:";cin>>n;
	CD c[n];
	CDList cc;
	cc.nhap(c,n);
	cc.in(c,n);
	CD x;
	cout<<"\n\nnhap thong tin them\n";
	cc.nhap(x);
	cout<<"\ndanh sach sau khi them";
	cc.them(c,n,x);
	cc.in(c,n+1);
	cout<<"\n\nsap xep danh sach giam dan theo gia thanh";
	cc.sx_giamdan_gia(c,n);
	cc.in(c,n);
	cout<<"\n\nsap sep danh sach tang dan theo ten";
	cc.sx_tangdan_theoten(c,n);
	cc.in(c,n);
	cout<<"\n\nTong tien:";
	cc.tinh_tong(c,n);
}
