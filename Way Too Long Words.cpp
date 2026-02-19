#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string letra;
	for(int i=0;i<n;i++)
	{
		cin>>letra;
		if(letra.size()<=10)
		{
			cout<<letra<<endl;
		}
		else
		{
			cout<<letra[0]<<letra.size()-2<<letra[letra.size()-1]<<endl;
		}
	}
	
	return 0;
}