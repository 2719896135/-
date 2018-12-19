#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cin>>n;
	int tmp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		sum+=tmp;
	}
	double a=sum/(double)n;
	printf("%.2lf",a);
	return 0;
}
