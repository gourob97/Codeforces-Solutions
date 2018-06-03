#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    string b;
    int i=0;

   cin>>a;
   cin>>b;
    reverse(b.begin(),b.end());
    while(a[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
    }


        cout<<"YES"<<endl;
    return 0;
}
