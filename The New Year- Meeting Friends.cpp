#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,x,y,z;
	cin>>a>>b>>c;
	x=abs(a-b);
	y=abs(b-c);
	z=abs(a-c);
     
    a=x+y;
    b=y+z;
    c=x+z;
    int r;
    r= ( a<b ) ?  ( a<c? a: c ) : (b<c? b :c) ;
    cout<<r<<endl;

}