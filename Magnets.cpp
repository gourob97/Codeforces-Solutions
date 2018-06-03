#include<iostream>
using namespace std;

int main()
{
	int a,b,g=1,c=1,n;
	cin>>n;
	cin>>a;
	for(int i=1;i<n;i++)
	{
		cin>>b;
		if(a==b)
		{
		
		  c++;
		  a=b;
     	}
     	
	    else
		{
		    g++;
			c=1;
			a=b;
		} 
	}
	cout<<g;
}
