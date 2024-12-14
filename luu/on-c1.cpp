#include<bits/stdc++.h>
using namespace std;
class tau{
	protected:
	string hsx,nam;
	float vt;
	public:
		tau(){
			hsx=nam=" ";
			vt=0;
		}
		tau(string hsx,string nam,float vt){
			this->hsx=hsx;
			this->nam=nam;
			this->vt=vt;
		}
		~tau(){
		}
		void nhap();
		void in();
};
void tau::nhap(){
	cin.ignore();
	cout<<"nhap hang san xuat:";getline(cin,hsx);
	cout<<"nhap nam san xuat:";getline(cin,nam);
	cout<<"nhap van toc toi da:";cin>>vt;
}
void tau::in(){
	cout<<"\nhang san xuat:"<<hsx;
	cout<<"\nnam san xuat:"<<nam;
	cout<<"\nvan toc toi da:"<<vt;
}
class tauchien:public tau{
	string loai;
	float tt;
	public:
		tauchien(){
			loai=" ";
			tt=0;
		}
		tauchien(string hsx,string nam,float vt,float tt):tau(hsx,nam,vt){
			this->tt=tt;
		}
		friend istream& operator>>(istream &in,tauchien &t);
		int tinh_tien_sua_chua();
		friend bool operator>(tauchien x,tauchien y);
		friend ostream& operator<<(ostream &out,tauchien t);
		void nhap();
		void in();
};
istream& operator>>(istream &in,tauchien &t){
	in.ignore();
	cout<<"nhap loai tau chien:";getline(cin,t.loai);
	cout<<"nhap trong tai tau chien:";in>>t.tt;
}
ostream& operator<<(ostream &out,tauchien t){
	out<<"\nloai:"<<t.loai;
	out<<"\ntrong tai:"<<t.tt;
	out<<"\ntien sua chua la:"<<t.tinh_tien_sua_chua();
}
int tauchien::tinh_tien_sua_chua(){
	int n=stoi(nam);
	if(n<1990){
		return 50;
	}else if(n>=1991 && n<=2000){
		return 30;
	}else{
		return 10;
	}
}
bool operator>(tauchien x,tauchien y){
	return x.tt<y.tt;
}
void tauchien::nhap(){
	tau::nhap();
}
void tauchien::in(){
	tau::in();
}
int main()
{
	int n;
	cout<<"nhap so luong tau:";cin>>n;
	tau t[n];
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin tau thu:"<<i+1<<endl;
		t[i].nhap();
	}
	cout<<"\nHIEN THI DANH SACH TAU";
	for(int i=0;i<n;i++){
		t[i].in();
	}
	tauchien tc[n];
	cout<<"\nnhap thong tin tau chien";
	for(int i=0;i<n;i++){
		cout<<"\nnhap thong tin tau chien thu:"<<i+1<<endl;
		tc[i].nhap();
		cin>>tc[i];
	}
	cout<<"\nDANH SACH TAU CHIEN TANG DAN TRONG TAI";
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(tc[j]>tc[i]){
				swap(tc[i],tc[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		tc[i].in();
		cout<<tc[i];
	}
}
