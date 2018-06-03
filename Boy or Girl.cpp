#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int alpha[26],sum=0;
    for(int i=0;i<26;i++)
    {
        alpha[i]=0;
    }
    char user_name[101];
    cin>>user_name;

    int len=strlen(user_name);
    for(int i=0;i<len;i++)
    {
        alpha[user_name[i]-97]++;
    }

    for(int i=0;i<26;i++)
    {
        if(alpha[i]>1)
        {
            alpha[i]=1;
        }
        sum=sum+alpha[i];
    }

    if(sum%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;

    }
    else
        cout<<"CHAT WITH HER!"<<endl;
    return 0;
}
