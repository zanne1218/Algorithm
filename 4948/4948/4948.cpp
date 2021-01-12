#include <iostream>
#define SIZE 246913

using namespace std;

int isNotPrime[SIZE];

int main() {
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
		cin >> n;
		if (n == 0) break;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (!isNotPrime[i])
				count++;
		}
		cout << count << endl;
	}
	
	return 0;
}