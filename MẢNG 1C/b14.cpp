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
	cout<<a[i]<<"\t";
}
bool sohh(int &shh)
{
	int s=0;
	for(int i=1;i<=shh/2;i++){
		if(shh%i==0){
			s=s+i;
		}
	}
		if(s==shh){
			return true;
		}else{
			return false;
		}
}
void xuat_shh(int a[],int n)
{
	
	for(int i=1;i<=n;i++){
		if(sohh(a[i])){
			cout<<a[i]<<"\t";
		}
	}
}
int main()
{
	int n,a[n];
	cout<<"nhap so ptu:";cin>>n;
	cout<<"nhap gt mang\n";
	nhap(a,n);
	cout<<"xuat gt mang\n";
	xuat(a,n);
	cout<<"\ncac so hoan hao la:";
	xuat_shh(a,n);
}
