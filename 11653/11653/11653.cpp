#include <iostream>
using namespace std;

int main() {
	int n, num, m;
	int k = 2;
	scanf("%d", &n);
	while (k <= n) {
		if (n == 1)
			break;
		num = 0;
		m = k;
		while (m <= n && n % m  == 0) {
			m *= k;
			num++;
		}
		if (n % (m / k) == 0)
			n /= (m / k);
		for (int i = 0; i < num; i++)
			printf("%d\n", k);
		k++;
	}

	return 0;
}