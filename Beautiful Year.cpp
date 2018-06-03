#include<iostream>
using namespace std;
int main()
{
    int year;
    int arr[4];
    cin>>year;
    for(int i=year+1;;i++)
    {
         int j=0;
         year=i;
        while(year!=0)
        {
            int ld=year%10;
            arr[j]=ld;
            j++;
            year=year/10;
        }

        if(arr[0]!=arr[1]&&arr[0]!=arr[2]&&arr[0]!=arr[3]&&arr[1]!=arr[2]&&arr[1]!=arr[3]&&arr[2]!=arr[3])
        {
             cout<<i<<endl;
             return 0;
        }

    }

    return 0;

}
