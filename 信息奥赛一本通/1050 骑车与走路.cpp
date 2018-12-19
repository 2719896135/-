#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int l;
	cin>>l;
	double a=l/3.0+50;
	double b=l/1.2;
	cout<< (a>b?"Walk":(a==b?"All":"Bike"));
	return 0;
}
