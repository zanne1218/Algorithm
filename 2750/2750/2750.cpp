#include <iostream>

using namespace std;

int main() {
	int n, tmp, cnt;
	int *arr;
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (true) {
		cnt = 0;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				cnt++;
			}
		}
		if (cnt == 0)
			break;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}