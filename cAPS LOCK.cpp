#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char word[101];
    cin>>word;
    int length=strlen(word);
    int countup=0;
    for(int i=0;i<length;i++)
    {
        if(word[i]>='A'&& word[i]<='Z')
            countup++;
    }

    if(countup==length||((word[0]>='a'&&word[0]<='z')&&(countup==length-1)))
    {
        for(int i=0;i<length;i++)
    {
        if(word[i]>='A'&& word[i]<='Z')
            word[i]=tolower(word[i]);
            else
             word[i]=toupper(word[i]);
    }
    }
    cout<<word<<endl;
    return 0;
}
