#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int > vu;
    vector<int > vo;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
    	int a;
    	cin>>a;
    	vu.push_back(a);
    }
      
      vo=vu;
    
     
    
     for(int i=0;i<n;i++)
    {
    	cout<<vo[i]<<endl;

    }
    return 0;
}