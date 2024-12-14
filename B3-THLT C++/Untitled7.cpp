#include<iostream>
using namespace std;
main()
{  
    int a,b,c,d,n;
	for(int a=1;a<=9;a++)
	for(int b=1;b<=9;b++)
	for(int c=1;c<=9;c++)
	for(int d=1;d<=9;d++)
	if(a+b==c+d)
	cout<<a*1000+b*100+c*10+d<<" ";
}
