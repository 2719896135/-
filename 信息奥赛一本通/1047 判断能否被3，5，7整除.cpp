#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long long a;
	cin>>a;
	cout<<(a%3==0?(a%5==0?(a%7==0?"3 5 7":"3 5"):(a%7==0?"3 7":"3")):(a%5==0?(a%7==0?"5 7":"5"):(a%7==0?"7":"n")));
	return 0;
}
