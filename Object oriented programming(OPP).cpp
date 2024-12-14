#include<bits/stdc++.h>
using namespace std;
/*
//class
class tenclass{
	private:
		string name,id,birt;
		int gpa;
	public:
		tenclass();//constructor
		tenclass(string,string,string,int );
		void xinchao();
		void chaocc();
		~tenclass();//ham huy
};
tenclass::tenclass(string ten,string ma,string ns,int diem){
	name=ten;
	id=ma;
	birt=ns;
	gpa=diem;
}
tenclass::tenclass(){
	cout<<"doi tuong dc tao\n";
	name=id=birt=" ";
	gpa=0;
}
void tenclass::xinchao(){
	cout<<"chao con me may a!\n";
}
void tenclass::chaocc(){
	cout<<"chao con cac :)))\n";
}
tenclass::~tenclass(){
	cout<<"da huy\n";
}
void t(){
	tenclass x;
}
int main()
{
	t();
	tenclass x;
	x.xinchao();
	x.chaocc();
}
*/
/*
class sinhvien{
	private:
		string ten,id,ns;
		float gpa;
	public:
		sinhvien();
		sinhvien(string,string,string,float);
		void nhap();
		void in();
};
sinhvien::sinhvien(){
	this->id=this->ten=this->ns=" ";
	this->gpa=0;
}
sinhvien::sinhvien(string id,string ten,string ns,float gpa)
{
	this->id=id;
	this->ten=ten;
	this->ns=ns;
	this->gpa=gpa;
}
void sinhvien::nhap(){
	cout<<"nhap thong tin sinh vien\n";
	cout<<"nhap id:";cin>>this->id;
	cin.ignore();
	cout<<"nhap ten:";
	getline(cin,this->ten);
	cout<<"nhap ngay sinh:";cin>>this->ns;
	cout<<"nhap diem:";cin>>this->gpa;
}
void sinhvien::in(){
	cout<<this->ten<<" "<<this->id<<" "<<this->ns<<fixed<<setprecision(2)<<" "<<this->gpa<<endl;
}
int main()
{
	sinhvien x;
	x.nhap();
	x.in();
}
*/
/*
//vd class ve nhap xuat sinh vien
class sv{
	private:// thuoc tinh -chi co he truy cap ben trong lop
		string ten,id,ns;
	    double d;
	public://phuong thuc-co the truy cap ben ngoai lop
		void nhap();
		void in();
		double gogpa();
		~sv();
};
void sv::nhap(){
	cout<<"nhap thong tin sinh vien\n";
	cout<<"nhap id:";cin>>id;
	cin.ignore();
	cout<<"nhap ten sinh vien:";getline(cin,ten);
	cout<<"nhap ngay sinh:";cin>>ns;
	cout<<"nhap diem:";cin>>d;
}
void sv::in(){
	cout<<ten<<"\t"<<id<<"\t"<<ns<<fixed<<"\t"<<d<<endl;
}
double sv::gogpa(){
	return d;
}
bool cmp(sv a,sv b)
{
	return a.gogpa()>b.gogpa();
}
int main()
{
	sv a[100];
	int n;cin>>n;
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		a[i].in();
	}
}
*/
/*
//bien static
class sv{
	private:
		string ten,id,ns;
		double gpa;
		static int dem;
	public:
		void nhap();
		void in();
		void tangdem();
		int godem();
};
int sv::dem=0;

void sv::nhap()
{
	++dem;
	this->id="SV"+string(3-to_string(dem).length(),'0')+to_string(dem);
	cout<<"nhap thong tin sinh vien\n";
	cout<<"nhap ten sinh vien:";getline(cin,ten);
	cout<<"nhap ngay sinh:";cin>>ns;
	cout<<"nhap diem cua snh vien:";cin>>gpa;
	cin.ignore();
}
void sv::in(){
	cout<<ten<<" "<<id<<" "<<ns<<fixed<<" "<<gpa<<endl;
}
int main()
{
	sv x;
	x.nhap();
	x.in();
	sv y;
	y.nhap();
	y.in();
}
*/
/*
//friend function
class sv{
	private:
		string ten,id,ns;
		float gpa;
	public:
		void nhap();
		void in();
		friend void anhemcc(sv);
		friend void chuanhoa(sv&);
};
void sv::nhap(){
	cout<<"nhap thong tin sinh vien\n";
	cout<<"nhap id:";cin>>id;
	cin.ignore();
	cout<<"nhap ten sinh vien:";getline(cin,ten);
	cout<<"nhap ngay sinh:";cin>>ns;
	cout<<"nhap diem cua sinh vien:";cin>>gpa;
}
void sv::in(){
	cout<<ten<<" "<<id<<" "<<ns<<fixed<<" "<<gpa<<endl;
}
void chuanhoa(sv &a){
	string res=" ";
	stringstream ss(a.ten);
	string t;
	while(ss>>t){
		res+=toupper(t[0]);
		for(int i=0;i<t.length();i++){
			res+=tolower(t[i]);
		}
		res+=" ";
	}
	res.erase(res.length()-1);
	a.ten=res;
}
void anhemcc(sv a){
	cout<<a.ten<<" "<<a.id<<" "<<a.ns<<fixed<<" "<<a.gpa<<endl;
}

int main()
{
	sv x;
	x.nhap();
	chuanhoa(x);
	x.in();
}
*/
/*
class gv;
class sv;
class sv{
	friend class gv;
	private:
		string ten,id,ns;
		float gpa;
	public:
		void nhap();
		void in();
		friend void anhemcc(sv);
		friend void chuanhoa(sv&);
};
void sv::nhap(){
	cout<<"nhap thong tin sinh vien\n";
	cout<<"nhap id:";cin>>id;
	cin.ignore();
	cout<<"nhap ten sinh vien:";getline(cin,ten);
	cout<<"nhap ngay sinh:";cin>>ns;
	cout<<"nhap diem cua sinh vien:";cin>>gpa;
}
void sv::in(){
	cout<<ten<<" "<<id<<" "<<ns<<fixed<<" "<<gpa<<endl;
}
void chuanhoa(sv &a){
	string res=" ";
	stringstream ss(a.ten);
	string t;
	while(ss>>t){
		res+=toupper(t[0]);
		for(int i=0;i<t.length();i++){
			res+=tolower(t[i]);
		}
		res+=" ";
	}
	res.erase(res.length()-1);
	a.ten=res;
}
void anhemcc(sv a){
	cout<<a.ten<<" "<<a.id<<" "<<a.ns<<fixed<<" "<<a.gpa<<endl;
}
class gv{
	private:
		string khoa;
	public:
		void update(sv&);
};
void gv::update(sv &x){
	x.gpa=9.8;
}
int main()
{
	sv x;
	x.nhap();
	gv y;
	y.update(x);
	x.in();
}
*/
/*
//nap chong toan tu
class sv{
	private:
		string ten,id,ns;
		float gpa;
	public:
		void nhap();
		void in();
		friend istream& operator >>(istream &in,sv &a);
		friend ostream& operator <<(ostream &out,sv a);
};
istream& operator >>(istream &in,sv &a)
{
	cout<<"nhap thong tin sinh vien\n";
	cout<<"nhap id:";in>>a.id;
	cout<<"nhap ten sinh vien:";in.ignore();
	getline(in,a.ten);
	cout<<"nhap ngay sinh:";in>>a.ns;
	cout<<"nhap diem cua sinh vien:";in>>a.gpa;
}
ostream& operator <<(ostream &out,sv a)
{
	cout<<a.ten<<" "<<a.id<<" "<<a.ns<<fixed<<" "<<a.gpa<<endl;
}
int main(){
	sv x;
	cin>>x;
	cout<<x;
}
*/
/*
//rut gon phan so
using ll=long long;
ll ucln(ll a,ll b){
	if(b==0) return a;
	return ucln(b,a%b);
}
class ps{
	private:
		ll tu,mau;
	public:
		ps(ll tu,ll mau);
		friend istream& operator >>(istream&,ps&);
		friend ostream& operator <<(ostream&,ps);
		void rutgon();
};
ps::ps(ll tu,ll mau){
	this->tu=tu;
	this->mau=mau;
}
istream& operator >>(istream& in,ps &a){
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator <<(ostream& out,ps a){
	out<<a.tu<<"/"<<a.mau<<endl;
	return out;
}
void ps::rutgon(){
	ll u=ucln(tu,mau);
	tu/=u;
	mau/=u;
}
int main()
{
	ps p(1,1);
	cin>>p;
	p.rutgon();
	cout<<p;
}
*/
/*
using ll=long long ;
ll ucln(ll a,ll b){
	if(b==0)return a;
	return ucln(b,a%b);
}
ll bcnn(ll a,ll b){
	return a/ucln(a,b)*b;
}
class ps{
	private:
		ll tu,mau;
	public:
		ps(ll tu,ll mau);
		friend ostream& operator <<(ostream&,ps);
		friend istream& operator >>(istream&,ps&);
		void rutgon();
		friend ps operator +(ps,ps);
};
ps::ps(ll tu,ll mau){
	this->tu=tu;
	this->mau=mau;
}
istream& operator >>(istream& in,ps &a)
{
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator <<(ostream& out,ps a)
{
	out<<a.tu<<"/"<<a.mau<<endl;
	return out;
}
void ps::rutgon(){
	ll u=ucln(tu,mau);
	tu/=u;
	mau/=u;
}
ps operator +(ps a,ps b)
{
	ll mc=bcnn(a.mau,b.mau);
	ps s(1,1);
	s.tu=mc/a.mau*a.tu+mc/b.mau*b.tu;
	s.mau=mc;
	ll g=ucln(s.tu,s.mau);
	s.tu/=g;s.mau/=g;
	return s;
}
int main()
{
	ps p(1,1),q(1,1);
	cin>>p>>q;
	cout<<p+q;
}
*/
class sv{
	private:
		string ma,ten,ns,lop;
	    float gpa;
	public:
		sv();
		sv(string,string,string,string,float);
		void nhap();
		void in();
		static int dem;
};
sv::sv(){
	this->ten=this->ma=this->ns=this->lop=" ";
	this->gpa=0;
}
sv::sv(string ma,string ten,string ns,string lop,float gpa)
{
	this->ten=ten;
	this->ma=ma;
	this->ns=ns;
	this->lop=lop;
	this->gpa=gpa;
}
int sv::dem=0;
void sv::nhap(){
	++dem;
	this->ma="21103100"+string(3-to_string(dem).length(),'0')+to_string(dem);
	cout<<"nhap thong tin sinh vien\n";
	cin.ignore();
	cout<<"nhap ten sinh vien:";getline(cin,ten);
	cout<<"nhap ns:";cin>>ns;
	cout<<"nhap ten lop:";cin>>lop;
	cout<<"nhap diem cua sinh vien:";cin>>gpa;
}
void sv::in(){
	cout<<ten<<" "<<ma<<" "<<ns<<fixed<<" "<<lop<<" "<<gpa<<endl;
}
int main()
{
	sv a[100];
	int n;
	cout<<"nhap so luong sinh vien:";cin>>n;
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	cout<<"THONG TIN SINH VIEN VUA NHAP\n";
	for(int i=0;i<n;i++){
		a[i].in();
	}
}
