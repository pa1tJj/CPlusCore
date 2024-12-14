#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n,amstrong,s=0,i;
   cout<<"nhap n=";cin>>n;
    amstrong=n;
   while(n!=0)
   {
      i=n%10;
      s=s+pow(i,3);
      n=n/10;
   }
   if(amstrong=s)
      cout<<amstrong<<" la so amstrong";
   else
      cout<<amstrong<<" khong phai so amstrong";
}
