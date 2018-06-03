#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
   char a1[101],a2[101];
   
   cin>>a1;
   cin>>a2;
    int len=strlen(a1);
    
     
     for(int i=0;i<len;i++)
     {
     	if(a1[i]!=a2[i])
     	  a1[i]='1';
     	  else
     	  a1[i]='0';
	 }
    for(int i=0;i<len;i++)
       cout<<a1[i];
}
