#include<bits/stdc++.h>
using namespace std;
/*
thu vien x cho dang ki lam the doc gia.thong tin gom:
+ho ten
+ngay lap the
+so thang co hieu luc cua the
-Co 2 loai doc gia:
doc gia tre em:can them thong tin ten nguoi dai dien-tien lam the=so thang co hieu luc*5000;
doc gia nguoi lon:can them thong tin so cmnd-tien lam the=so thang co hiue luc*10000;
YEU CAU:
cai dat cac lop dai dien cho cac loai the doc gia de:
+quan li thong tin the;
+tinh tien lam the cua 1 doc gia
cai dat lop thuvien de quan li danh sach cac the doc gia trong thu vien voi cac chuc nang sau:
+nhap xuat danh sach cac the doc gia
+tinh tong tien lam the
*/
class docgia{
	protected:
		string hoten,ngaylapthe;
		int soth_hieuluc;
	public:
		virtual void nhap();
		virtual void in();
		virtual long double tinh_tien_lam_the()=0;
		~docgia(){
		}
};
class doc_gia_tre_em:public docgia{
	string nguoi_dai_dien;
	public:
		void nhap();
		void in();
		long double tinh_tien_lam_the();
		~doc_gia_tre_em(){
		}
};
class doc_gia_nguoi_lon:public docgia{
	string cmnd;
	public:
		void nhap();
		void in();
		long double tinh_tien_lam_the();
		~doc_gia_nguoi_lon(){
		}
};
void docgia::nhap(){
	cin.ignore();
	cout<<"nhap ho ten:";getline(cin,hoten);
	cout<<"nhap ngay lap the:";cin>>ngaylapthe;
	cout<<"nhap so thang hieu luc:";cin>>soth_hieuluc;
}
void docgia::in(){
	cout<<"\nho ten:"<<hoten;
	cout<<"\nngay lap the:"<<ngaylapthe;
	cout<<"\nso thang hieu luc:"<<soth_hieuluc;
}
void doc_gia_tre_em::nhap(){
	docgia::nhap();
	cin.ignore();
	cout<<"nhap ten nguoi dai dien:";getline(cin,nguoi_dai_dien);
}
void doc_gia_tre_em::in(){
	docgia::in();
	cout<<"\nten nguoi dai dien:"<<nguoi_dai_dien;
}
long double doc_gia_tre_em::tinh_tien_lam_the(){
	return soth_hieuluc*5000;
}
void doc_gia_nguoi_lon::nhap(){
	docgia::nhap();
	cin.ignore();
	cout<<"nhap so chung minh nhan dan:";getline(cin,cmnd);
}
void doc_gia_nguoi_lon::in(){
	docgia::in();
	cout<<"\nso cmnd:"<<cmnd;
}
long double doc_gia_nguoi_lon::tinh_tien_lam_the(){
	return soth_hieuluc*10000;
}
class thuvien{
	int tong1,tong2;
	vector<docgia*> dg;
	int kt;
	int so_luong_dg;
	public:
		void nhap();
		void in();
		long double tinh_tong_tien();
};
void thuvien::nhap(){
	while(1){
		cout<<"\n1.nhap thong tin doc gia tre em";
		cout<<"\n2.nhap thong tin doc gia nguoi lon";
		int c;
		cout<<"\nchon thong tin doc gia can nhap:";cin>>c;
		docgia *d;
		if(c==1){
			d=new doc_gia_tre_em;
			d->nhap();
			dg.push_back(d);
		}else if(c==2){
			d=new doc_gia_nguoi_lon;
			d->nhap();
			dg.push_back(d);
		}else if(c==0){
			break;
		}
	}
}
void thuvien::in(){
	for(int i=0;i<dg.size();i++){
		dg[i]->in();
	}
}
long double thuvien::tinh_tong_tien(){
	float s=0;
	for(int i=0;i<dg.size();i++){
		s+=dg[i]->tinh_tien_lam_the();
	}
	return s;
}
int main(){
	thuvien *tv;
	tv=new thuvien;
	cout<<"nhap thong tin doc gia\n";
	tv->nhap();
	cout<<"\thong tin do gia vua nhap";
	tv->in();
	cout<<"\ntong tien lam the:"<<tv->tinh_tong_tien();
}
