#include<iostream>
using namespace std;
main()
{
	int chon;
	cout<<"1.eat\n";
	cout<<"2.talk\n";
	cout<<"3.sleep\n";
	cout<<"4.play\n";
	cout<<"5.run\n";
	cout<<"chon:";cin>>chon;
	switch(chon){
		case 1:
			cout<<"ban da chon eat";break;
		case 2:
			cout<<"ban da chon talk";break;	
		case 3:
			cout<<"ban da chon sleep";break;	
		case 4:
			cout<<"ban da chon play";break;	
		case 5:
			cout<<"ban da chon run";break;	
		default:
		cout<<"moi nhap lai";break;	
	}
}
