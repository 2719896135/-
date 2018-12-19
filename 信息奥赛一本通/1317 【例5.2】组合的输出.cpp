#include<iostream>
#include<cstdio>
using namespace std;

int a[22]={0},m=0,n=0;
void dfs(int step);

int main()
{
	cin>>m>>n;
	dfs(1);
	return 0;
}
void dfs(int step)
{
	if(step>n)
	{
		for(int i=1;i<=n;i++)
			printf("%3d",a[i]);
		printf("\n");
		return ;
	}
	for(int i=a[step-1]+1;i<=m;i++)
	{
		a[step]=i;
		dfs(step+1);
	}
}
