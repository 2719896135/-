#include<iostream>
using namespace std;
int n,h,a[21],ans;
int main()
{
	cin>>n>>h;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(h>=a[i])	ans++;
	}
	cout<<ans;
	return 0;
}
