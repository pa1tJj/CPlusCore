#include<iostream>
using namespace std;
void nhap(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++){
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];
	}
	cout<<"\n";
}
void xuat(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<"\t"<<a[i][j];
	}
	cout<<"\n";
	}
}
void tichmt(int a[][100],int b[][100],int tich[][100],int m,int n,int p)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<p;j++){
		for(int t=0;t<n;t++){
			tich[i][j]=0; 
		    tich[i][j]=tich[i][j]+a[i][t]*b[t][j];
	    }
	}
}
int main()
{
	int ma,na,mb,nb,p,a[100][100],b[100][100],tich[100][100]={0};
	cout<<"nhap so hang mt A:";cin>>ma;
	cout<<"nhap so cot mtA:";cin>>na;
	cout<<"nhap gt ma tran A:\n";
	nhap(a,ma,na);
	
	cout<<"nhap so hang mt B:";cin>>mb;
	cout<<"nhap so cot mt B:";cin>>nb;
	cout<<"nhap gt ma tran B:\n";
	nhap(b,mb,nb);
	if(na!=mb){
		cout<<"k thuc hien dc tich 2 ma tran";
	}else
	cout<<"ma tran A:\n";
	xuat(a,ma,na);
	cout<<"ma tran B:\n"; 
	xuat(b,mb,nb);
	cout<<"tich ma tran A.B:\n";
	tichmt(a,b,tich,ma,na,nb);
	xuat(tich,ma,nb);
}
