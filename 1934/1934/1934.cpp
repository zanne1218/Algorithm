#include <iostream>

using namespace std;

int main() {
	int t, a, b, min;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		min = (a < b) ? a : b;
		while (min) {
			if (a % min == 0 && b % min == 0) {
				cout << min * (a / min) * (b / min) << "\n";
				break;
			}
			min--;
		}
	}
	return 0;
}