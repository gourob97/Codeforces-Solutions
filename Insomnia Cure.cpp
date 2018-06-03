#include<iostream>
using namespace std;
int main()
{
    int k,l,m,n,d,damage=0;
    cin>>k>>l>>m>>n>>d;
    int dragons[d];
    for(int i=0;i<d;i++)
    {
        dragons[i]=1;
    }

    for(int i=k-1;i<d;i+=k)
    {
        dragons[i]=0;
    }

    for(int i=l-1;i<d;i+=l)
    {
       dragons[i]=0;
    }
    for(int i=m-1;i<d;i+=m)
    {
       dragons[i]=0;
    }
    for(int i=n-1;i<d;i+=n)
    {
        dragons[i]=0;
    }

    for(int i=0;i<d;i++)
    {
        if(dragons[i]==0)
       damage+=1;
    }
    cout<<damage<<endl;
    return 0;
}
