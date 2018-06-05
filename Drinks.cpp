#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,con;
	cin>>n;
    con=n;
	double td=0,sd;

	while(n){
         
         cin>>sd;
         td+=sd;
         n--;
     }
     std:: cout<< std :: fixed;
     std:: cout<<std :: setprecision(12);
    cout<<td/con<<endl;


	return 0;
}