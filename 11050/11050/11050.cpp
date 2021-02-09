#include <iostream>

using namespace std;

int main() {
	int n, k, num;
	cin >> n >> k;
	num = k;
	for (int i = 1; i < k; i++) {
		n *= (n - i);
	}
	for (int i = 1; i < k; i++) {
		num *= (k - i);
	}
	cout << n / num;
	return 0;
}