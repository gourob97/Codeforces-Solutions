#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int x[200];

	int nx;
	cin>>nx;

	for(i=0;i<nx;i++)
	{
		cin>>x[i];
	}

	int ny;
	cin>>ny;
    int j=ny;
    while(j)
    {
    	cin>>x[i];
    	j--;
    	i++;
    }

     sort(x,x+(nx+ny));

     for(i=0;i<nx+ny-1;i++)
     	{
     		if(x[i+1]-x[i]>1)
     		{
     			cout<<"Oh, my keyboard!"<<endl;
     			return 0;
			}
		 }
		 
		 
		 	if(x[nx+ny-1]==n&&x[0]==1)
		 	cout<<"I become the guy."<<endl;
		 	else
		 	cout<<"Oh, my keyboard!"<<endl;
		 
	return 0;
}