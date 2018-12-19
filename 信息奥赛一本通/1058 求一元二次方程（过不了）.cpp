//此题有猫病，有一个测试点愣是过不了，90/100分。
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double d=b*b-4*a*c;
	if(d>0.0)
	{
		double x1,x2;
		x1=(-b - sqrt(b*b-4*a*c))/(2*a);
		x2=(-b + sqrt(b*b-4*a*c))/(2*a);
		if(x1<x2)
			printf("x1=%.5lf;x2=%.5lf",x1,x2);
		else
			printf("x1=%.5lf;x2=%.5lf",x2,x1);
	}
	else if(d==0.0)
	{
		double x=(-b)/(2*a);
		printf("x1=x2=%.5lf",x);
	}
	else
	{
		cout<<"No answer!";
	}
	return 0;
}
