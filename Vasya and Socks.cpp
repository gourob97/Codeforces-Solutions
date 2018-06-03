#include <iostream>
using namespace std;
int main()
{
    int os,ns,i;
    cin>>os>>ns;

    for(i=1;os!=0;i++)
    {
    	os--;
    	if(i%ns==0)
    		os++;

    }
    cout<<i-1;
	return 0;
}