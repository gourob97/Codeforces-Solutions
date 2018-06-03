#include<iostream>
#include<algorithm>
using namespace std;
void sort_dragon(struct dragon arr[],int );
struct dragon
{
	int ds; //dragon strength
	int bonus; //bonus for killing the dragon
};

int main()
{
    int ks; // kirito's strength
    int num_drag;// number of dragons2 52
    cin>>ks>>num_drag;
    struct dragon d[num_drag];
    int i=0;
    while(i<num_drag)
    {
    	cin>>d[i].ds>>d[i].bonus;
    	i++;

    }
     
     sort_dragon(d,num_drag);

     for (int i = 0; i < num_drag; ++i)
     {
     	if(ks<=d[i].ds)
     	{
     		cout<<"NO"<<endl;
     		return 0;
     	}
     	ks+=d[i].bonus;
     }
     cout<<"YES"<<endl;
    
}

void sort_dragon(struct dragon arr[],int size){

bool swapped;
	
	do{
		 swapped=0;
	  for (int i = 0; i < size-1; ++i)
	  {
	  	if(arr[i].ds>arr[i+1].ds){
               swap(arr[i],arr[i+1]);
               swapped=1;
             }
	  }
    }  while(swapped);
}