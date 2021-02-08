#include <iostream>

using namespace std;

int main() {
	int n, first, ring, min;
	cin >> n;
	cin >> first;
	for (int i = 1; i < n; i++) {
		cin >> ring;
		min = (first < ring) ? first : ring;
		while (min) {
			if (first % min == 0 && ring % min == 0) {
				cout << first / min << "/" << ring / min << "\n";
				break;
			}
			min--;
		}
	}
}