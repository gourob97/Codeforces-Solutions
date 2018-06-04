#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n;//number of light
    long int lor;  // length of road
    cin>>n>>lor;
    long int PosOfLight[1001],sd,ld;
    double diam,comp;

    for (int i = 0; i < n; ++i)
    {
    	cin>>PosOfLight[i];
    }

    sort(PosOfLight,PosOfLight+n);

    sd=PosOfLight[0]-0;
    ld=lor-PosOfLight[n-1];

    diam=sd;
    for (int i = 0; i < n-1; ++i)
    {
    	comp=(PosOfLight[i+1]-PosOfLight[i])/2.0;

    	if(comp>diam)
    		diam=comp;
    }
     if(diam<ld)
     	diam=ld;
      std :: cout<< std:: fixed;
    std:: cout<<std :: setprecision(10);
    cout<<diam<<endl;
    return 0;
}