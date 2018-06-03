#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int gift[n];
	int ngift[n];
     
     for(int i=0;i<n;i++)
     {
     	cin>>gift[i];
     }

      for(int i=0;i<n;i++)
     {
     	int index=0,value=0;
     	
     	 index=i+1;
     	 value=gift[i]-1;

     	ngift[value]=index;
     }

     for(int i=0;i<n;i++)
     {
     	cout<<ngift[i]<<" ";
     }

return 0;
}
