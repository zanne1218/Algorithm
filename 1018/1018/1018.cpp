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
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i % 2 == 0 && j % 2 == 0 && map[i][j] != 'W')
				cnt1++;
			if (i % 2 == 1 && j % 2 == 1 && map[i][j] != 'B')
				cnt1++;
			if (i % 2 == 0 && j % 2 == 0 && map[i][j] != 'B')
				cnt2++;
			if (i % 2 == 1 && j % 2 == 1 && map[i][j] != 'W')
				cnt2++;
		}
	}
	cout << (cnt1 < cnt2) ? cnt1 : cnt2;
	for (int i = 0; i < n; i++) {
		delete[] map[i];
	}
	delete[] map;
	return 0;
}