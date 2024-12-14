#include<iostream>
using namespace std;
main()
{
	int n,a[100];
	cout<<"nhap so ptu:";cin>>n;
	for(int i=1;i<=n;i++){
		*(a+i)=a[i];
		cin>>*(a+i);
	}
	int max=*(a+1);
	for(int i=1;i<=n;i++)
	{
		if(*(a+i)>max){
			max=*(a+i);
		}
	}
	cout<<"gt lon nnhat la:"<<max;
}
