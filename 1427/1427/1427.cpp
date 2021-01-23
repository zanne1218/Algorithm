#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;
	vector<int> arr;
	while (n > 0) {
		arr.push_back(n % 10);
		n /= 10;
		cnt++;
	}
	sort(arr.begin(), arr.end());
	for (int i = cnt - 1; i >= 0; i--) {
		cout << arr[i];
	}
	return 0;
}