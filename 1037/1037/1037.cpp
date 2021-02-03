#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int num, a;
	cin >> num;
	vector<int> arr;
	for (int i = 0; i < num; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	if (num % 2 == 0)
		cout << arr[0] * arr[num - 1];
	else
		cout << arr[num / 2] * arr[num / 2];
	return 0;
}