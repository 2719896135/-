//终于见到一个有意思的题了!
#include<stdio.h>
#include<algorithm>
using namespace std;
int height[1000];
int width[1000];
int sum[100];
int dp[100][100];
 
int main(){
	int n;
	sum[0]=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&width[i],&height[i]);
		sum[i]=sum[i-1]+width[i];
	}
	for(int i=1;i<=n;i++)
	dp[i][i]=height[i];
	for(int i=1;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	dp[i][j]=max(dp[i][j-1],height[j]);
	int val;
	scanf("%d",&val);
	int result=dp[1][n];
	for(int i=0;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	if(sum[j]-sum[i]>=val)
	{
		result=min(result,dp[i+1][j]);
		break;
	}	
	printf("%d\n",val+result);
} 

