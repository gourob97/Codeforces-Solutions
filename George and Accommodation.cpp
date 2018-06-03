#include<iostream>
using namespace std;
int main()
{
    int room;
    cin>>room;
    int c=0;
    int arr[room][2];
    for(int i=0;i<room;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
        if(arr[i][1]-arr[i][0]>=2)
            c++;
    }
    cout<<c<<endl;
}
