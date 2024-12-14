#include<bits/stdc++.h>
using namespace std;
class namgioi{
	protected:
		char ht[30],cmnd[20];
		int tuoi;
	public:
		namgioi(){
			strcpy(ht,"");
			strcpy(cmnd,"");
			tuoi=0;
		}
		~namgioi(){
		}
		void nhap();
		void in();
};
void namgioi::nhap(){
	cin.ignore();
	cout<<"nhap ho ten:";cin.getline(ht,30);
	cout<<"nhap chung minh nhan dan:";cin.getline(cmnd,20);
	cout<<"nhap tuoi:";cin>>tuoi;
}
void namgioi::in(){
	cout<<"\nho ten:"<<ht;
	cout<<"\ncmnd:"<<cmnd;
	cout<<"\ntuoi:"<<tuoi;
}
class khachang:public namgioi{
	private:
		char ma[15];
		int sl;
	public:
		khachang():namgioi(){
			strcpy(ma," ");
			sl=0;
		}
		friend istream& operator>>(istream &in,khachang &k);
		int phanloai();
		int operator>(khachang);
		friend ostream& operator<<(ostream &out,khachang k);
		void nhap();
		void in();
};
istream& operator>>(istream &in,khachang &k){
	in.ignore();
	cout<<"nhap ma:";in.getline(k.ma,15);
	cout<<"nhap so lan mua hang:";in>>k.sl;
}
int khachang::phanloai(){
	if(tuoi>60){
		cout<<"cao tuoi";
	}else if(tuoi>=35 && tuoi<=60){
		cout<<"trung nien";
	}else{
		cout<<"tre";
	}
}
int khachang::operator>(khachang k){
	return this->sl>k.sl;
}
ostream& operator<<(ostream &out,khachang k){
	out<<"\nma:"<<k.ma;
	out<<"\nso lan mua hang:"<<k.sl;
	out<<"\nphan loai:";
	k.phanloai();
}
void khachang::nhap(){
	namgioi::nhap();
}
void khachang::in(){
	namgioi::in();
}
int main()
{
	int n;
	cout<<"nhap so luong nam gioi:";cin>>n;
	namgioi ng[n];
	cout<<"nhap thong tin nam gioi";
	for(int i=0;i<n;i++){
		cout<<"\nnhap thong itn nam gioi thu:"<<i+1<<endl;
		ng[i].nhap();
	}
	cout<<"HIEN THI DANH SACH";
	for(int i=0;i<n;i++){
		ng[i].in();
	}
	khachang k[n];
	cout<<"\nnhap thong tin khach hang\n";
	for(int i=0;i<n;i++){
		k[i].nhap();
		cin>>k[i];
	}
	cout<<"\nHIEN THI KHACH HANG THEO THU TU TANG DAN SO LAN GIAO DICH";
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(k[j-1]>k[j]){
				swap(k[j-1],k[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		k[i].in();
		cout<<k[i];
	}
	
}
