#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a1=0,a5=0,a10=0;
	cin>>n;
	int tmp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		a1+=tmp==1?1:0;
		a5+=tmp==5?1:0;
		a10+=tmp==10?1:0;
	}
	printf("%d\n%d\n%d",a1,a5,a10);
	return 0;
}
