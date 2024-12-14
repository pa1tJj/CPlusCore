#include<iostream>
using namespace std;
main()
{
	char color;
	cout<<"chon:";cin>>color;
	switch(color){
		case 'R':
		case 'r':
			cout<<"-RED";
			break;
		case 'G':
			case 'g':
				cout<<"-GREEN";
				break;
		case 'B':
			cout<<"-BLUE";
			break;
		case 'b':
		cout<<"-BLACK";
		break;
		}	
}
