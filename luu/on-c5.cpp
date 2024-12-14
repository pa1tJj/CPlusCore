#include<bits/stdc++.h>
using namespace std;
class nguoild{
	protected:
	string ma,ht,cv;
	float hsl;
	public:
		nguoild(){
			ma=ht=cv="";
			hsl=0;
		}
		~nguoild(){
		}
		
		void nhap(){
			cin.ignore();
			cout<<"nhap ma:";getline(cin,ma);
			cout<<"nhap ho ten:";getline(cin,ht);
			cout<<"nhap chuc vu:";getline(cin,cv);
			cout<<"nhap he so luong:";cin>>hsl;
		}
		void in(){
			cout<<"\nma:"<<ma;
			cout<<"\nho ten:"<<ht;
			cout<<"\nchuc vu:"<<cv;
			cout<<"\nhsl:"<<hsl;
		}
		
};
class lanhdao:public nguoild{
	int sonam;
	public:
		lanhdao():nguoild(){
			sonam=0;
		}
		~lanhdao(){
		}
		friend istream& operator>>(istream& in,lanhdao &l){
			cout<<"nhap so nam:";in>>l.sonam;
		}
		float phucap(){
			if(cv=="GD"){
				cout<<500;
			}else if(cv=="TP"){
				cout<<300;
			}else{
				cout<<200;
			}
		}
		bool operator>(lanhdao l){
			return this->sonam>l.sonam;
		}
		friend ostream& operator<<(ostream& out,lanhdao l){
			out<<"\nso nam:"<<l.sonam;
			out<<"\nphu cap:";
			l.phucap();
		}
		void nhap(){
			nguoild::nhap();
		}
		void in(){
			nguoild::in();
		}
};
int main()
{
	int n;
	cout<<"nhap luong ngld:";cin>>n;
	nguoild nld[n];
	cout<<"nhap thong tin nguoi lao dong";
	for(int i=0;i<n;i++){
		cout<<"\nnhap thong tin nguoi lao dong thu:"<<i+1<<endl;
		nld[i].nhap();
	}
	cout<<"HIEN THI THONG TIN NG LD";
	for(int i=0;i<n;i++){
		nld[i].in();
	}
	lanhdao l[n];
	cout<<"\nnhap thong tin lanh dao";
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin lanh dao thu:"<<i+1<<endl;
		cin>>l[i];
	}
	cout<<"\nDANH SACH LANH DAO THEO THU TU TANG DAN SO NAM CT";
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(l[min]>l[j]){
				min=j;
			}
		}
		swap(l[i],l[min]);
	}
	for(int i=0;i<n;i++){
		nld[i].in();
		cout<<l[i];
	}
}
