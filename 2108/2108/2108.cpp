#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, num, cnt = 0;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr.push_back(num);
		cnt += num;
	}
	sort(arr.begin(), arr.end());
	cout << round(cnt / n) << endl;
	cout << arr[n / 2] << endl;
	cout << arr[n - 1] - arr[0] << endl;
	return 0;
}