#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int a1=0,a2=0,a3=0,sum=0;
	cin>>n;
	int tmp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp;
		a1+=tmp;//金牌
		sum+=tmp;
		
		cin>>tmp;
		a2+=tmp;//银牌
		sum+=tmp;
		
		cin>>tmp;
		a3+=tmp;//铜牌
		sum+=tmp;
	}
	printf("%d %d %d %d",a1,a2,a3,sum);
	return 0;
}
