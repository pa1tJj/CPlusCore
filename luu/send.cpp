#include<bits/stdc++.h>
using namespace std;
void heart(int &m,int &n)
{
	int i,j;
	for(int i=1;i<7;i++)
	{
		for(int j=1;j<=7;j++)
		if(!((i==1&&(j==1 || j==4 || j==7)) || ( i==4 && (j==1 || j==7)) || (i==5 &&(j<=2 || j>=6)) || (i==6 &&(j<=3 ||j>=5))))
		{
			cout<<"1";
		}else{
			cout<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int sky=6,tung=7;
	cout<<"tang Tung nay,fanboy\n";
	heart(sky,tung);
	return 0;
}
