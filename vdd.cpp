#include<bits/stdc++.h>
using namespace std;
struct ngaythang 	 
{
	int ng,th,nam;
};
struct sinhvien 	
{
 	string hoten,gt; 
	ngaythang ns;
	float dt,dl,dh;
};
sinhvien  lop[3];
void nhap(sinhvien *p) 
{ 
	cout <<"\nHo ten: "; 
	cin.ignore();
	getline(cin,p->hoten); 
	cout <<"Ngay sinh: ";
	cin>>(p->ns).ng>>(p->ns).th>>(p->ns).nam; 
	cout <<"Gioi tinh: ";
	cin.ignore();
	getline(cin,p->gt);
	cout <<"Diem toan: "; cin>>p->dt;
	cout<<"diem li:";cin>>p->dl;
	cout<<"diem hoa:";cin>>p->dh; 
} 
void nhapds(sinhvien *a) 
{ 
	int sosv = sizeof(lop) / sizeof(sinhvien) ; 
	for(int i=1; i<=sosv;i++) 
		nhap(&a[i]); 
}	
void in(sinhvien x) 
{ 	
	cout << x.hoten << "\t";
	cout <<x.ns.ng <<"/"<<x.ns.th <<"/"<<x.ns.nam <<"\t"; 
	cout << x.gt << "\t";
	cout << x.dt <<"\t";
	cout<<x.dl<<"\t";
	cout<<x.dh<<"\t"<<endl; 
} 
void inds(const sinhvien *a) 
{ 
	int sosv = sizeof(lop) / sizeof(sinhvien); 
	for (int i=1; i<=sosv; i++) 
		in(a[i]) ; 
} 
void sua(sinhvien &r) 
{
 	int chon; 
	do { 
		cout << "1: Sua ho ten" << endl; 
		cout << "2: Sua ngay sinh" << endl; 
		cout << "3: Sua gioi tinh" << endl;
		cout << "4: Sua diem" << endl;
		cout << "0: Thoi" << endl;
		cout <<"Sua(0/1/2/3/4)?"; cin>>chon; 
		cin.ignore(); 
		switch(chon) 
		{ 
		    case 1: getline(cin,r.hoten) ; break;
			case 2: cin>>r.ns.ng>>r.ns.th>>r.ns.nam;break; 
			case 3: getline(cin,r.gt); break;
			case 4: cin >> r.dt ; break;
			case 5:cin>>r.dl;break;
			case 6:cin>>r.dh;break; 
		}   //end switch
	} while(chon); //end do
}    
void suads(sinhvien *a) 
{ 
	int  n;
	cout<<"Chon sinh vien can sua: ";cin>>n; 
	cin.ignore(); 
	sua(a[n]); 
} 
int main() 
{
	cout<<"Nhap danh sach hoc sinh"<<endl;
	nhapds(lop) ; 
	inds(lop);     	//in ds vua nhap
	suads(lop); 
	inds(lop); 		//in ds vua sua
}
