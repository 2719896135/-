#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int max=-1,min=10e8;
	cin>>n;
	int tmp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		max=tmp>max?tmp:max;
		min=tmp<min?tmp:min;
	}
	printf("%d",max-min);
	return 0;
}
