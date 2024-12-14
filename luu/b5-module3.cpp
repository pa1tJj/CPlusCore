#include<bits/stdc++.h>
using namespace std;
class khachang{
	protected:
	string ma,hoten,nghd;
	int sl;
	long double dongia;
	public:
		virtual void nhap();
		virtual void in();
		virtual long double thanhtien()=0;
		virtual string getnghd(){
			return nghd;
		}
};
void khachang::nhap(){
	cin.ignore();
	cout<<"nhap ma khach hang:";getline(cin,ma);
	cout<<"nhap ho ten khach hang:";getline(cin,hoten);
	cout<<"nhap ngay hoa don:";getline(cin,nghd);
	cout<<"nhap so luong:";cin>>sl;
	cout<<"nhap don gia:";cin>>dongia;
}
void khachang::in(){
	cout<<"\nma khach hang:"<<ma;
	cout<<"\nho ten khach hang:"<<hoten;
	cout<<"\nngay hoa don:"<<nghd;
	cout<<"\nso luong:"<<sl;
	cout<<"\ndon gia:"<<dongia;
}
class kh_vietnam:public khachang{
	string dtkh;
	int dinhmuc;
	public:
		void nhap();
		void in();
		long double thanhtien();
};
void kh_vietnam::nhap(){
	khachang::nhap();
	cin.ignore();
	cout<<"nhap doi tuong khach hang:";getline(cin,dtkh);
	cout<<"nhap dinh muc:";cin>>dinhmuc;
}
void kh_vietnam::in(){
	khachang::in();
	cout<<"\ndoi tuong khach hang:"<<dtkh;
	cout<<"\ndinh muc:"<<dinhmuc;
}
long double kh_vietnam::thanhtien(){
	if(sl<=dinhmuc){
		return dongia*sl;
	}else{
		return sl*dongia*dinhmuc+(sl-dinhmuc)*dongia*2.5;
	}
}
class kh_nuocngoai:public khachang{
	string qt;
	public:
		void nhap();
		void in();
		long double thanhtien();
};
void kh_nuocngoai::nhap(){
	khachang::nhap();
	cin.ignore();
	cout<<"nhap quoc tich:";getline(cin,qt);
}
void kh_nuocngoai::in(){
	khachang::in();
	cout<<"\nquoc tich:"<<qt;
}
long double kh_nuocngoai::thanhtien(){
	return sl*dongia;
}
class hoadon{
	vector<khachang*> kh;
	static int sl1,sl2;
	long double t1,t2;
	public:
		void nhap();
		void in();
		void tong_sl();
		void tb_thanhtien_kh_nuoc_ngoai();
		void hd_9_2018();
};
int hoadon::sl1=0,hoadon::sl2=0;
void hoadon::nhap(){
	khachang *k;
	while(1){
		cout<<"\n1.nhap thong tin kh viet nam";
		cout<<"\n2.nhap thong tin kh nuoc ngoai";
		cout<<"\n0.thoat";
		int c;
		cout<<"\nchon menu:";cin>>c;
		if(c==1){
			sl1++;
			k=new kh_vietnam;
			k->nhap();
			kh.push_back(k);
			t1+=k->thanhtien();
		}else if(c==2){
			sl2++;
			k=new kh_nuocngoai;
			k->nhap();
			kh.push_back(k);
			t2+=k->thanhtien();
		}
	}
}
void hoadon::in(){
	for(int i=0;i<kh.size();i++){
		kh[i]->in();
	}
}
void hoadon::tong_sl(){
	cout<<"\ntong so luong hoa don kh viet nam la:"<<sl1;
	cout<<"\ntong so luong hoa don khach hang nuoc ngoai la:"<<sl2;
}
void hoadon::tb_thanhtien_kh_nuoc_ngoai(){
	cout<<"\ntrung binh thanh tien hoa don kh nuoc ngoai la:"<<t2/sl2;
}
void hoadon::hd_9_2018(){
	string x="09/2018",date1;
	for(int i=0;i<kh.size();i++){
		date1=kh[i]->getnghd();
		string[] date1=date.split("/");
		string[] date2=date1.split("/";)
	}
}
int main(){
	hoadon *h=new hoadon;
	h->nhap();
	h->in();
	h->tong_sl();
	h->tb_thanhtien_kh_nuoc_ngoai();
	h->hd_9_2018();
}
