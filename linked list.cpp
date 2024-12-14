#include<bits/stdc++.h>
using namespace std;
/*
struct sinhvien{
	string ten,dc;
	int tuoi;
};
int main()
{
	sinhvien sv;
	sv.ten="phan anh tuan";
	sv.tuoi=19;
	sv.dc="lol";
	int *x=&sv;
	cout<<x->ten<<"\t"<<x->tuoi<<"\t"<<x->dc;
}
*/
// Cac ham trong dslk
/*
struct Node{
	int data;
    Node *next;//luu dia chi tiep theo cua no trong dslk
};
typedef struct Node* node;
//cap phat dong 1 mot node moi voi du lieu la so nguyen x
node makenode(int x)
{
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
//kt rong
bool empty(node a)
{
	return a==NULL;
}
//dem so ptu trong dslk
int size(node a)
{
	int cnt=0;
	while(a!=NULL){
		++cnt;
		a=a->next;//gan dia chi cua node tiep theo cho node hien tai-cho node hien tai nhay sang node tiep theo
	}
	return cnt;
}
//them 1 ptu vao dau dslk
void insertfirst(node &a,int x)
{
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		tmp->next=a;
		a=tmp;
	}
}
//them 1 ptu vao cuoi dslk
void insertlast(node &a,int x)
{
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
void insertmid(node &a,int x,int pos)
{
	int n=size(a);
	if(pos<=0 || pos>n+1){
		cout<<"erorr";
	}
	if(n==1){
		insertfirst(a,x);
		return;
	}else if(n==pos+1){
		insertlast(a,x);return;
	}
	node p=a;
	for(int i=1;i<pos-1;i++){
		p=p->next;
	}
	node tmp=makenode(x);
	tmp->next=p->next;
	p->next=tmp;
}
//xoa ptu dau
void dfirst(node &a){
	if(a==NULL){
		return ;
	}
	a=a->next;
}
//xoa cuoi
void dlast(node &a){
	if(a==NULL)return;
	node truoc=NULL,sau=a;
	while(sau->next!=NULL){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc==NULL){
		a=NULL;
	}else{
		truoc->next=NULL;
	}
}
//xoa o vt bat ki
void dpos(node &a,int pos)
{
	if(pos<=0 || pos>size(a)) return ;
	node truoc=NULL,sau =a;
	for(int i=1;i<pos;i++){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc ==NULL){
		a=a->next;
	}else{
		truoc->next=sau->next;
    }
}
void in(node a)
{
	cout<<"------------------\n";
	while(a!=NULL){
		cout<<a->data<<"\t";
		a=a->next;
	}
}
void sx(node &a)
{
	for(node p=a;p->next!=NULL;p=p->next){
		node min=p;
		for(node q=p->next;q!=NULL;q=q->next){
			if(q->data<min->data){
				min=q;
			}
		}
		int tmp=min->data;
		min->data=p->data;
		p->data=tmp;
	}
}
int main()
{
    node head=NULL;
	while(1){
		cout<<"\tMENU\t\n";
		cout<<"1.chen 1 ptu vao dau ds\n";
		cout<<"2.chen 2 ptu vao cuoi ds\n";
		cout<<"3.chen phan tu vao vt bat ki\n";
		cout<<"4.xoa ptu o dau ds\n";
		cout<<"5.xoa ptu o cuoi ds\n";
		cout<<"6.xoa ptu o vt bat ki\n";
		cout<<"7.duyet dslk\n";
		cout<<"8.sx ptu trong dslk\n";
		cout<<"chon:";
		int chon;
		cin>>chon;
		if(chon==1){
			int x;
			cout<<"nhap gt can chen:";cin>>x;
			insertfirst(head,x);
		}
		else if(chon==2){
			int x;
			cout<<"nhap gt can chen:";cin>>x;
			insertlast(head,x);
		}
		else if(chon==3){
			int x;
			cout<<"nhap gt can chen:";cin>>x;
			int pos;
			cout<<"nhap vt can chen:";cin>>pos;
			insertmid(head,x,pos);
		}
		else if(chon==4){
			dfirst(head);
			cout<<endl;
		}
		else if(chon==5){
			dlast(head);
			cout<<endl;
		}
		else if(chon==6){
			int pos;
			cout<<"nhap vt can xoa:";cin>>pos;
			dpos(head,pos);
		}
		else if(chon==7){
			in(head);
		}
		else if(chon==8){
			sx(head);
			cout<<endl;
		}
	}	
}
*/
//quan li sinh vien bang dslk
struct sinhvien{
	string ten,id;
	int gpa;
};
struct SV{
	sinhvien s;
	SV *next;
};
typedef struct SV* sv;
sv makenode()
{
	sinhvien s;
	cout<<"nhap thong tin sinh vien\n";
	cout<<"nhap ten sinh vien:";cin.ignore();
	getline(cin,s.ten);
	cout<<"nhap ma so sinh vien:";cin>>s.id;
	cout<<"nhap diem cua sinh vien:";cin>>s.gpa;
	sv tmp=new SV();
	tmp->s=s;
	tmp->next=NULL;
	return tmp;
}
bool ktr(sv a)
{
	return a=NULL;
}
int size(sv a)
{
	int dem=0;
	while(a!=NULL){
		++dem;
		a=a->next;
	}
	return dem;
}
void insertf(sv &a)
{
	sv tmp=makenode();
	if(a==NULL){
		a=tmp;
	}
	tmp->next=a;
	a=tmp;
}
void insertl(sv &a)
{
	sv tmp=makenode();
	if(a==NULL){
		a=tmp;
	}else{
		sv p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
void insertmid(sv &a,int pos)
{
	int n=size(a);
	if(pos<=0 || pos>n+1){
		cout<<"erorr";return;
	}
	if(n==1){
		insertf(a);
		return;
	}else if(n==pos+1){
		insertl(a);return;
	}
	sv p=a;
	for(int i=1;i<pos-1;i++){
		p=p->next;
	}
	sv tmp=makenode();
	tmp->next=p->next;
	p->next=tmp;
}
void xoad(sv &a)
{
	if(a==NULL){
		return;
	} 
	a=a->next;
}
void xoac(sv &a)
{
	if(a==NULL)return;
	sv truoc=NULL,sau=a;
	while(sau->next!=NULL){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc==NULL){
		a=NULL;
	}else{
		truoc->next=NULL;
	}
}
void dpos(sv &a,int pos)
{
	if(pos<=0 || pos>size(a)) return ;
	sv truoc=NULL,sau =a;
	for(int i=1;i<pos;i++){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc ==NULL){
		a=a->next;
	}else{
		truoc->next=sau->next;
    }
}
void in(sinhvien s)
{
	cout<<"------------------------\n";
	cout<<"ID:"<<s.id<<endl;
	cout<<"Ho ten:"<<s.ten<<endl;
	cout<<"GPA:"<<fixed<<setprecision(2)<<s.gpa<<endl;
}
void inds(sv a)
{
	cout<<"Danh sach sinh vien\n";
	while(a!=NULL){
		in(a->s);
		a=a->next;
	}
	cout<<endl;
}
void sx(sv &a)
{
	for(sv p=a;p->next!=NULL;p=p->next){
		sv min=p;
		for(sv q=p->next;q!=NULL;q=q->next){
			if(q->s.gpa<min->s.gpa){
				min=q;
			}
		}
		sinhvien tmp=min->s;
		min->s=p->s;
		p->s=tmp;
	}
}
int main()
{
    sv head=NULL;
	while(1){
		cout<<"\tMENU\t\n";
		cout<<"1.chen sv vao dau ds\n";
		cout<<"2.chen sv vao cuoi ds\n";
		cout<<"3.chen sv vao vt bat ki\n";
		cout<<"4.xoa sv o dau ds\n";
		cout<<"5.xoa sv o cuoi ds\n";
		cout<<"6.xoa sv o vt bat ki\n";
		cout<<"7.duyet dslk\n";
		cout<<"8.sx sv trong dslk\n";
		cout<<"chon:";
		int chon;
		cin>>chon;
		if(chon==1){
			insertf(head);
		}
		else if(chon==2){
			insertl(head);
		}
		else if(chon==3){
			int pos;
			cout<<"nhap vt can chen:";cin>>pos;
			insertmid(head,pos);
		}
		else if(chon==4){
			xoad(head);
		}
		else if(chon==5){
			xoac(head);
		}
		else if(chon==6){
			int pos;
			cout<<"nhap vt can xoa:";cin>>pos;
			dpos(head,pos);
		}
		else if(chon==7){
			inds(head);
		}
		else if(chon==8){
			sx(head);
		}
	}	
}
