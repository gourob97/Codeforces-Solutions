#include<iostream>
using namespace std;
int main()
{

    int vec[100][3],sum1=0,sum2=0,sum3=0;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>vec[i][j];

        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
                sum1=sum1+vec[j][i];
            else if(i==1)

            sum2=sum2+vec[j][i];
            else
                sum3=sum3+vec[j][i];
        }
    }
    if(sum1==0&&sum2==0&&sum3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

