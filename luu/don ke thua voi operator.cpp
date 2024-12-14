#include<bits/stdc++.h>
using namespace std;
class mathang{
	protected:
	string ma;
	string ten;
	float dongia;
	public:
		mathang(){
			ma="";ten="";dongia=0;
		}
		mathang(int m,string t,float d){
			ma=m;
			ten=t;
			dongia=d;
		}
		~mathang(){
		}
		friend istream& operator>>(istream &in,mathang &);
		friend ostream& operator<<(ostream &out,mathang );
		string getMa(){
			return ma;
		}
};
istream& operator>>(istream &in,mathang &m){
	cout<<"nhap ma hang:";in>>m.ma;
	cin.ignore();
	cout<<"nhap ten hang:";getline(in,m.ten);
	cout<<"nhap don gia:";in>>m.dongia;
}
ostream& operator<<(ostream &out,mathang m){
		out<<"\nma hang:"<<m.ma;
		out<<"\nten hang:"<<m.ten;
		out<<"\ndon gia:"<<m.dongia;
}
class banhkeo:public mathang{
	string noi_sx;
	public:
		banhkeo():mathang(){
			noi_sx="";
		}
		banhkeo(int m,string t,float d,string n):mathang(m,t,d){
			noi_sx=n;
		}
		friend istream& operator>>(istream &in,banhkeo &b){
			in>>(mathang&)b;
			cin.ignore();
			cout<<"nhap noi san xuat:";getline(cin,b.noi_sx);
		}
		friend ostream& operator<<(ostream &out,banhkeo b){
			out<<(mathang)b;
			out<<"\nnoi san xuat:"<<b.noi_sx;
		}
};
int main()
{
	int n;
	cout<<"nhap so luong banh keo:";cin>>n;
	banhkeo b[n];
	cout<<"nhap thong tin banh keo\n";
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin dt thu:"<<i+1<<endl;
		cin>>b[i];
	}
	cout<<"\nthong tin mat hang ma khac MOI";
	for(int i=0;i<n;i++){
		if(b[i].getMa()!="MOI"){
			cout<<b[i];
		}
	}
}
