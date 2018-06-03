#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int friends,hof,width;  //hof=height of fence
	int hofr[1000];   // array for holding friends' height
	cin>>friends>>hof;
	width=friends;
	for (int i = 0; i < friends; ++i)
	{
		cin>>hofr[i];
		if(hofr[i]>hof)
			width++;
	}

	cout<<width<<endl;
	return 0;
}