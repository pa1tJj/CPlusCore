#include<iostream>
using namespace std;
main()
{
	char nhap,tt;
	float x,y;
	cout<<"nhap  so:";cin>>x>>y;
	cout<<"nhap toan tu:";cin>>tt;
	switch(tt){
		case '+':
			cout<<x<<"+"<<y<<"="<<x+y;break;
		case '-':
			cout<<x<<"-"<<y<<"="<<x-y;break;
		case '*':
			cout<<x<<"*"<<y<<"="<<x*y;break;	
		case '/':
			if(y!=0){
				cout<<x<<"/"<<y<<"="<<x/y;
			}
		    else{
		    	cout<<"khong thuc hien duoc";
			}	
	}
}
