#include<iostream>
#include<string.h>
using namespace std;
void xoa(char *ch,int vt)
{
	int i=0,n;
	n=strlen(ch);
	for(i=vt+1;i<n;i++){
		*(ch+i-1)=*(ch+i);
	}
	*(ch+n-1)='\0';
}
void xoa_dau_cau(char *ch)
{
	while(*(ch+0)==' '){
		xoa(ch,0);
	}
}
void xoa_cuoi_cau(char *ch)
{
	int n=strlen(ch);
	while(*(ch+n-1)==' '){
		xoa(ch,n-1);
	}
}
void xoa_giua(char *ch)
{
	int n=strlen(ch);
	for(int j=0;j<=n-1;j++){
		if(*(ch+j)==' '&&*(ch+j+1)==' '){
			xoa(ch,j);
			j--;
		}
	}
}
int main()
{
	char a[50];
	int n;
	char *ch=a;
	cout<<"nhap xau:";
	cin.getline(ch,50);
	xoa_dau_cau(ch);
	xoa_cuoi_cau(ch);
	xoa_giua(ch);
	cout<<"xau sau khi chuan hoa la:"<<ch;	
}

