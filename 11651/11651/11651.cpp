#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, x, y;
	cin >> n;
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		arr.push_back(pair<int,int>(y, x));
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		cout << arr[i].second << " " << arr[i].first << "\n";
	}
	return 0;
}