#include <iostream>
using namespace std;
int main()
{
	int arr[26];
	char text[101];
	int n;

	cin>>n;
	// text input

	for(int i=0;i<n;i++)
	{
		cin>>text[i];
	}

	//initialixing arr[26] tp 0
	if(n<26)
	{
		cout<<"NO"<<endl;
		return 0;
	}

	for (int i = 0; i <26; ++i)
	{
		arr[i]=0;
	}
     

     for (int i = 0; i < n; ++i)
     {
     	if(text[i]>='A' && text[i]<='Z')
     	arr[text[i]-65]=1;
     else
     	arr[text[i]-97]=1;
     }
      
      for (int i = 0; i <26; ++i)
	{
		if(arr[i]==0){
			cout<<"NO"<<endl;
			return 0;
		}
	}

	cout<<"YES"<<endl;
	return 0;

}