#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char word[100];
	
	cin>>word;
	int i=0,n_up=0,n_low=0;
	
	while(word[i]!='\0')
	{
		if(word[i]>='a'&&word[i]<='z')
		    n_low++;
		    else
		    n_up++;
		    i++;
	}
	if(n_up>n_low)
	{
		i=0;
		while(word[i]!='\0')
    	{
		if(word[i]>='a'&&word[i]<='z')
		   word[i]=toupper(word[i]);
		   i++;
    	}
	}
	
	else
	
	{
		i=0;
		while(word[i]!='\0')
    	{
		if(word[i]>='A'&&word[i]<='Z')
		   word[i]=tolower(word[i]);
		   i++;
    	}
	}
	
	cout<<word;
	return 0;
}
