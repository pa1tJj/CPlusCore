#include<iostream>
using namespace std;
template<class X,class Y>
class nhanvien{
	X ma,hoten;
	Y hsl,ngaycong;
	public:
		void nhap(nhanvien nv[],int n){
			for(int i=0;i<n;i++){
				cin.ignore();
				cout<<"nhap ma:";getline(cin,ma);
				cout<<"nhap ho ten:";getline(cin,hoten);
				cout<<"nhap he so luong:";cin>>hsl;
				cout<<"nhap ngay cong:";cin>>ngaycong;
			}
		}
		void in(nhanvien nv[],int n){
			for(int i=0;i<n;i++){
				cout<<"\nma:"<<ma;
				cout<<"\nho ten:"<<hoten;
				cout<<"\nhe so luong:"<<hsl;
				cout<<"\nngay cong:"<<ngaycong;
			}
		}
};
int main(){
	int n;
	cout<<"nhap so luong nhan vien:";cin>>n;
	nhanvien<string,int> nv[n],x;
	x.nhap(nv,n);
	x.in(nv,n);
	
}
