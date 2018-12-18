#include<iostream>
#include<iomanip>
using namespace std;
double n,a[100000],ans,t;
int mx;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mx+=a[i];
	}
	t=mx/n;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>t) ans++;
	}
	cout<<ans;
	return 0;
}
