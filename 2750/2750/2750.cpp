#include <iostream>

using namespace std;

int main() {
	int n;
	int *arr;
	cin >> n;
	for (int i = 0; i< n; i++) {
		cin >> arr[i];
	}

	int tmp;
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < n - 1 - j; k++) {
			if (arr[k] > arr[k + 1]) {
				tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
			}
		}
	}
	for(int i = 0; i< n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}