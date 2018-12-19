#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	double n;
	cin>>n;
	double x=n;
	double y=(x<5?(-x+2.5):(x<10?(2-1.5*(x-3)*(x-3)):(x/2-1.5)));
	printf("%.3lf",y);
	return 0;
}
