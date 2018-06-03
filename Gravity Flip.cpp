#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

    vector<int> v;
    int n,p;
    cin>>n;
    p=n;
    while(n)
    {
        int a;
        cin>>a;
        v.push_back(a);
        n--;
    }

    sort(v.begin(),v.end());
    int i=0;
    while(i<p)
    {
        cout<<v[i]<<" ";
        i++;
    }

    cout<<endl;

    return 0;
}
