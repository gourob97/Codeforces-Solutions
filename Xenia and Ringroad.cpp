#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int houses, tasks,arrtask[100001],step=0;
     cin>>houses>>tasks;
        
        cin>>arrtask[0];
        step=arrtask[0]-1;

     for (long long  int i = 1; i < tasks; ++i)
      {
      	cin>>arrtask[i];

      	if(arrtask[i] >= arrtask[i-1])
      		step+=arrtask[i]-arrtask[i-1];

      	else
           step+= houses-(arrtask[i-1]-arrtask[i]);
      } 
    
    cout<<step<<endl;
      return 0;
}