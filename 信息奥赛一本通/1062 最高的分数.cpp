#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int max=0;
	cin>>n;
	int tmp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		max=tmp>max?tmp:max;
	}
	printf("%d",max);
	return 0;
}
