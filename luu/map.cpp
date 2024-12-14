#include<bits/stdc++.h>
using namespace std;
main(){
	map<char,int> m;
	string s;getline(cin,s);
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	for(auto it:m){
		cout<<"key:"<<it.first<<" "<<"value:"<<it.second<<endl;
	}
}
