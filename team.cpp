#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int a,b,c;	
	int r=0;
	for(int i=0;i<n;i++)
	{
		cin>>a; cin>>b; cin>>c;
		//tambien se puede hacer con sumas de valores que si es 
		//mayor o igual a 2
		//if((a+b+c)>=2)
	
		if((a==1 and b==1) or (a==1 and c==1) or (b==1 and c==1))
		{
			r++;
		}
	}
	
	return 0;
}