#include<iostream>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=1;i<=n;i++){
	cout<<"a["<<i<<"]=";
	cin>>a[i];
    }
}
void xuat(int a[],int n)
{
	for(int i=1;i<=n;i++)
	cout<<"a["<<i<<"]="<<a[i]<<"\n";
}
void vitri_x(int a[],int n,int x)
{
	int vt=0;
	for(int i=1;i<=n;i++){
		if(x==a[i]){
			vt=i;
			cout<<"gia tri x can tim la "<<"a["<<vt<<"]"<<" nam o vi tri thu "<<vt<<"\n";
		}
	}
}
int main()
{
	int n,a[n],x;
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap gt mang\n";
	nhap(a,n);
	cout<<"xuat gt mang\n";
	xuat(a,n);
	cout<<"nhap gt x can tim:";cin>>x;
	vitri_x(a,n,x);
}
