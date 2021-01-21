#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, num;
	cin >> n;
	int arr[10001] = { 0, };
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num]++;
	}
	for (int i = 0; i <= 10000; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}