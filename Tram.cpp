#include<iostream>
using namespace std;
int main()
{
    long int stopage[2000],n,cap=0,in=0;
    cin>>n;
    n*=2;
    for(long int i=0;i<n-1;i++)
    {
       cin>>stopage[i];
       if(i>0)
       {
           if(i%2!=0)
           {
               in=in+stopage[i];
           }

           else
           {
              in=in-stopage[i];
           }

       }
       if(in>cap)
        cap=in;
    }
 cout<<cap;
    return 0;
}

