#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    float half=0;
    int arra[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arra[i];
       half=half+arra[i];
    }
    half/=2;


    for(i=0;i<n;i++)
    {
        sum=sum+arra[i];
        if(sum>=half)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }

    return 0;
}
