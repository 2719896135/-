#include<iostream>
#include<cstdio>
using namespace std;

const double pi=3.14159;

int main()
{
	double r,d,round,s;
	cin>>r;
	d=r*2;
	round=2*pi*r;
	s=pi*r*r;
	printf("%.4lf %.4lf %.4lf",d,round,s);
	return 0;
}
