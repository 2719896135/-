#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	long long n,x,y;
	cin>>n>>x>>y;
	long long cnt=floor((double)(n*x-y)/x);
	if(cnt<=0)
		cout<<0;
	else
		cout<<cnt;
	return 0;
}
