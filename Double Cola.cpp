#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//cout<<sizeof(long );
	long int  num;
	cin>>num;
	while(num > 5)
	{
		num =(num-4)/2;
	}
	switch(num)
	{
		case 1:
		   cout<<"Sheldon"<<endl;
		   break;

		case 2:
		   cout<<"Leonard"<<endl;
		   break;  

		case 3:
		   cout<<"Penny"<<endl;
		   break; 

		case 4:
		   cout<<"Rajesh"<<endl;
		   break;

		case 5:
		   cout<<"Howard"<<endl;
		   break;
	}
}