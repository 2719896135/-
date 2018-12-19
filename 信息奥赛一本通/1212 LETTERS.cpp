#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int m=0,n=0,cnt=0;
char a[21][21];
bool mark[21][21];

void dfs(int x,int y,int step);
bool chk(int x,int y);
bool chks(int x,int y);

int main()
{
	memset(mark,0,sizeof(mark));
	cin>>m>>n;
	//scanf("\n");
	for(int i=1;i<=m;i++)
	{
		scanf("\n%c",&a[i][1]);
		for(int j=2;j<=n;j++)
		{
			scanf("%c",&a[i][j]);
//			cin>>a[i][j];
		}
	}
	mark[1][1]=true;
	dfs(1,1,1);
	cout<<cnt;
	return 0;
}
void dfs(int x,int y,int step)
{
	if(chk(x,y)==false)
	{
		cnt=step>cnt?step:cnt;
		return ;
	}
	else
	{
		if(x+1<=m && mark[x+1][y]==false && chks(x+1,y)==false)//下
		{
			mark[x+1][y]=true;
			dfs(x+1,y,step+1);
			mark[x+1][y]=false;
		}
		if(y+1<=n && mark[x][y+1]==false && chks(x,y+1)==false)//右 
		{
			mark[x][y+1]=true;
			dfs(x,y+1,step+1);
			mark[x][y+1]=false;
		}
		if(x-1>=1 && mark[x-1][y]==false && chks(x-1,y)==false)//上 
		{
			mark[x-1][y]=true;
			dfs(x-1,y,step+1);
			mark[x-1][y]=false;
		}
		if(y-1>=1 && mark[x][y-1]==false && chks(x,y-1)==false)//左
		{
			mark[x][y-1]=true;
			dfs(x,y-1,step+1);
			mark[x][y-1]=false;
		}
	}
}
bool chk(int x,int y)
{
	bool f1,f2,f3,f4;
	////////////////////下
	if(x+1>m || mark[x+1][y]==true || chks(x+1,y)==true)
		f1=false;
	else
		f1=true;
	////////////////////右
	if(y+1>n || mark[x][y+1]==true || chks(x,y+1)==true)
		f2=false;
	else
		f2=true;
	////////////////////上
	if(x-1<1 || mark[x-1][y]==true || chks(x-1,y)==true)
		f3=false;
	else
		f3=true;
	////////////////////左
	if(y-1<1 || mark[x][y-1]==true || chks(x,y-1)==true)
		f4=false;
	else
		f4=true;
	////////////////////综合判断 
	if(f1==false && f2==false && f3==false && f4==false)
		return false;
	else return true;
}
bool chks(int x,int y)
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==x && j==y) continue;
			if(mark[i][j]==true && a[x][y]==a[i][j])
				return true;
		}
	}
	return false;
}
