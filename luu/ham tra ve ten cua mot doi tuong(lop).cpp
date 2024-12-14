#include<bits/stdc++.h>
using namespace std;
class lop{
};
template<class x>
string getname(x obj){
	string name=typeid(obj).name();
	while(isdigit(name[0])){
		name.erase(0,1);
	}
	return name;
}
int main(){
	lop x;
	cout<<getname(x);
}
