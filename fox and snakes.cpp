#include <iostream>
using namespace std;

int main()
{
	int row,col,count=0;
	cin>>row>>col;

	for (int i = 1; i <= row; ++i)
	{
		if(i%2==0)
		{
			count++;
			if(count%2!=0)
			{
				for (int j = 1; j < col; ++j)
				{
					cout<<".";			
				}
				cout<<"#"<<endl;
			}

			else
			{
				cout<<"#";
				for (int  j= 2; j<=col; ++j)
				{
					cout<<".";
				}
				cout<<endl;
			}
		}

		else
		{
			for (int j = 1; j <= col; ++j)
			{
				cout<<"#";
			}
			cout<<endl;
		}
	}
}