#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	int min = (x <= y) ? x : y;
	while (min) {
		if (x % min == 0 && y % min == 0)
			break;
		min--;
	}
	cout << min << "\n" << min * (x / min) * (y / min);
	return 0;
}