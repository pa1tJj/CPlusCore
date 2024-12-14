#include<bits/stdc++.h>
using namespace std;
class chuyenxe{
	protected:
	string ma,hoten;
	int soxe;
	float doanh_thu;
	public:
		virtual void nhap();
		virtual void in();
		virtual float getdt(){
			return doanh_thu;
		}
};
class chuyen_xe_noi_thanh:public chuyenxe{
	int sotuyen;
	float sokm;
	public:
		void nhap();
		void in();
		float getdt(){
			return doanh_thu;
		}
};
class chuyen_xe_ngoai_thanh:public chuyenxe{
	string noiden;
	int songay;
	public:
		void nhap();
		void in();
		float getdt(){
			return doanh_thu;
		}
};
void chuyenxe::nhap(){
	cin.ignore();
	cout<<"nhap ma chuyen xe:";getline(cin,ma);
	cout<<"nhap ho ten tai xe:";getline(cin,hoten);
	cout<<"nhap doanh thu:";cin>>doanh_thu;
}
void chuyenxe::in(){
	cout<<"\nma chuyen xe:"<<ma;
	cout<<"\nho ten tai xe:"<<hoten;
	cout<<"\ndoanh thu:"<<doanh_thu;
}
void chuyen_xe_noi_thanh::nhap(){
	chuyenxe::nhap();
	cout<<"nhap so tuyen:";cin>>sotuyen;
	cout<<"nhap so km di duoc:";cin>>sokm;
}
void chuyen_xe_noi_thanh::in(){
	chuyenxe::in();
	cout<<"\nso tuyen:"<<sotuyen;
	cout<<"\nso km di duoc:"<<sokm;
}
void chuyen_xe_ngoai_thanh::nhap(){
	chuyenxe::nhap();
	cin.ignore();
	cout<<"nhap noi den:";getline(cin,noiden);
	cout<<"nhap so ngay:";cin>>songay;
}
void chuyen_xe_ngoai_thanh::in(){
	chuyenxe::in();
	cout<<"\nnoi den:"<<noiden;
	cout<<"\nso ngay:"<<songay;
}
class congtyX{
	vector<chuyenxe*> cx;
	float t1,t2;
	public:
		void nhap();
		void in();
		float tong_doanh_thu();
		float getT1(){
			return t1;
		}
		float getT2(){
			return t2;
		}
};
void congtyX::nhap(){
	chuyenxe *cx1;
	while(1){
		cout<<"\n1.nhap thong tin xe noi thanh";
		cout<<"\n2.nhap thong tin xe ngoai thanh";
		cout<<"\n0.thoat";
		int c;
		cout<<"\nchon thong tin chuyen xe:";cin>>c;
		if(c==1){
			cx1=new chuyen_xe_noi_thanh;
			cx1->nhap();
			cx.push_back(cx1);
			t1+=cx1->getdt();
		}else if(c==2){
			cx1=new chuyen_xe_ngoai_thanh;
			cx1->nhap();
			cx.push_back(cx1);
			t2+=cx1->getdt();
		}else if(c==0){
			break;
		}
	}
}
void congtyX::in(){
	for(int i=0;i<cx.size();i++){
		cx[i]->in();
	}
}
float congtyX::tong_doanh_thu(){
	float s=0;
	for(int i=0;i<cx.size();i++){
		s+=t1+t2;
	}
}
int main(){
	congtyX *cx;	
	cx=new congtyX;
	cx->nhap();
	cout<<"\nthong tin chuyen xe vua nhap";
	cx->in();
	cout<<"\ntong doanh thu:"<<cx->tong_doanh_thu();
	cout<<"\ndoanh thu xe noi thanh:"<<cx->getT1();
	cout<<"\ndoanh thu xe ngoai thanh:"<<cx->getT2();
}

