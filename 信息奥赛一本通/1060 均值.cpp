#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double sum=0;
	cin>>n;
	double tmp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		sum+=tmp;
	}
	double a=sum/n;
	printf("%.4lf",a);
	return 0;
}
