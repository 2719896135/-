#include<iostream>
using namespace std;
int a,b,ans;
int main()
{
	cin>>a>>b;
	if(a/2>b/2)
	{
		ans=a/2*b;
	}
	else
	{
		ans=b/2*a;
	}
	cout<<ans;
	return 0;
}
