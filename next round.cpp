#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int k; cin>>k; //es la pos del ultimo clasificado
	int numeros[n];
	int resultado=0;
	for(int i=0;i<n;i++)
	{
		cin>>numeros[i];
	}
	for(int i=0;i<n;i++)
	{
		if(numeros[i]>0 and numeros[i]>=numeros[k-1])
		{
			resultado++;
		}
	}
	cout<<resultado<<endl;
	return 0;
}