#include<iostream>
using namespace std;
/*
//con tro
main()
{
	//toan tu &:co tac dung lay dia chi cua 1 bien tu bo nho may tinh
	int a=6;
	int *b;//khai bao ra bien con tro//day la kieu du lieu cua cai bien ma con tro do se tro toi
	b=&a;//con tro b dang tro toi dia chi cua bien a;
	int *c;
	c=b;	
	cout<<"\ngia tri cua bien a:"<<a;
	cout<<"\ndia chi cua bien a:"<<&a;
	//(*b)++;//tang o nho cua bien b
	cout<<"\ngia tri cua bien b:"<<*b;
	cout<<"\ndia chi cua bien b:"<<&b;
	cout<<"\nmien gia tri cua con tro b:"<<b;
	cout<<"\ngia tri cua bien c:"<<*c;
	cout<<"\ndia chi cua bien c:"<<&c;
	cout<<"\nmien gia tri cua bien c:"<<c;
	
}
*/
//con tro vo kieu:con tro nay co the tro den bat ki kieu du lieu nao
//bai tap
void gtln()
{
	int *a,*b,*c;
	int x,y,z;
	a=&x,b=&y,c=&z;
	cin>>x>>y>>z;
	
	int max=0;
	if(x>=y){
		if(x>=z){
			max=x;
		}else{
			max=z;
		}		
	}else if(y>=z){
		max=y;
	}else{
		max=z;
	}
	cout<<"\ngia tri cua bien a:"<<*a;
	cout<<"\ndia chi cua bien x:"<<&x;
	cout<<"\nmien gia tri cua con tro a:"<<a;
	cout<<"\nmax="<<max;
}
void giai_ptbn(int *a,int *b,int *c)
{
	if(*a==0){
		cout<<"\nptvn";
	}else{
		if(*b==0){
			float x1=(*c)/(*a);
			cout<<x1;
		}else if(*c==0){
			float x2=(*b)/(*a);
			cout<<x2;
		}else{
			float x3=(*c-*b)/(*a);
		    cout<<x3;
		}
		
	}
}
void giaithua(int *n)
{
	int p=1;
	for(int i=0;i<*n;i++){
		p=p*i;
	}
	cout<<p;
}
//tham chieu va tham tri
void hv(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
	cout<<"\nvung nho cua a:"<<&a;
	cout<<"\nvung nho cua b:"<<&b;
}
class sv{
	private:
		string ten,ma;
		int tuoi;
	public:
		void nhap(int n);
		void in(int n);
};
sv::nhap(int n)
{
	for(int i=0;i<n;i++)
}
int main()
{
	int a=1,b=4;
	hv(a,b);
	cout<<"\nvung nho cua a trong main:"<<&a;
	cout<<"\nvung nho cua b trong main:"<<&b<<"\n";
	cout<<a<<" "<<b;
}
