#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
   for (int i = 0; i < n; ++i,flag=1)
   {
   	if(flag==1)
   		cout<<"that ";
   	if(i%2==0)
   		cout<<"I hate ";
   	else
   		cout<<"I love ";
   	flag=1;
   }
   cout<<"it"<<endl;
	return 0;
}