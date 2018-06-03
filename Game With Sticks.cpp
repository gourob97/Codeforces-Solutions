#include<iostream>
using namespace std;
int main()
{
	int m,n,i;
	cin>>m>>n;
	for(i=0;m!=0&&n!=0;i++)
	{
		m--;
		n--;
	}
	
	if(i%2!=0)
	{
		cout<<"Akshat"<<endl;
	}
	else
		cout<<"Malvika"<<endl;

	return 0;
}