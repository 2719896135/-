#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double x,y,p;
	double tot;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>x>>y>>p;
		double l=sqrt(x*x+y*y);
		tot=tot+(l/25)+1.5*p;
	}
	cout<<ceil(tot);
	return 0;
}
