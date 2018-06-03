#include<iostream>
using namespace std;
int main()
{

    char  ins[101];
    cin>>ins;
    int i=0;
    while(ins[i]!='\0')
    {
        if(ins[i]=='H'||ins[i]=='Q'||ins[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"NO"<<endl;
    return 0;
}
