#include<iostream>
using namespace std;
int main()
{
    long long step,i;
    cin>>step;


    long long marks[step];

    for(i=0;i<step;i++)
    {
        cin>>marks[i];
    }
    if(step==1)
    {
        cout<<1<<endl;
        return 0;
    }
    i=0;
    long long pp=0,cp=1;
    int flag=0;

    while(i!=step-1)
    {

        if(marks[i]<=marks[i+1])
           {
               cp++;
           }
           else
            {
                if(cp>pp)
                 pp=cp;

                 cp=1;
                 flag=1;
            }
            i++;
    }
    if(cp>pp)
        pp=cp;
   if(flag==0)
        cout<<cp;
    else
    cout<<pp;
    return 0;
}
