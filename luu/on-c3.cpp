#include<bits/stdc++.h>
using namespace std;
class dienlanh{
	private:
		string ma,ten;
		float dg;
	public:
		dienlanh(){
			ma=ten="";
			dg=0;
		}
		~dienlanh(){
		}
		void nhap();
		void in();
};
void dienlanh::nhap(){
	cin.ignore();
	cout<<"nhap ma:";getline(cin,ma);
	cout<<"nhap ten:";getline(cin,ten);
}
void dienlanh::in(){
	cout<<"\nma:"<<ma;
	cout<<"\nten:"<<ten;
}
class tulanh:public dienlanh{
	private:
		float dt,da;
	public:
		tulanh():dienlanh(){
			dt=da=0;
		}
		~tulanh(){
		}
		friend istream& operator>>(istream &in,tulanh &t);
		int tinhtien();
		friend bool operator==(tulanh,int);
		friend ostream& operator<<(ostream &out,tulanh t);
};
istream& operator>>(istream &in,tulanh &t){
	cout<<"nhap dung tich:";in>>t.dt;
	cout<<"nhap dien ap:";in>>t.da;
}
int tulanh::tinhtien(){
	if(dt>100){
		return 500000;
	}else if(dt>50){
		return 300000;
	}else{
		return 200000;
	}
}
bool operator==(tulanh t1,int x){
	if(t1.dt==x){
		return true;
	}else{
		return false;
	}
}
ostream& operator<<(ostream &out,tulanh t){
	out<<"\ndung tich:"<<t.dt;
	out<<"\ndien ap:"<<t.da;
	out<<"\ntinh tien:"<<t.tinhtien();
}
int main()
{
	int n;
	cout<<"nhap so luong do dien lanh:";cin>>n;
	dienlanh d[n];
	cout<<"nhap thong tin do dien lanh";
	for(int i=0;i<n;i++){
		cout<<"\nnhap thong tin do dien lanh thu:"<<i+1<<endl;
		d[i].nhap();
	}
	cout<<"\nHIEN THI DANH SACH";
	for(int i=0;i<n;i++){
		d[i].in();
	}
	tulanh t[n];
	cout<<"\nnhap thong tin tu lanh\n";
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	cout<<"danh sach tu lanh co dung tich 500l\n";
	for(int i=0;i<n;i++){
		if(t[i]==500){
			cout<<t[i];
		}
	}
}
