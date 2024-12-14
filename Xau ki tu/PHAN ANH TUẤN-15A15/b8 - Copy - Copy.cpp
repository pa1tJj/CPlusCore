#include<iostream>
#include<string.h>
using namespace std;
void tach_ho(char ho[])
{
	int i=0;
	while(ho[i]!=' '&&ho[i]!='\0'){
		cout<<ho[i];
		i++;
	}
	
}
int main()
{
	char a[50];
	cout<<"nhap ho ten:";
	cin.getline(a,50);
	cout<<"ho la:";
	tach_ho(a);
}
