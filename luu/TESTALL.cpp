#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string ma,hoten;
	int tuoi;
};
struct Node{
	sinhvien s;
	Node *next;
};
typedef struct Node* sv;
sv makesv()
{
	sinhvien x;
	cin.ignore();
	cout<<"nhap ho ten:";getline(cin,x.hoten);
	cout<<"nhap ma:";getline(cin,x.ma);
	cout<<"nhap tuoi:";cin>>x.tuoi;
	sv tmp=new Node();
	if(tmp!=nullptr){
		tmp->next=nullptr;
	    tmp->s=x;
	}
	
	return tmp;
}
int size(sv a)
{
	int dem=0;
	while(a!=nullptr){
		dem++;
		a=a->next;
	}
	return dem;
}
void chen_dau(sv &a)
{
	sv pat=makesv();
	if(a==nullptr){
		a=pat;
	}else{
		pat->next=a;
		a=pat;
	}
}
void chen_cuoi(sv &a)
{
	sv pat=makesv();
	if(a==nullptr){
		a=pat;
	}else{
		sv p=a;
		while(p->next!=nullptr){
			p=p->next;
		}
		p->next=pat;
	}
}
void chen_pos(sv &a,int pos)
{
	int n=size(a);
	sv pat=makesv();
	if(pos<=0 || pos>n+1){
		cout<<"vi tri k hop le\n";
	}
	if(n==1){
		chen_dau(a);
		return;
	}else if(n==pos+1){
		chen_cuoi(a);
		return;
	}else{
		sv p=a;
		for(int i=1;i<pos-1;i++){
			p=p->next;
		}
		pat->next=p->next;
		p->next=pat;
	}
}
void xoa_dau(sv &a)
{
	if(a==nullptr){
		return;
	}else{
		a=a->next;
	}
}
void xoa_cuoi(sv &a)
{
	if(a==nullptr){
		return;
	}else{
		sv truoc=nullptr,sau=a;
		while(sau->next!=nullptr){
			truoc=sau;
			sau=sau->next;
		}
		if(truoc==nullptr){
			a=nullptr;
		}else{
			truoc->next=nullptr;
		}
	}
}
void xoa_pos(sv &a,int pos)
{
	sv truoc=nullptr,sau=a;
	if(pos<=0 || pos>size(a)){
		cout<<"vi tri k hop le\n";
	}else{
		for(int i=1;i<pos;i++){
			truoc=sau;
		    sau=sau->next;
	    }
	    if(truoc==nullptr){
	    	a=a->next;
		}else{
			truoc->next=sau->next;
		}
	}
}
void sx_sv(sv &a)
{
	sinhvien s;
	for(sv i=a;i->next!=nullptr;i=i->next){
		sv min=i;
		for(sv j=a->next;j!=nullptr;j=j->next){
			if(j->s.tuoi>min->s.tuoi){
				min=j;
			}
		}
		swap(min->s.tuoi,i->s.tuoi);
	}
}
void in(sinhvien x)
{
	cout<<"\nho ten:"<<x.hoten;
	cout<<"\nma sv:"<<x.ma;
	cout<<"\ntuoi:"<<x.tuoi;
}
void duyet(sv a)
{
	while(a!=nullptr){
		in(a->s);
		a=a->next;
	}
}
int main()
{
	sv x=nullptr;
	while(1){
		cout<<"\n----------MENU-------------";
		cout<<"\n1.chen sv vao dau ds";
		cout<<"\n2.chen sv vao cuoi ds";
		cout<<"\n3.chen sx vao vi tri pos";
		cout<<"\n4.in ra thong tin ds";
		cout<<"\n5.xoa sv dau ds";
		cout<<"\n6.xoa sv cuoi ds";
		cout<<"\n7.xoa sinh vien vi tri pos";
		cout<<"\n8.sap xep sv theo tuoi";
		cout<<"\n9.in ds sv";
		int c;
		cout<<"\nchon menu:";cin>>c;
		if(c==1){
			chen_dau(x);
		}else if(c==2){
			chen_cuoi(x);
		}else if(c==3){
			int pos;
			cout<<"nhap vi tri can chen:";cin>>pos;
			chen_pos(x,pos);
		}else if(c==4){
			duyet(x);
		}else if(c==5){
			xoa_dau(x);
		}else if(c==6){
			xoa_cuoi(x);
		}else if(c==7){
			int pos;
			cout<<"nhap vi tri can xoa:";cin>>pos;
			xoa_pos(x,pos);
		}else if(c==8){
			sx_sv(x);
		}else if(c==9){
			duyet(x);
		}
	}
}
