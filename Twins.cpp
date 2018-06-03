#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int coins[100];
    int n,sum=0,ihave=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
        sum=sum+coins[i];
    }
    sort(coins,coins+n, greater<int>());
     sum/=2;
    for(int i=0;i<n;i++)
    {
       ihave=ihave+coins[i];
       if(ihave>sum)
       {
           cout<<i+1<<endl;
           return 0;
       }
    }
    return 0;
}
