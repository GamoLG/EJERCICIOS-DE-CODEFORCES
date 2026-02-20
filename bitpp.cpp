#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n; cin>>n;
	int x=0;
	string var;
	for(int i=0;i<n;i++)
	{
		cin>>var;
		if(var=="++X" or var=="X++")
		{
			x++;
		}
		else if(var=="--X" or var=="X--")
		{
			x--;
		}
	}
	cout<<x<<endl;

	
	return 0;
}