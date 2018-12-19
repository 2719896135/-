#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double r1,r2;
	double r;
	cin>>r1>>r2;
	r=1/(1/(double)r1 + 1/(double)r2);
	//r=r1*r2/(double)(r1+r2);//这样写好像也可以
	printf("%.2lf",r);
	return 0;
}
