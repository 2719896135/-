#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int a1,a2;
	cin>>a1>>a2;
	int d=a2-a1;
	int n;
	cin>>n;
	int an=a1+n*d-d;
	cout<<an;
	return 0;
}
