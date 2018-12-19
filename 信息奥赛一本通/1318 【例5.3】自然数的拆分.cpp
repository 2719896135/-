#include<iostream>
#include<cstdio>
using namespace std;

int a[1000]={0},n=0;
void dfs(int x,int cur);//x，已分成cur份 

int main()
{
	cin>>n;
	a[0]=1;
	dfs(n,1);
	return 0;
}
void dfs(int x,int cur)
{
	if(x==0)
	{
		printf("%d=",n);
		for(int i=1;i<cur-1;i++)
			printf("%d+",a[i]);
		printf("%d\n",a[cur-1]);
		return ;
	}
	for(int i=a[cur-1];i<=x;i++)
	{
		if(i==n) continue;
		a[cur]=i;
		dfs(x-i,cur+1);
	}
}
