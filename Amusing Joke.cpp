#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	string s1,s2,s3;
	cin>>s1;
	cin>>s2;
	cin>>s3;
    s1=s1+s2;

    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());

    if(s1==s3)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
          
return 0;	

}
