#include<bits/stdc++.h>
using namespace std;
void viethoa(string &s)
{
	for(int i=0;i<s.length();i++){
		s[i]=toupper(s[i]);
	}
}
void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
int main()
{
	vector<string> v;
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tmp,res=" ";
	v.push_back(v[i]);
	for(int i=0;i<v.size();i++){
		chuanhoa(v[i]);
		cout<<v[i];
	}
}
