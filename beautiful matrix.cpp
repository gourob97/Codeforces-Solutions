#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int arr[5][5];
    int i,j,moves=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
              moves=abs(2-i)+abs(2-j);

            }
        }
    }
    cout<<moves<<endl;
    return 0;
}
