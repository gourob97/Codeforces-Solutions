#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int cost1,cost2,cost3;
   int a,b,n;
   double m;

    cin>>n>>m>>a>>b;

    cost1=n*a;
    cost2=ceil(n/m)*b;
    int r=(int)m;
    cost3= (int(n/m)*b) + ((n % r)*a);
     int low=(cost1<cost2) ? ( cost1<cost3 ? cost1 : cost3) : (cost2<cost3 ? cost2 :cost3 );
     cout<<low<<endl; 
    return 0;
}