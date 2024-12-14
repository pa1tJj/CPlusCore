#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int thang,nam;
	cout<<"mhap vao thang:";cin>>thang;
	cout<<"nhap vao nam:";cin>>nam;
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
		case 12:
		cout<<"thang nay co 31 ngay";
		break;
		case 2:
			if(nam%4==0 && nam%100!=0 || nam%400!=0){
				cout<<"thang co 29 ngay";
			}else{
				cout<<"thang co 28 ngay";
			}
			break;
		case 4:
		case 6:
		case 11:
			cout<<"thang co 30 ngay\n";break;
	}
	return 0;
	
	
}
