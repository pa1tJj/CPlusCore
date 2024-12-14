#include<bits/stdc++.h>
using namespace std;
int tichnp(string s1,string s2){
	int p1=0,p2=0;
	for(int i=s1.size()-1;i>=0;--i){
		p1+=(s1[i]-'0')*pow(2,s1.size()-i-1);
	}
	for(int i=s2.size()-1;i>=0;--i){
		p2+=(s2[i]-'0')*pow(2,s2.size()-i-1);
	}
	return p1*p2;
}
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	cout<<tichnp(s1,s2);
}
