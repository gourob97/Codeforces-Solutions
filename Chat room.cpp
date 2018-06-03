#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    char msg[100];
    cin>>msg;

    int len=strlen(msg);

    int i,flag=0;
    for(i=0; msg[i]!='h'; i++)
    {
        if(i==len)
        {
            cout<<"NO"<<endl;
            exit(0);
        }
    }

    i++;

    for(i; msg[i]!='e'; i++)
    {
        if(i==len)
        {
            cout<<"NO"<<endl;
            exit(0);
        }
    }


    for(i; msg[i]!='l'; i++)
    {
        if(i==len)
        {
            cout<<"NO"<<endl;
            exit(0);
        }
    }

    i++;

    for(i; msg[i]!='l'; i++)
    {
        if(i==len)
        {
            cout<<"NO"<<endl;
            exit(0);
        }
    }
    i++;
    for(i; i<len; i++)
    {

        if(msg[i]=='o')
            flag=1;
    }

    if(flag==1)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
}
