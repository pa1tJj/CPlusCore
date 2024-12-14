#include<bits/stdc++.h>
using namespace std;
void doc_ghi()
{
	string data;
	int tuoi;
	ofstream outf;
	outf.open("mydocument.txt");
	cout<<"nhap ten:";getline(cin,data);
	outf<<data<<endl;
	cout<<"nhap tuoi:";cin>>tuoi;
	cin.ignore();
	outf<<tuoi<<endl;
	outf.close();
	ifstream inf;
	inf.open("mydocument.txt");
	inf>>data;
	cout<<data<<endl;
	inf>>tuoi;
	cout<<tuoi<<endl;
	inf.close();
}
void ghi()
{
	string ten;
	int tuoi;
	ofstream out("mydoc.txt");
	cout<<"nhap ten:";getline(cin,ten);
	cout<<"nhap tuoi:";cin>>tuoi;
	out<<ten<<endl;
	out<<tuoi<<endl;
	out.close();
}
void doc()
{
	ifstream in("mydoc.txt");
	string s;
	int t;
	in>>s>>t;
	cout<<s<<endl;
	cout<<t<<endl;
	in.close();
}
int kt(int n)
{
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void nt(int n)
{
	ofstream out("songuyento.txt");
	if(!out){
		cout<<"cannot opem file";
	}else{
		cout<<"file da duoc ghi";
	}
	for(int i=2;i<n;i++){
		if(kt(i)==true){
			out<<i<<"\t";
		}
	}
	out.close();
}
void docnt(int n)
{
	ifstream in("songuyento.txt");
	if(!in){
		cout<<"cannot open file";
	}else{
		cout<<"\nfile da duoc doc\n";
	}
	int nt;
	for(int i=2;i<n;i++){
		if(kt(i)==true){
			in>>nt;
	cout<<nt<<"\t";
		}
	}
	in.close();
}
//ghi du lieu vao file da co san 
void ghi_data_vao_file(char *filename)
{
	if(filename!=NULL){
		fstream data;
		data.open(filename,ios::out);
		data<<"in du lieu vao";
		data<<"\nda in";
		data.close();
	}
}
//doc du lieu tu file da co san
void doc_data_tu_file(char *filename)
{
	fstream doc;
	doc.open(filename,ios::in);
	if(doc==NULL){
		cout<<"cannot open file";
	}else{
		while(!doc.eof()){
			int n;
			doc>>n;
			cout<<n<<"\t";
		}
	}
	
}
int random(int n)
{
	for(int i=0;i<n;i++){
		cout<<rand()<<"\t";
	}
}
void ghi_file(int n)
{
	ofstream out("random.txt");
	if(!out){
		cout<<"cannot open file";
	}else{
		cout<<"file da duoc ghi";
	}
	out<<random(n);
	out.close();
}
void doc_file(int n)
{
	ifstream in("random.txt");
	if(!in){
		cout<<"cannot open file";
	}else{
		cout<<"\nfile da duoc doc\n";
	}
	int rd;
	for(int i=0;i<n;i++){
		rd=rand();
		in>>rd;
		cout<<rand()<<"\t";
	}
	in.close();
}
struct sinhvien{
	string ten,ma;
	int tuoi;
	float diem;
};
sinhvien sv[100];
void nhap(sinhvien sv[],int n)
{
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin sinh vien thu:"<<i+1;
		cout<<"\nnhap ma sinh vien:";cin>>sv[i].ma;
		cin.ignore();
		cout<<"nhap ten sinh vien:";getline(cin,sv[i].ten);
		cout<<"nhap tuoi sinh vien:";cin>>sv[i].tuoi;
		cout<<"nhap diem sinh vien:";cin>>sv[i].diem;
	}
}
void in(sinhvien sv[],int n)
{
	cout<<"|"<<setw(20)<<"ten sinh vien";
	cout<<"|"<<setw(20)<<"ma sinh vien";
	cout<<"|"<<setw(20)<<"tuoi sinh vien";
	cout<<"|"<<setw(20)<<"diem"<<"|"<<setw(5)<<"\n";
	for(int i=0;i<n;i++){
		cout<<"|"<<setw(20)<<sv[i].ten;
		cout<<"|"<<setw(20)<<sv[i].ma;
		cout<<"|"<<setw(20)<<sv[i].tuoi;
		cout<<"|"<<setw(20)<<sv[i].diem<<"|"<<setw(5)<<"\n";
	}
}
void ghi_file_sv(sinhvien sv[],int n)
{
	ofstream out("sinhvien.txt");
	if(!out){
		cout<<"cannot open file";
	}else{
		cout<<"file da duoc ghi";
	}
	out<<"|"<<setw(20)<<"ten sinh vien";
	out<<"|"<<setw(20)<<"ma sinh vien";
	out<<"|"<<setw(20)<<"tuoi sinh vien";
	out<<"|"<<setw(20)<<"diem"<<"|"<<setw(5)<<"\n";
	for(int i=0;i<n;i++){
		out<<"|"<<setw(20)<<sv[i].ten;
		out<<"|"<<setw(20)<<sv[i].ma;
		out<<"|"<<setw(20)<<sv[i].tuoi;
		out<<"|"<<setw(20)<<sv[i].diem<<"|"<<setw(5)<<"\n";
	}
	out.close();
}
void doc_file_sv(sinhvien sv[],int n)
{
	ifstream in("sinhvien.txt");
	if(!in){
		cout<<"cannot read file";
	}else{
		cout<<"\ndoc file\n";
	}
	for(int i=0;i<n;i++){
		in>>sv[i].ten;
		in.ignore();
		in>>sv[i].ma;
		in>>sv[i].tuoi;
		in>>sv[i].diem;
	}
	cout<<"|"<<setw(20)<<"ten sinh vien";
	cout<<"|"<<setw(20)<<"ma sinh vien";
	cout<<"|"<<setw(20)<<"tuoi sinh vien";
	cout<<"|"<<setw(20)<<"diem"<<"|"<<setw(5)<<"\n";
	for(int i=0;i<n;i++){
		cout<<"|"<<setw(20)<<sv[i].ten;
		cout<<"|"<<setw(20)<<sv[i].ma;
		cout<<"|"<<setw(20)<<sv[i].tuoi;
		cout<<"|"<<setw(20)<<sv[i].diem<<"|"<<setw(5)<<"\n";
	}
}
//ghi mot mang
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void ghi_mang(int a[],int n)
{
	ofstream out("mang.txt");
	if(!out){
		cout<<"mang chua duoc ghi";
	}else{
		cout<<"ghi file mang thanh cong";
	}
	for(int i=0;i<n;i++){
		out<<a[i]<<"\t";
	}
}
int main()
{
	//doc du lieu tu file
	ifstream filein;
	filein.open("test.txt",ios::in);
	if(filein.eof()==true){
		cout<<"file k ton tai";
		return 0;
	}
	int x,y;
	filein>>x;
	filein>>y;
	cout<<"x+y="<<x+y;
	cout<<"file ton tai";
	//ghi du lieu vao file
	ofstream fileout;
	fileout.open("test1.txt",ios::out);
	fileout<<x+y;
	return 0;
}
