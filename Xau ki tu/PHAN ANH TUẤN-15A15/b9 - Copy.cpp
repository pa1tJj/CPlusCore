#include<iostream>
#include<string.h>
using namespace std;
string tach_ten(string s)
{
    string ten ="";
    int n=s.length();
    while (s[n]!=' ')
	n=n-1;
    for(int i=n+1; i<s.length(); i++)
    ten=ten+s[i];
    return ten;
}
int main()
{
    string hoten ="",ten="";
	int n=0;
    cout<<" nhap ho ten: ";
    getline(cin,hoten);
    cout<<"ten:"<<tach_ten(hoten);
}

