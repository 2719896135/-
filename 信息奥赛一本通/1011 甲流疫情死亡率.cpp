#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	double c;
	cin>>a>>b;
	c=b/(double)a;
	printf("%.3lf%c",c*100,'%');
	return 0;
}
