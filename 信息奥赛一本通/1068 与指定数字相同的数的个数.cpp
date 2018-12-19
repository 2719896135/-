#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
	int n,m;
	int cnt=0;
	cin>>n>>m;
	int tmp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		cnt+=tmp==m?1:0;
	}
	cout<<cnt;
	return 0;
}
