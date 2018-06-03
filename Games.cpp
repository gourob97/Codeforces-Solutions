#include<iostream>
using namespace std;
int main()
{
	int team[60];
	int n,count=0;
	
	cin>>n;
	n=2*n;
	for(int i=0;i<n;i++)
		cin>>team[i];

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(team[i]==team[j])
				if((i%2)!=(j%2))
					count++;
		}
	}

	cout<<count;
}