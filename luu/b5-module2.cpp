#include<bits/stdc++.h>
using namespace std;
class hangthucpham{
	string ma,ten,nsx,nhh;
	float dongia;
	public:
		void nhap();
		void in();
		string get();
		int timetime(){
	        time_t now=time(0);
	        tm *ltm=localtime(&now);
	        1900+ltm->tm_year;
	        1+ltm->tm_mon;
	        ltm->tm_mday;
		}
};
void hangthucpham::nhap(){
	cin.ignore();
	cout<<"nhap ma hang:";getline(cin,ma);
	cout<<"nhap ten hang:";getline(cin,ten);
	cout<<"nhap ngay san xuat:";getline(cin,nsx);
	cout<<"nhap ngay het han:";getline(cin,nhh);
	cout<<"nhap don gia:";cin>>dongia;
}
void hangthucpham::in(){
	cout<<setw(20)<<ma;
	cout<<setw(20)<<ten;
	cout<<setw(20)<<nsx;
	cout<<setw(20)<<nhh;
	cout<<setw(20)<<dongia;
	cout<<setw(20)<<hangthucpham::get()<<setw(5)<<"\n";
}
string hangthucpham::get(){
	if()
}
