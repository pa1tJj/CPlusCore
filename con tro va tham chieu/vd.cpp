#include<iostream>
using namespace std;
main()
{
	int n,*ptr;
	cout<<"nhap so phan tu:";cin>>n;
	ptr=new int;
	if(ptr!=NULL){
		for(int i=0;i<n;i++)
		*(ptr+i)=i;
		for(int i=n;i>0;i--)
		cout<<*(ptr+(i-1))<<"\t";
		delete ptr;
		return 0;
	}else{
		cout<<"k du bo nho de cap phat";
		return 1;
	}
}
