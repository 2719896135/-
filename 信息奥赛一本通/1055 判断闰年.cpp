#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a%4!=0 || (a%100==0 && a%400!=0)) cout<<"N";
	else cout<<"Y";
	return 0;
}
