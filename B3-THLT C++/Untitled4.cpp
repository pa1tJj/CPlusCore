#include<iostream>
using namespace std;
main()
{
	int i,n,s=1,demso=0;
	cout<<"n="; cin>>n;
	cout<<"uoc so cua "<<n<<" la:"<<" ";
	for(i=1;i<=n;i++)
	if(n%i==0){
	cout<<" "<<i<<' ';
	s=i*s;	
	demso++;
} 		
        cout<<"\nso luong la:"<<demso;
        cout<<"\n";
        cout<<"tich uoc so cua n la:"<<s;
}
