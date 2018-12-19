#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,a,y,b;
	double v,z;
	cin>>x>>a>>y>>b;
	v=(b*y-a*x)/((double)b-a);
	printf("%.2lf",v);
	return 0;
}
