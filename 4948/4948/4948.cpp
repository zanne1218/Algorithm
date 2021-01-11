#include <iostream>
#define SIZE 123456

using namespace std;

int main() {
	int isNotPrime[SIZE];
	for (int i = 2; i * i < SIZE; i++) {
		if (!isNotPrime[i]) {
			for (int j = i * i; j < SIZE; j += i) {
				isNotPrime[j] = 1;
			}
		}
	}
	isNotPrime[1] = 1;
	int n, count;
	while (true) {
		count = 0;
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (!isNotPrime[i])
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}