#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int m;
	bool jiaji;
	char c;
	int money=0;
	cin>>m>>c;
	jiaji=c=='y'?true:false;
	if(m<=1000)
	{
		money=8;
	}
	else
	{
		money=8;
		money+=ceil((m-1000)/500.0)*4;
	}
	if(jiaji==true) money+=5;
	cout<<money;
	return 0;
}
