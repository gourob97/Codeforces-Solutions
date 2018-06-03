#include<iostream>
using namespace std;

int main()
{
	int n;
	float div;
	cin>>n;
	div=n/5.00;
	n=n/5;
	if(div!=n)
	{
		cout<<n+1<<endl;
	}

	else
      cout<<n<<endl;
}