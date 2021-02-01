#include <iostream>

using namespace std;

int num[9], n, m;

void backtracking(int start) {
	if (start > m) {
		for (int i = 1; i <= m; i++)
		{
			cout << num[i] << ' ';
		}
		cout << "\n";
		return;
	}
	int cnt = 1;
	if (start != 1) cnt = num[start - 1];
	for(int i = cnt; i<= n; i++) {
		num[start] = i;
		backtracking(start + 1);
	}
}

int main() {
	cin >> n >> m;
	backtracking(1);
	return 0;
}