#include <iostream>

using namespace std;

int dfs[1002][1002];
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j <= i && j <= k; ++j) {
			if (j == 0 || j == i)
				dfs[i][j] = 1;
			else
				dfs[i][j] = (dfs[i - 1][j - 1] + dfs[i - 1][j]) % 10007;
		}
	}
	cout << dfs[n][k];
	return 0;
}