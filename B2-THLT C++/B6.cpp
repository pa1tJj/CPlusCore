#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b,c,chon;
	cout<<"1.giai bpt ax+b>c\n";
	cout<<"2.giai bpt ax+bx+c=0\n";
	cout<<"3.kiem tra xem la tam giac hay khong,la tam giac gi\n";
	cout<<"nhap so t1:";cin>>a;
	cout<<"nhap so t2:";cin>>b;
	cout<<"nhap so t3:";cin>>c;
	cout<<"chon:";cin>>chon;
	switch(chon){
		case 1:
			cout<<a<<"x"<<"+"<<b<<">"<<c<<"<=>"<<"x>"<<(c-b)/a;
			break;
		case 2:
			int x1,x2,delta;
			cout<<a<<"x*x"<<"+"<<"("<<b<<")"<<"x"<<"+"<<c<<"=0"<<endl;
		if(a==0){
	    if(b==0){
		if(c==0){
            cout<<"pt vo so nghiem";
			}
		else{
			cout<<"pt vo nghiem";
			}
			}
		else{
			cout<<"pt co nghiem duy nhat"<<-c/b;	
			}
	}
	else{
	  delta=(b*b)-(4*a*c);
	  if(delta<0){
  		cout<<"pt vo nghiem";
  	}
  	  if(delta==0){
	  	cout<<"pt co nghiem kep la:"<<-b/2*a;
  	}
	  if(delta>0){
	  	x1=(-b+sqrt(delta))/2;
  		x2=(-b-sqrt(delta))/2;
	  	cout<<"pt co 2 nghiem phan biet la:\n";
	  	cout<<"x1="<<(-b+sqrt(delta))/2<<endl;
	  	cout<<"x2="<<(-b-sqrt(delta))/2;
	}
	}
			break;
		case 3:
			if(a<b+c&&b<a+c&&c<b+c){
				cout<<"3 canh tao thanh 1 tam giac\n";
			}else{
				cout<<"khong tao thanh tam giac\n";
			}
			if(a==b==c){
	            cout<<"Day la tam giac deu\n";
	        }
	        if(a==b||b==c||a==c){
	            cout<<"Day la tam giac can\n";
	        }
	        if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
	        	cout<<"day la tam giac vuong\n";
			}
			else{
				cout<<"day la tam giac thuong\n";
			}
			break;
	}			
}

