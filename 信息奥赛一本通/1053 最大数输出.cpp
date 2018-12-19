#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,max;
	cin>>a>>b>>c;
	max=a;
	max=b>max?b:max;
	max=c>max?c:max;
	cout<<max;
	return 0;
}
