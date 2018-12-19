#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	double xa,ya,xb,yb;
	double l;
	cin>>xa>>ya>>xb>>yb;
	l=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
	printf("%.3lf",l);
	return 0;
}
