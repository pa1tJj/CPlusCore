#include<bits/stdc++.h>
using namespace std;
class isp{
	protected:
		bool KT;
	public:
	virtual void nhap()=0;
	virtual void in()=0;
	virtual long int tinhtien()=0;
	bool get_kt(){
		return KT;
	}
	bool set_kt(bool kt){
		KT=kt;
	}
};
class dialup:public isp{
	int tg_truycap;
	public:
		void nhap();
		void in();
		long int tinhtien();
		bool kt(){
			return 0;
		}
};
void dialup::nhap(){
	cout<<"nhap thoi gian truy cap:";cin>>tg_truycap;
}
void dialup::in(){
	cout<<"\nthong tin thue bao dialup";
    cout<<"\nthoi gian truy cap:"<<tg_truycap;
    cout<<"\ntinh tien:"<<tinhtien();
}
long int dialup::tinhtien(){
	return 30*tg_truycap;
}
class adsl:public isp{
	int dl_truyentai;
	public:
		void nhap();
		void in();
		long int tinhtien();
		bool kt(){
			return 1;
		}
};
void adsl::nhap(){
	cout<<"nhap dung luong da dung:";cin>>dl_truyentai;
}
void adsl::in(){
	cout<<"\nthong tin thue bao adsl";
	cout<<"\ndung luong truyen tai:"<<dl_truyentai;
	cout<<"\ntinh tien:"<<tinhtien();
}
class T1:public isp{
	int sothang;
	public:
		void nhap();
		void in();
		long int tinhtien();
		bool kt(){
			return -1;
		}
};
void T1::nhap(){
	cout<<"nhap so thang dung:";cin>>sothang;
}
void T1::in(){
	cout<<"\nthong tin thue bao T1";
	cout<<"\nso thang dung:"<<sothang;
	cout<<"\ntinh tien:"<<tinhtien();
}
long int T1::tinhtien(){
	return sothang*2000000;
}
long int adsl::tinhtien(){
	return 50*dl_truyentai;
}
class congty{
	vector<isp*> tb;
	long int t1,t2,t3;
	public:
		void nhap();
		void in();
		void tongtien();
		void tinh_tien_tung_thue_bao();
		void thue_bao_adsl_cuoc_max();
		void ghi_file();
		void doc_file();
};
void congty::nhap(){
	isp *x;
	while(1){
		cout<<"\n1.nhap thong tin thue bao dialup";
		cout<<"\n2.nhap thong tin thue bao adsl";
		cout<<"\n3.nhap thong tin thue bao T1";
		cout<<"\n0.thoat";
		int c;
		cout<<"\nchon:";cin>>c;
		if(c==1){
			x=new dialup;
			x->nhap();
			x->set_kt(1);
			tb.push_back(x);
			t1+=x->tinhtien();
		}else if(c==2){
			x=new adsl;
			x->nhap();
			x->set_kt(0);
			tb.push_back(x);
			t2+=x->tinhtien();
		}else if(c==3){
			x=new T1;
			x->nhap();
			x->set_kt(-1);
			tb.push_back(x);
			t3+=x->tinhtien();
		}else if(c==0){
			break;
		}
	}
}
void congty::in(){
	for(int j=0;j<tb.size();j++){
		if(tb[j]->get_kt()==1){
			cout<<"\nthong tin thue bao dialup thu:"<<j+1<<endl;
			tb[j]->in();
		}else if(tb[j]->get_kt()==0){
			cout<<"\nthong tin thue bao adsl thu:"<<j+1<<endl;
			tb[j]->in();
		}else if(tb[j]->get_kt()==-1){
			cout<<"\nthong tin thue bao T1 thu:"<<j+1<<endl;
			tb[j]->in();
		}
	}
}
void congty::tongtien(){
	long int s;
	s=t1+t2+t3;
	cout<<s;
}
void congty::tinh_tien_tung_thue_bao(){
	cout<<"\ntong tien thue bao dialup:"<<t1;
	cout<<"\ntong tien thue bao adsl:"<<t2;
	cout<<"\ntong tien thue bao T1:"<<t3;
}
void congty::thue_bao_adsl_cuoc_max(){
	int max=tb[0]->tinhtien();
	for(int i=1;i<tb.size();i++){
		if(tb[i]->tinhtien()>max && tb[i]->get_kt()==0){
			max=tb[i]->tinhtien();
		}
	}
	if(max!=0){
		for(int i=0;i<tb.size();i++){
			if(tb[i]->tinhtien()== max){
				tb[i]->in();
			}
		}
	}	
}
int main(){
	congty *ct=new congty;
	cout<<"nhap thong tin\n";
	ct->nhap();
	ct->in();
	cout<<"\n\ntong tien thu duoc:";
	ct->tongtien();
	ct->tinh_tien_tung_thue_bao();
	cout<<"\n\nthue bao adsl max";
	ct->thue_bao_adsl_cuoc_max();
}




