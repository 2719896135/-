#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long long a;
	cin>>a;
	cout<<(a>0?"positive":(a==0?"zero":"negative"));
	return 0;
}
