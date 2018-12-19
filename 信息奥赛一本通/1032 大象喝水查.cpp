#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
const double pi=3.14;
int main()
{
	double h,r;
	cin>>h>>r;
	double v=pi*r*r*h/1000.0;
	cout<<ceil(20.0/v);//有小数时整数部分 +1
	return 0;
}
