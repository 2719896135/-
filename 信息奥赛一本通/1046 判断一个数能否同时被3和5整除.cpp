#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long long a;
	cin>>a;
	cout<<((a%3==0)&&(a%5==0)?"YES":"NO");
	return 0;
}
