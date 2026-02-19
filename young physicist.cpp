#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=0,y=0,z=0;
	int sumax=0,sumay=0,sumaz=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;cin>>y;cin>>z;
		sumax+=x;
		sumay+=y;
		sumaz+=z;
	}
	if(sumax==0 and sumay==0 and sumaz==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}