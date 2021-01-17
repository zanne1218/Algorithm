#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;
	int *x, *y;
	cin >> n;
	x = new int[n];
	y = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++) {
		cnt = 0;
		for (int j = 0; j < n; j++) {
			if ((x[i] < x[j]) && (y[i] < y[j])) {
				cnt++;
			}
		}
		cout << 1 + cnt << ' ';
	}
	return 0;
}