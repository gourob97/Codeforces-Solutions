#include<iostream>
using namespace std;

int main()
{
	long long int  n,p;
	cin>>n>>p;
     
     if(n%2==0)
     {
     	n=n/2;
         if(p<=n)
         	cout<<(2*p-1)<<endl;
         else{
         	p-=n;
         cout<<(2*p);
     }
     }
     else
     {
     	n=(n+1)/2;
     	if(p<=n)
     	{
     		cout<<(2*p-1);
     	}
     	else
     	{
     		p=p-n;
     		cout<<2*p;
     	}
     }
}