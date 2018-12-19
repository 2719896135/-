#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	int k;
	for(k=1;k*b<=a;k++){}
	cout<<a-(k-1)*b;
	return 0;
}
