#include<bits/stdc++.h>
using namespace std;
//pop:xoa 1 ptu
//push:them 1 ptu vao stack
//top:lay ptu dau tien
//empty:kt xem co rong k
//{
//	stack<int> st;
//	st.push(2);
//	st.push(4);
//	st.push(100);
//	cout<<st.top()<<endl;
///	st.pop();
//	st.push(34);
//	cout<<st.top()<<endl;	
//}
//chuyen doi sang nhi phan
/*
main(){
	int n;cin>>n;
	stack<int> st;
	while(n!=0){
		st.push(n%2);
		n/=2;
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	return 0;
}
*/
// java python c ruby
/*
main()
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	string t;
	stack<string> st;
	while(ss>>t){
		st.push(t);
	}
	while(!st.empty()){
		cout<<st.top()<<"\t";
		st.pop();	
	}
}
*/
/*
void ck(){
	string s;
	cin>>s;
	stack<char> st;
    for(char x:s){
		if(x=='('){
			st.push(x);
		}else{
			if(st.empty()){
				cout<<"invalid\n";
				return;
    		}else{
				st.pop();
			}
		}	
	}
	if(st.empty()){
		cout<<"valid\n";
	}else{
		cout<<"invalid\n";
	}
}
int main()
{
	int n;cin>>n;
	while(n--){
		ck();
	}
}
*/
/*
main()
{
	int n,a[100];cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int> st;
	int res=INT_MIN;
	int i=0;
	while(i<n){
		if(st.empty() || a[i]>=a[st.top()]){
			st.push(i);
			i++;
		}else{
			int idx=st.top();
			st.pop();
			if(st.empty()){
			    res=max(res,i*a[idx]);
		    }else{
			    res=max(res,a[idx]*(i-st.top()-1));
		    }
		}
	}
	while(!st.empty()){
		int idx=st.top();
			st.pop();
			if(st.empty()){
			    res=max(res,i*a[idx]);
		    }else{
			    res=max(res,a[idx]*(i-st.top()-1));
		    }
	}
	cout<<endl<<res<<endl;
}
*/
main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0;
	stack<int> s;
	while(i<n){
		s.push(a[i]);
	}
	while(!s.empty()){
		cout<<s.top()<<"\t";
		s.pop();
	}
}
