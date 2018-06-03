#include<iostream>
using namespace std;
int main()
{
    long long num,flag=0;
    cin>>num;
    int c,counter=0;
    while(num!=0)
    {
        c=num%10;
        if(c==4||c==7)
            counter++;
        num=num/10;
    }

    if(counter==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    while(counter!=0)
    {
        int ch;
        ch=counter%10;
        if(ch!=4 && ch!=7)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        counter=counter/10;
    }


    cout<<"YES"<<endl;
    return 0;
}
