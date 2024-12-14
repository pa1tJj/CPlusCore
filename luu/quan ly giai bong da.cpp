#include<isotream>
using namespace std;
ofstream f("vleague.txt");
class quanly{
	public:
		virtual void nhap()=0;
		virtual void in()=0;
};
class cauthu:public quanly{
	string id,tenct,quoctich,ngaysinh,vitri;
	float chieucao,kg;
	public:
		void nhap();
		void in();
};
class doibong:public quanly{
	string tendb,diachi,hlv;
	vector<cauthu> ct;
	public:
		void nhap();
		void in();
};
class trandau:public quanly{
	string ngay_thi_dau,san_dau,ten_2db,tiso;
	public:
		void nhap();
		void in();
};
void cauthu::nhap(){
	cin.ignore();
	cout<<"nhap id:";getline(cin,id);
	cout<<"nhap ten cau thu:";getline(cin,tenct);
	cout<<"nhap quoc tich:";getline(cin,quoctich);
	cout<<"nhap ngay sinh:";getline(cin,ngaysinh);
	cout<<"nhap vi tri thi dau:";getline(cin,vitri);
}
void cauthu::in(){
	cout<<"\nchung minh nhan dan:"<<id;
	cout<<"\nten cau thu:"<<tenct;
	cout<<"\nquoc tich:"<<quoctich;
	cout<<"\nngay sinh:"<<ngaysinh;
	cout<<"\nvi tri thi dau:"<<vitri;
}
void doibong::nhap(){
	cin.ignore();
	cout<<"nhap ten doi bong:";getline(cin,tendb);
	cout<<"nhap dia chi:";getline(cin,diachi);
	cout<<"nhap ten huan luyen vien:";getline(cin,hlv);
}
void doibong::in(){
	cout<<"\nten doi bong:"<<tendb;
	cout<<"\ndia chi:"<<diachi;
	cout<<"\nhuan luyen vien:"<<hlv;
}
void trandau::nhap(){
	cin.ignore();
	cout<<"nhap ngay thi dau:";getline(cin,ngay_thi_dau);
	cout<<"nhap ten san thi dau:";getline(cin,san_dau);
	cout<<"nhap ten 2 doi bong:";getline(cin,ten_2db);
	cout<<"nhap ti so:";getline(cin,tiso);
}
void trandau::in(){
	cout<<"\nngay thi dau:"<<ngay_thi_dau;;
	cout<<"\nten san dau:"<<san_dau;
	cout<<"\nten 2 doi bong:"<<ten_2db;
	cout<<"\nti so:"<<tiso;
}
class giaidau{
	vector<quanly*> ql;
	public:
		void nhap();
		void in();
		void in_danh_sach_cau_thu_trong_1db();
		void them();
		void sua();
		void xoa();
		void liet_ke_tran_dau();
		void tinh_diem();
		void lie_ke_cau_thu();
		void tim_kiem();
};
void giaidau::nhap(){
	quanly *x;
	int chon;
	do{
		cout<<"\n1.nhap thong tin cau thu";
		cout<<"\n2.nhap thong tin doi bong";
		cout<<"\n3.nhap thong tin tran dau";
		cout<<"\n0.thoat";
		cout<<"\nchon thong tin can nhap:";cin>>chon;
		switch(chon){
			case 1:
				x=new cauthu;
				x->nhap();
				ql.push_back(x);
				break;
			case 2:
				x=new doibong;
				x->nhap();
				ql.push_back(x);
				break;
			case 3:
				x=new trandau;
				x->nhap();
				ql.push_back(x);
				break;
		}
	}while(chon!=0);
}
void giaidau::in(){
	quanly *x;
	int chon1;
	do{
		cout<<"\n1.hien thi thong tin cau thu";
		cout<<"\n2.hien thi thong tin doi bong";
		cout<<"\n3.hien thi thong tin tran dau";
		cout<,"\n0.thoat";
		cout<<"\nchon thong tin hien thi:";cin>>chon1;
		switch(chon1){
			case 1:
				x=new cauthu;
				x->in();
				break;
			case 2:
				x=new doibong;
				x->in();
				break;
			case 3:
				x=new trandau;
				x->in();
				break;
		}
	}while(chon1!=0);
}
void giaidau::in_danh_sach_cau_thu_trong_1db(){
	for(int )
}
