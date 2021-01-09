#include <iostream>

using namespace std;

#define SIZE 10001
int isNotPrime[SIZE];

int main() {
	for (int i = 2; i*i < SIZE; i++) {
		if (!isNotPrime[i])
			for (int j = i*i; j < SIZE; j += i)
				isNotPrime[j] = 1;
	}
	isNotPrime[1] = 1;
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int p, q, mid = n >> 1;
		for (p = q = mid; p <= n; p--, q++) {
			if (p <= 0) break;
			if (!isNotPrime[p] && !isNotPrime[q]) {
				printf("%d %d\n", p, q);
				break;
			}
		}
	}
	return 0;
}