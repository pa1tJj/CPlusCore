#include<bits/stdc++.h>
using namespace std;
//lk don

struct Node{
	int data;
	Node *next;
};
typedef struct Node* node;
int size(node a){
	int dem=0;
	while(a!=nullptr){
		dem++;
		a=a->next;
	}
	return dem;
}
node newnode(int x){
	node tmp=new Node();
	if(tmp!=nullptr){
		tmp->data=x;
		tmp->next=nullptr;
	}
	return tmp;
}
void themdau(node &a,int x){
	node pat=newnode(x);
	if(a==nullptr){
		a=pat;
	}else{
		pat->next=a;
		a=pat;
	}
}
void themcuoi(node &a,int x){
	node pat=newnode(x);
	if(a==nullptr){
		a=pat;
	}else{
		node p=a;
		while(p->next!=nullptr){
			p=p->next;
		}
		p->next=pat;
	}
}
void thempos(node &a,int x,int pos){
	int n=size(a);
	node pat=newnode(x);
	if(pos<=0 || pos>n+1){
		cout<<"vi tri k hop le";
	}
	if(pos==1){
		themdau(a,x);
		return;
	}else if(n==pos+1){
		themcuoi(a,x);
		return;
	}else{
		node p=a;
		for(int i=1;i<pos-1;i++){
			p=p->next;
		}
		pat->next=p->next;
		p->next=pat;
	}
}
void xoadau(node &a){
	if(a==nullptr){
		return;
	}else{
		node p=a;
		a=a->next;
		delete p;
	}
}
void xoacuoi(node &a){
	if(a==nullptr){
		return;
	}else{
		node truoc=nullptr,sau=a;
		while(sau->next!=nullptr){
			truoc=sau;
			sau=sau->next;
		}
		if(truoc==nullptr){
			a=nullptr;
			delete sau;
		}else{
			truoc->next=nullptr;
			delete sau;
		}
	}
}
void xoapos(node &a,int pos){
	int n=size(a);
	if(pos<=0 || pos>n+1){
		return;
	}else{
		node truoc=nullptr,sau=a;
		for(int i=1;i<pos;i++){
			truoc=sau;
			sau=sau->next;
		}
		if(truoc==nullptr){
			a=a->next;
			delete sau;
		}else{
			truoc->next=sau->next;
			delete sau;
		}
	}
}
void timkiem(node &a,int x){
	node p=a;
	int cnt=0;
	while(p->next!=nullptr){
		cnt++;
		if(p->data==x){
			cout<<"node co gia tri "<<x<<" nam o vi tri:"<<cnt;
		}
		p=p->next;
	}
	if(p->data==x){
		cnt++;
		cout<<"node co gia tri "<<x<<" nam o vi tri"<<cnt;
	}
}
void sapxep(node &a){
	for(node i=a;i->next!=nullptr;i=i->next){
		node min=i;
		for(node j=i->next;j!=nullptr;j=j->next){
			if(j->data<min->data){
				min=j;
			}
		}
		swap(i->data,min->data);
	}
}
void in(node a){
	while(a!=nullptr){
		cout<<a->data<<"\t";
		a=a->next;
	}
}
void nhap(node &a,int n){
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		themdau(a,x);
	}
}
//lk doi
/*
struct Node{
	int data;
	Node *next,*prev;
};
typedef struct Node* node;
int size(node a){
	int dem=0;
	while(a!=nullptr){
		dem++;
		a=a->next;
	}
	return dem;
} 
node newnode(int x){
	node tmp=new Node();
	if(tmp!=nullptr){
		tmp->next=nullptr;
		tmp->prev=nullptr;
		tmp->data=x;
	}
	return tmp;
}
void themdau(node &a,int x){
	node pat=newnode(x);
	if(a==nullptr){
		a=pat;
	}else{
		pat->next=a;
		a->prev=pat;
		a=pat;
	}
}
void themcuoi(node &a,int x){
	node pat=newnode(x);
	if(a==nullptr){
		a=pat;
	}else{
		node p=a;
		while(p->next!=nullptr){
			p=p->next;
		}
		p->next=pat;
		pat->prev=p;
	}
}
void thempos(node &a,int x,int pos){
	int n=size(a);
	node pat=newnode(x);
	if(pos<=0 || pos>n){
		return;
	}
	if(n==1){
		themdau(a,x);
		return;
	}else if(pos==n+1){
		themcuoi(a,x);
		return;
	}else{
		node truoc=nullptr,sau=a;
		for(int i=1;i<pos;i++){
			truoc=sau;
			sau=sau->next;
		}
		if(truoc==nullptr){
			truoc=pat;
		}else{
			pat->next=sau;
			sau->prev=pat;
			truoc->next=pat;
			pat->prev=truoc;
		}
	}
}
void xoadau(node &a){
	if(a==nullptr){
		return;
	}else{
		node p;
		if(a->prev==a->next){
			delete a;
			a=nullptr; 
		}else{
			p=a;
			a=a->next;
			a->prev=nullptr;
			delete p;
		}
	}
}
void xoacuoi(node &a){
	if(a==nullptr){
		return;
	}else{
		if(a->prev==a->next){
			delete a;
			a=nullptr;
		}else{
			node p=a;
			while(p->next!=nullptr){
				p=p->next;
			}
			node q=p->prev;
			q->next=nullptr;
			delete p;
		}
	}
}
void xoapos(node &a,int pos){
	int n=size(a);
	if(pos<+0 || pos>n+1)return;
	node truoc=nullptr,sau=a;
	for(int i=1;i<pos;i++){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc==nullptr){
		a=a->next;
		a->next->prev=nullptr;
		delete sau;
	}else if(pos==n){
		truoc->next=sau->next;
		delete sau;
	}else{
		truoc->next=sau->next;
		sau->next->prev=truoc;
		delete sau;
	}
}
void timkiem(node &a,int x)
{
	node p=a;
	int vt=0;
	while(p->next!=nullptr){
		vt++;
		if(p->data==x){
			cout<<"ton tai node co gia tri "<<x<<" nam o vi tri:"<<vt<<endl;	
		}
		p=p->next;
	}
	if(p->data==x){
		vt++;
		cout<<"ton tai node co gia tri "<<x<<" nam o vi tri:"<<vt<<endl;
	}
}
void sapxep(node &a){
	for(node i=a;i->next!=nullptr;i=i->next){
		node min=i;
		for(node j=i->next;j!=nullptr;j=j->next){
			if(j->data<min->data){
				min=j;
			}
		}
		swap(i->data,min->data);
	}
}
void nhap(node &a,int n){
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		themcuoi(a,x);
	}
}
void in(node a)
{
	while(a!=nullptr){
		cout<<a->data<<"\t";
		a=a->next;
	}
}
*/
int main()
{
	int n;
	node a=nullptr;
	while(true){
		cout<<"\n1.them vao dau";
		cout<<"\n2.them vao cuoi";
		cout<<"\n3.them vt pos";
		cout<<"\n4.nhap phan tu";
		cout<<"\n5.xoa dau";
		cout<<"\n6.xoa cuoi";
		cout<<"\n7.xoa pos";
		cout<<"\n8.tim kiem node";
		cout<<"\n9.sap xep node";
		cout<<"\n0.in ra";
		int c;
		cout<<"\nchon menu:";cin>>c;
		int x;
		if(c==1){
			cout<<"nhap gt them:";cin>>x;
			themdau(a,x); 
		}else if(c==2){
			cout<<"nhap gt them:";cin>>x;
			themcuoi(a,x);
		}else if(c==3){
			int pos;
			cout<<"nhap gt them:";cin>>x;
			cout<<"nhap vt them:";cin>>pos;
			thempos(a,x,pos);
		}else if(c==4){
			cout<<"Nhap so luong phan tu:";cin>>n;
			nhap(a,n);
		}else if(c==5){
			xoadau(a);
		}else if(c==6){
			xoacuoi(a);
		}else if(c==7){
			int pos;
			cout<<"Nhap vt coa:";cin>>pos;
			xoapos(a,pos);
		}else if(c==8){
			cout<<"nhap gt node can tim:";cin>>x;
			timkiem(a,x);
		}else if(c==9){
			sapxep(a);
		}else if(c==0){
			in(a);
		}
	}
}
