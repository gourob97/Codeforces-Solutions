#include <iostream>
using namespace std;
int main()
{
	int a=0,d=0;
	char c;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>c;
		if(c=='A')
			a++;
		else
			d++;
	}
	if(a>d)
		cout<<"Anton"<<endl;
	else if(a<d)
		cout<<"Danik"<<endl;
	else
		cout<<"Friendship"<<endl;
}