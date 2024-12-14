#include<bits/stdc++.h>
using namespace std;
/*

*/
class hoadon{
	protected:
	string mahd,nghd,tenkh;
	int ma_phong;
	float dongia;
	public:
		virtual void nhap();
		virtual void in();
		virtual float thanhtien()=0;
};
class hd_theogio:public hoadon{
	int sg_thue;
	public:
		void nhap();
		void in();
		float thanhtien();
};
class hd_theongay:public hoadon{
	int song_thue;
	public:
		void nhap();
		void in();
		float thanhtien();
};
void hoadon::nhap(){
	cin.ignore();
	cout<<"nhap ma hoa don:";getline(cin,mahd);
	cout<<"nhap ngay hoa don:";getline(cin,nghd);
	cout<<"nhap ten khach hang:";getline(cin,tenkh);
	cout<<"nhap ma phong:";cin>>ma_phong;
	cout<<"nhap don gia:";cin>>dongia;
}
void hoadon::in(){
	cout<<"|"<<setw(40)<<"\nma hoa don:"<<mahd;
	cout<<"|"<<setw(40)<<"\nngay hoa don:"<<nghd;
	cout<<"|"<<setw(40)<<"\nten khach hang:"<<tenkh;
	cout<<"|"<<setw(40)<<"\nma phong:"<<ma_phong;
	cout<<"|"<<setw(40)<<"\ndon gia:"<<dongia<<"|"<<setw(5)<<endl;
}
void hd_theogio::nhap(){
	hoadon::nhap();
	cout<<"nhap so gio thue:";cin>>sg_thue;
}
void hd_theogio::in(){
	hoadon::in();
	cout<<"|"<<setw(40)<<"\nso gio thue:"<<sg_thue;
	cout<<"|"<<setw(40)<<"\nthanh tien:"<<thanhtien()<<"|"<<setw(5)<<endl;
}
float hd_theogio::thanhtien(){
	return sg_thue*dongia;
}
void hd_theongay::nhap(){
	hoadon::nhap();
	cout<<"nhap so ngay thue:";cin>>song_thue;
}
void hd_theongay::in(){
	hoadon::in();
	cout<<"|"<<setw(40)<<"\nso ngay thue:"<<song_thue;
	cout<<"|"<<setw(40)<<"\nthanh tien:"<<thanhtien()<<"|"<<setw(5)<<endl;
}
float hd_theongay::thanhtien(){
	if(song_thue>7){
		return 7*dongia+0.2*(song_thue-7)*dongia;
	}else{
		return song_thue*dongia;
	}
}
class quanly_hd{
	vector<hoadon*> hd;
	int t1,t2;
	bool kt;
	public:
	    static int d1,d2;
		void nhap();
		void in();
		int slhd_theogio();
		int slhd_theongay();
		double tongthanhtien();
};
int quanly_hd::d1=0,quanly_hd::d2=0;
void quanly_hd::nhap(){
	hoadon *x;
	while(1){
		cout<<"\n1.nhap thong tin hoa don theo gio";
		cout<<"\n2.nhap thong tin hoa don theo ngay";
		cout<<"\n3.thoat";
		int c;
		cout<<"\nchon thong tin hoa don can nhap:";cin>>c;
		if(c==1){
			x=new hd_theogio;
			x->nhap();
			hd.push_back(x);
			t1+=x->thanhtien();
			d1++;
			kt=true;
		}else if(c==2){
			x=new hd_theongay;
			x->nhap();
			hd.push_back(x);
			d2++;
			t2+=x->thanhtien();
			kt=false;
		}else if(c==3){
			break;
		}
	}
}
void quanly_hd::in(){  
	for(int i=0;i<hd.size();i++){
		hd[i]->in();
	}
}
int quanly_hd::slhd_theogio(){
	cout<<"\nso luong hoa don theo gio la:"<<d1;
}
int quanly_hd::slhd_theongay(){
	cout<<"\nso luong hoa don theo ngay la:"<<d2;
}
double quanly_hd::tongthanhtien(){
	double s=0;
	for(int i=0;i<hd.size();i++){
		s+=t1+t2;
	}
	return s;
}
int main(){
	quanly_hd *ql=new quanly_hd;
	while(1){
		cout<<"\n--------------MENU---------------";
		cout<<"\n1.nhap thong tin hoa don";
		cout<<"\n2.in thong tin hoa don";
		cout<<"\n3.so luong hoa don theo gio";
		cout<<"\n4.so luong hoa don theo ngay";
		cout<<"\n5.tong thanh tien";
		int c;
		cout<<"\nchon menu:";cin>>c;
		if(c==1){
			ql->nhap();
		}else if(c==2){
			ql->in();
		}else if(c==3){
			ql->slhd_theogio();
		}else if(c==4){
			ql->slhd_theongay();
		}else if(c==5){
			ql->tongthanhtien();
		}
	}
}
