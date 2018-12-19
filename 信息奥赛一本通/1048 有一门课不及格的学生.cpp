#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	short a,b;
	cin>>a>>b;
	cout<<(a<60?(b<60?0:1):(b<60?1:0));
	return 0;
}
