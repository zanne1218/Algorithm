#include <iostream>

using namespace std;

int main() {
	int n, m, cnt, min = 64;
	cin >> n >> m;
	char **map = new char *[n];	
	for (int i = 0; i < n; i++) {
		map[i] = new char[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	string chess[8] = {
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB"
	};
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) { // 시작부분
			cnt = 0;
			for (int k = i; k < i + 8; k++) {
				for (int m = j; m < j + 8; m++) {
					if (map[k][m] != chess[k - i][m - j])
						cnt++;
				}
			}
			cnt = (cnt < 64 - cnt) ? cnt : 64 - cnt;
			min = (cnt < min) ? cnt : min;
		}
	}
	cout << min;
	for (int i = 0; i < n; i++) {
		delete[] map[i];
	}
	delete[] map;
	return 0;
}