//能正常输出正确答案，但就是不能过，题目有猫病。附件："1213 八皇后问题输出文件.txt"
#include<iostream>
#include<cstdio>
using namespace std;

int num=8,line[9],cnt=1;

void dfs(int step);
void show();
bool chk(int n);

int main()
{
	dfs(1);
	return 0;
}
void dfs(int step)
{
	for(line[step]=1;line[step]<=num;line[step]++)
	{
		if(!chk(step))
			continue;
		else
			if(step!=num)
				dfs(step+1);
			else
				show();
	}
}
void show()
{
	printf("No. %d\n",cnt);
	cnt++;
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num;j++)
		{
			if(line[i]==j)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
}
bool chk(int n)
{
	for(int i=1;i<n;i++)
	{
		if(line[n]==line[i]) return false;
		if(line[n]-line[i]==n-i) return false;
		if(line[n]-line[i]==i-n) return false;
	}
	return true;
}
