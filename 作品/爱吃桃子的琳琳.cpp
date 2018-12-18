#include<iostream>
using namespace std;
int n,y,a[10000],ans,mx;
int main()
{
	cin>>n>>y;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>y)
		{
			ans++;
			mx+=a[i];
		}
	}
	cout<<ans<<endl<<mx;
	return 0;
}
