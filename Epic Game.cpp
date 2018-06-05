#include<iostream>
using namespace std;

int gcd(int ,int );

int main()
{
    int a,b,n,m,i=0;
    cin>>a>>b>>n;
    for (i = 0; n!=0 && n>0; ++i)
    {
    	if(i%2==0)
    	{
    		m=gcd(a,n);
    		n-=m;
    	}
    	else
    	{
    		m=gcd(b,n);
    		n-=m;
    	}
    }
    cout<<!(i%2)<<endl;
	return 0;
}

int gcd(int a,int b)
{
	
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;

	}
    return a;

}
