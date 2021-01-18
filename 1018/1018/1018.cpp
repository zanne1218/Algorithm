#include <iostream>

using namespace std;

int main() {
	int n, m, cnt1 = 0, cnt2 = 0;
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
	string chess_black[8] = {
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB"
	};
	string chess_white[8] = {
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW",
		"WBWBWBWBWB",
		"BWBWBWBWBW"
	};
	for (int i = 0; i < n - 8; i++) {
		for (int j = 0; j < m - 8; j++) {
			
		}
	}
	for (int i = 0; i < n; i++) {
		delete[] map[i];
	}
	delete[] map;
	return 0;
}