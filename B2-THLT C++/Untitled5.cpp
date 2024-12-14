#include<iostream>
using namespace  std;
main()
{
	int a,b,c,max,min,chon;
	cout<<"1.tinh a+b+c\n";
	cout<<"2.tinh a*b*c\n";
	cout<<"3.tim max   \n";
	cout<<"4.tim min   \n";
	cout<<"nhap vao so t1:";cin>>a;
	cout<<"nhap vao so t2:";cin>>b;
	cout<<"nhap vao so t3:";cin>>c;
	cout<<"chon:";
	cin>>chon;
	switch(chon){
		case 1:
			cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c;break;
		case 2:
			cout<<a<<"*"<<b<<"*"<<c<<"="<<a*b*c;break;
		case 3:
			max=a;
			if(b>max){
				max=b;
			}
			if(c>max){
				max=c;
			}
			cout<<"so lon nhat la:"<<max<<"\n";
	   
		    min=a;
			if(b<min){
				min=b;
			}
			if(c<min){
				min=c;
			}
			cout<<"so nho nhat la:"<<min;
			break;			
	}		
}
