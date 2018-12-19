#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int N, K;
	int dp[1000][1000];
	cin >> N >> K;
    for (int i = 0; i <= K; i++) {
        dp[0][i] = 1;
    }
    for (int i = 1; i <= N; i += 2) {
        for (int j = 1; j <= K; j++) {
            for (int k = 0; k <= i - 1; k++) {
                dp[i][j] = (dp[i][j] + dp[k][j - 1] * dp[i - 1 - k][j - 1]) % 9901;
            }
        }
    }
    cout << (dp[N][K] - dp[N][K - 1] + 9901) % 9901 << endl;
	return 0;
}
