#include<iostream>
using namespace std;
main()
{
	char nhap;
	cout<<"nhap vao ki tu:"; cin>>nhap;
	switch(nhap){
		case "a":
		case "A":
		    cout<<"xin chao";break;	
		case "b":
		case "B":
		    cout<<"hoan nghenh";break;	
		default:
		    cout<<"xin loi";
			break;	
	}
	return 0;
}
