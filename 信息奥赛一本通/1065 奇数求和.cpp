#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m,n,sum=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
		if(i&1) sum+=i;//如果i是奇数，就加上i
	printf("%d",sum);
	return 0;
}
