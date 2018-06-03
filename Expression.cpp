#include<iostream>
using namespace std;
int main()
{
    int a,b,c,cmp_ans[6];
    cin>>a>>b>>c;

    cmp_ans[0]=a+(b*c);
    cmp_ans[1]=(a+b)*c;
    cmp_ans[2]=(a*b)+c;
    cmp_ans[3]=a*(b+c);
    cmp_ans[4]=a+b+c;
    cmp_ans[5]=a*b*c;

    int max=0;
    for(int i=0;i<6;i++)
    {
        if(cmp_ans[i]>max)
            max=cmp_ans[i];
    }
    cout<<max<<endl;
    return 0;
}
