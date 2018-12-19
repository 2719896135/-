#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

const double pi=3.14;
int main()
{
	double r;
	double v;
	cin>>r;
	v=pi*r*r*r*4/3;//4/3一定要写在最后，减少误差。 
	printf("%.2lf",v);
	return 0;
}
