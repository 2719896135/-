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
	double a=(double)sum/n;
	printf("%d %.5lf",sum,a);
	return 0;
}
