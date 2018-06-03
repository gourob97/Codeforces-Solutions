#include<iostream>
using namespace std;
int main()
{
	
	int num[100],ev=0,od=0,task;
	cin>>task;

	for(int i=0;i<task;i++)
	{
        cin>>num[i];
        if(num[i]%2==0)
           ev++;
           else
           od++; 
	}
	if(od>ev)
	{
		for(int i=0;i<task;i++)
			if(num[i]%2==0)
				cout<<i+1<<endl;

	}
	else
		for(int i=0;i<task;i++)
			if(num[i]%2!=0)
				cout<<i+1<<endl;
}