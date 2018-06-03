#include<iostream>
using namespace std;
int main()
{
    unsigned long int k,n,w,cost;
    cin>>k>>n>>w;
    cost=(w*k*(1+w))/2;
    if(cost<=n)
        cout<<"0"<<endl;
    else
        cout<<cost-n<<endl;
    return 0;
}
