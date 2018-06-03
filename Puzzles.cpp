#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int student,puzzle;
    cin>>student>>puzzle;
    int arr[puzzle];
    for(int i=0;i<puzzle;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+puzzle);
      cout<<arr[student-1]-arr[0]<<endl;
    return 0;
}
