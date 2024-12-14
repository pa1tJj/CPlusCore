#include<bits/stdc++.h>
using namespace std;
class ptgt{
	protected:
	char hsx[30];
	float nam,giact;
    public:
    	ptgt(){
    		strcpy(hsx,"");
    		nam=giact=0;
		}
		~ptgt(){
		}
		void nhap(){
			cin.ignore();
			cout<<"nhap hang san xuat:";cin.getline(hsx,30);
			cout<<"nhap nam san xuat:";cin>>nam;
			cout<<"nhap gia chua thue:";cin>>giact;
		}
		void in(){
			cout<<"\nhang sx:"<<hsx;
			cout<<"\nnam san xuat:"<<nam;
			cout<<"\ngia chua thue:"<<giact;
		}
};
class xekhach:public ptgt{
	int sot,sog;
	public:
		xekhach():ptgt(){
			sot=sog=0;
		}
		~xekhach(){
		}
		friend istream& operator>>(istream& in,xekhach &x){
			cout<<"nhap so tuyen:";in>>x.sot;
			cout<<"nhap so ghe:";in>>x.sog;
		}
		float giast(){
			return giact+giact*0.08;
		}
		friend bool operator<(int a,xekhach x){
			return a<x.sog;;
		}
		friend ostream& operator<<(ostream& out,xekhach c){
			out<<"\nso tuyen:"<<c.sot;
			out<<"\nso ghe:"<<c.sog;
			out<<"\ngia sau thue:"<<c.giast();
		}
		void nhap(){
			ptgt::nhap();
		}
		void in(){
			ptgt::in();
		}
};
int main()
{
	int n;
	cout<<"nhap so ptgt:";cin>>n;
	ptgt p[n];
	cout<<"nhap thong tin ptgt";
	for(int i=0;i<n;i++){
		cout<<"\nnhap ptgt thu:"<<i+1<<endl;
		p[i].nhap();
	}
	cout<<"HIEN THI PTGT";
	for(int i=0;i<n;i++){
		p[i].in();
	}
	xekhach x[n];
	cout<<"\nnhap thong tin xe khach";
	for(int i=0;i<n;i++){
		cout<<"\nnhap thong tin xe khach thu:"<<i+1<<endl;
		x[i].nhap();
		cin>>x[i];
	}
	cout<<"xe khach co so ghe lon hon 29\n";
	for(int i=0;i<n;i++){
		if(29<x[i]){
			x[i].in();
			cout<<x[i];
		}
	}
}
