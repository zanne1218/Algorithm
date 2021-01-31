#include <iostream>

using namespace std;

int num[8], n, m;
void backtracking(int start);

int main() {
	cin >> n >> m;
	backtracking(1);
	return 0;
}

void backtracking(int start) {
	if (start > m) {
		for (int i = 1; i <= m; i++) {
			cout << num[i] << ' ';
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
		num[start] = i;
		backtracking(start + 1);
	}
}