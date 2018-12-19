#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

long long n[50];

int main()
{	
	memset(n,0,sizeof(n));
	int k;
	cin>>k;
	n[1]=1;
	n[2]=1;
	for(int i=3;i<=k;i++)
	{
		n[i] = n[i-1]+n[i-2];
	}
	cout<<n[k];
	return 0;
}
