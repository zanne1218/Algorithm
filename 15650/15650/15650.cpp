#include <iostream>

using namespace std;

void backtracking(int start, int n, int m, int cnt);

int main() {
	int n, m;
	cin >> n >> m;
	backtracking(1, n, m, 0);
	return 0;
}

void backtracking(int start, int n, int m, int cnt) {
	for(int i = start; i <= n; i++) {
		cout << i << " ";
		cnt++;
		if (cnt == m) {
			cout << "\n";
		}
		backtracking(start + 1, n, m, cnt);
		cnt--;
	}
	cnt = 0;
	return;
}