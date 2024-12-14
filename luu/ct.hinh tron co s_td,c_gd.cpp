#include<iostream>
#include<math.h>
#include<iomanip>
#define pi 3.14
using namespace std;
struct hinhtron
{
	float bk,dt,cv;
};
hinhtron ht[100];
void nhap(hinhtron ht[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<"ban kinh hinh tron thu "<<i<<":";cin>>ht[i].bk;
	}
}
void gan(float &x,float &y)
{
	float sx;
	sx=x,x=y,y=sx;
}
void dientich(hinhtron ht[],int n)
{
	for(int i=1;i<=n;i++){
		ht[i].dt=pow(ht[i].bk,2)*pi;
	}	
}
void dientich_td(hinhtron ht[],int n)
{
    dientich(ht,n);
	for(int i=1;i<=n;i++)
	{   
	    for(int j=i+1;j<=n;j++)
		    if(ht[i].dt>ht[j].dt&& ht[i].bk>ht[j].bk)
		    {
			    gan(ht[i].dt,ht[j].dt);
			    gan(ht[i].bk,ht[j].bk);
		    }
    }
    {
    	cout<<"|"<<setw(10)<<"ban kinh";
	    cout<<"|"<<setw(10)<<"dien tich"<<"|"<<setw(5)<<"\n";
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"|"<<setw(10)<<ht[i].bk;
	    cout<<"|"<<setw(10)<<ht[i].dt<<"|"<<setw(5)<<"\n";
	}		
}
void chuvi(hinhtron ht[],int n)
{
	for(int i=1;i<=n;i++)
	{
		ht[i].cv=ht[i].bk*2*pi;
	}
}
void chuvi_gd(hinhtron ht[],int n)
{	
    chuvi(ht,n);
	for(int i=1;i<=n;i++)
	{
	    for(int j=i+1;j<=n;j++)
		    if(ht[i].cv<ht[j].cv&& ht[i].bk<ht[j].bk)
		    {
			    gan(ht[i].dt,ht[j].dt);
			    gan(ht[i].bk,ht[j].bk);
		    }
    }
    {
    	cout<<"|"<<setw(10)<<"ban kinh";
	    cout<<"|"<<setw(10)<<"chu vi"<<"|"<<setw(5)<<"\n";
	}
	for(int i=1;i<=n;i++)
	{
		cout<<"|"<<setw(10)<<ht[i].bk;
	    cout<<"|"<<setw(10)<<ht[i].cv<<"|"<<setw(5)<<"\n";
    }   	
}
int main()
{
	int n;
	cout<<"nhap so hinh tron:";cin>>n;
	nhap(ht,n);
	cout<<"danh sach hinh tron co dien tich tang dan\n";
	dientich_td(ht,n);
	cout<<"danh sach hinh tron co chu vi giam dan\n";
	chuvi_gd(ht,n);
}
