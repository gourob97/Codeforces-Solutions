#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    string text;
    int letter[26],count=0;
    getline(cin,text); 
    for (int i = 0; i < 26; ++i)
    {
    	letter[i]=0;
    }

    for (int i = 0;text[i]!='\0'; ++i)
    {
    	if(text[i]>='a' && text[i]<='z')
    		letter[text[i]-97]=1;
    }

    for (int i = 0; i < 26; ++i)
    {
    	if(letter[i]==1)
    		count++;
    }

    cout<<count;
  	return 0;
}