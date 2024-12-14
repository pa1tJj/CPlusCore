#include<iostream>
#include<fstream>
#include<vector>
#include<typeinfo>
using namespace std;
class canbo{
	protected:
		string maso,hoten;
		float phucap,hsl;
	public:
		virtual void nhap(istream&);
		virtual void in(ostream&);
		virtual long int luong()=0;
		string get_hoten(){
			return hoten;
		}
		string get_maso(){
			return maso;
		}
		string set_hoten(string &ht){
			hoten=ht;
		}
		float set_hsl(float h){
			hsl=h;
		}
};
void canbo::nhap(istream& in){
	cin.ignore();
	cout<<"nhap ma so:";getline(in,maso);
	cout<<"nhap ho ten:";getline(in,hoten);
	cout<<"nhap he so luong:";in>>hsl;
}
void canbo::in(ostream& os){
	os<<"\nma so:"<<maso;
	os<<"\nho ten:"<<hoten;
	os<<"\nhe so luong:"<<hsl;
}
class giangvien:public canbo{
	string maso,hoten,khoa,trinhdo;
	float phucap,sotietday,hsl;
	public:
		void nhap(istream&);
		void in(ostream&);
		long int luong();
};
void giangvien::nhap(istream& in){
	canbo::nhap(in);
	cin.ignore();
	cout<<"nhap khoa:";getline(in,khoa);
	int c;
	do{
		cout<<"\n1.tien si";
		cout<<"\n2.thac si";
		cout<<"\n3.cu nhan";
		cout<<"\nchon trinh do:";cin>>c;
		switch(c){
			case 1:
				trinhdo="tien si";
				this->phucap=1000;
				break;
			case 2:
				trinhdo="thac si";
				this->phucap=500;
				break;
			case 3:
				trinhdo="cu nhan";
				this->phucap=300;
				break;
			default:
				break;
		}
	}while(c<1 || c>3);
	cout<<"nhap so tiet day:";in>>sotietday;
}
void giangvien::in(ostream& os){
	canbo::in(os);
	os<<"\nkhoa:"<<khoa;
	os<<"\ntrinh do:"<<trinhdo;
	os<<"\nso tiet day:"<<sotietday;
	os<<"\nphu cap:"<<phucap;
	os<<"\ntien luong:"<<luong();
}
long int giangvien::luong(){
	return hsl*730+phucap+sotietday*45;
}

class nvhc:public canbo{
	string phongban,chucvu;
	int songaycong;
	public:
		void nhap(istream&);
		void in(ostream&);
		long int luong();
};
void nvhc::nhap(istream& in){
	canbo::nhap(in);
	cin.ignore();
	cout<<"nhap phong ban:";getline(in,phongban);
	cout<<"nhap so ngay cong:";in>>songaycong;
	int c;
	do{
		cout<<"\n1.truong phong";
		cout<<"\n2.pho phong";
		cout<<"\n3.nhan vien";
		cout<<"\nchon chuc vu:";in>>c;
		switch(c){
			case 1:
			    chucvu="truong phong";
				phucap=2000;
				break;
			case 2:
				chucvu="pho phong";
				phucap=1000;
				break;
			case 3:
				chucvu="nhan vien";
				phucap=500;
				break;
			default:
				break;
		}
	}while(c<1 || c>3);
}
void nvhc::in(ostream& os){
	canbo::in(os);
	os<<"\nphong ban:"<<phongban;
	os<<"\nso ngay cong:"<<songaycong;
	os<<"\nchuc vu:"<<chucvu;
	os<<"\nphu cap:"<<phucap;
	os<<"\ntien luong:"<<luong();
}
long int nvhc::luong(){
	return hsl*730+phucap+songaycong*200;
}
class quanly{
	vector<canbo*> cb;
	long int t1,t2;
	public:
		void nhap(istream&);
		void in(ostream&);
		void sapxep();
		void tim_can_bo(string,string);
		void sua_tt(string);
		void tong_luong();
		void gv_luong_max();
};
void quanly::nhap(istream& in){
	canbo *c;
	int chon;
	while(chon!=0){
		cout<<"\n1.nhap thong tin giang vien";
		cout<<"\n2.nhap thong tin nhan vien hanh chinh";
		cout<<"\n0.thoat";
		cout<<"\nchon thong tin can nhap:";in>>chon;
		switch(chon){
			case 1:
				c=new giangvien;
				c->nhap(in);
				cb.push_back(c);
				t1+=c->luong();
				break;
			case 2:
				c=new nvhc;
				c->nhap(in);
				cb.push_back(c);
				t2+=c->luong();
				break;
			case 0:
				break;
		}
	}
}
void quanly::in(ostream &os){
	for(int i=0;i<cb.size();i++){
		cb[i]->in(os);
	}
}
void quanly::gv_luong_max(){
	canbo *gvluongmax=NULL;
	ofstream output;
	output.open("Giangvienluongcaonhat.txt");
	for(int i=0;i<cb.size();i++){
		if(static_cast<string>(typeid(*cb[i]).name())=="class giangvien"){
			if(gvluongmax==NULL){
			    gvluongmax=cb[i];
		    }else if(cb[i]->luong()>gvluongmax->luong()){
		  	    gvluongmax=cb[i];
		    }
		}		
	}
	if(gvluongmax!=NULL){
		for(int i=0;i<cb.size();i++){
			if(cb[i]->luong()==gvluongmax->luong()){
				cb[i]->in(output);
			}
		}
	}
}
void quanly::tong_luong(){
	long int s=0;
	for(int i=0;i<cb.size();i++){
		s+=cb[i]->luong();
	}
	cout<<"\ntong luong:"<<s<<endl;
}
void quanly::sapxep(){
	cout<<"\nsap xep luong giam dan";
	for(int i=0;i<cb.size()-1;i++){
		for(int j=i+1;j<cb.size();j++){
			if(cb[j]->luong()>cb[i]->luong()){
				swap(cb[i],cb[j]);
			}
		}
	}
	for(int i=0;i<cb.size();i++){
		cb[i]->in(cout); 
	}
	cout<<"\n\nsap xep luong tang dan";
	for(int i=0;i<cb.size()-1;i++){
		int min=i;
		for(int j=i+1;j<cb.size();j++){
			if(cb[j]->luong()<cb[min]->luong()){
				min=j;
			}
		}
		swap(cb[i],cb[min]);
	}
	for(int i=0;i<cb.size();i++){
		cb[i]->in(cout); 
	}
}
void quanly::tim_can_bo(string s,string x){
	for(int i=0;i<cb.size();i++){
		if(cb[i]->get_hoten()==s && cb[i]->get_maso()==x){
			cb[i]->in(cout);
		}
	}
}
void quanly::sua_tt(string id){
	for(int i=0;i<cb.size();i++){
		if(cb[i]->get_maso()==id){
			while(1){
				cout<<"\n1.sua ho ten";
				cout<<"\n2.sua he so luong";
				cout<<"\n3.suan thong tin khac";
				cout<<"\n0.thoat";
		        int c;
				cout<<"\nnhap noi dung thong tin can sua:";cin>>c;
				if(c==1){
					string new_ht;
					cin.ignore();
					cout<<"nhap ho ten moi:";
					getline(cin,new_ht);
					cb[i]->set_hoten(new_ht);
					break;
				}else if(c==2){
					float new_hsl;
					cout<<"nhap he so luong moi:";cin>>new_hsl;
					cb[i]->set_hsl(new_hsl);
					break;
				}else if(c==3){
					cout<<"\nkhong sua duoc thong tin khac";
					break;
				}else if(c==0){
					break;
				}		
			}
		}
	}
}
int main(){
	quanly q;
	while(1){
		cout<<"\n1.nhap danh sach can bo";
		cout<<"\n2.in danh sach can bo ra console";
		cout<<"\n3.in danh sach can bo ra file Danhsach.txt";
		cout<<"\n4.giao vien co luong cao nhat";
		cout<<"\n5.tong luong phai tra";
		cout<<"\n6.sap xep danh sach theo luong tang dan,giam dan";
		cout<<"\n7.sua thong tin can bo";
		cout<<"\n8.tim can bo theo ma so,ho ten";
		cout<<"\n9.doc danh sach can bo tu file Danhsach.txt";
		int c;
		cout<<"\nchon menu:";cin>>c;
		if(c==1){
			q.nhap(cin);
		}else if(c==2){
			q.in(cout);
		}else if(c==3){
			ofstream output;
			output.open("Danhsach.txt");
			q.in(output);
			output.close();
		}else if(c==4){
			q.gv_luong_max();
		}else if(c==5){
			q.tong_luong();
		}else if(c==6){
		q.sapxep();
		}else if(c==7){
			string id;
			cin.ignore();
			cout<<"nhap ma can bo can sua thong tin:";getline(cin,id);
			q.sua_tt(id);
		}else if(c==8){
			string ms,ht;
			cin.ignore();
			cout<<"nhap ma so can bo can tim:";getline(cin,ms);
			cout<<"nhap ho ten can bo can tim:";getline(cin,ht);
			q.tim_can_bo(ht,ms);
		}else if(c==9){
			ifstream input;
			input.open("Danhsach.txt");
			q.nhap(input);
			q.in(cout);
			input.close();
		}
	}
}
