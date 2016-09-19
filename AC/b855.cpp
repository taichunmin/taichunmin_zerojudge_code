#include <cstdio>
#include <cstring>
#include <iostream>
#define MAXV (1000*20000+1)
using namespace std;

char dp[MAXV] = {};

int main() {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		int n, x[1000], sum = 0;
		scanf("%d", &n);
		memset(dp, 0, n*20000);
		dp[0] = 1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x[i]);
			sum += x[i];
		}
		for (int i = 0; i < n; i++) {
			int v = x[i];
			for (int j = sum; j >= v; j--)
				dp[j] |= dp[j-v];
		}
		long long ret = 0;
		for (int i = sum/2; i >= 0; i--) {
			if (dp[i])
				ret = i, i = -1;
		}
        long long ans2 = sum - ret;
        cout << ret * ret + ans2 * ans2 << endl;
	}
	return 0;
}
