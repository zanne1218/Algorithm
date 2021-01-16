#include <iostream>

using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= 1000000; i++) {
		if ((i + i/1000000 + i/100000%10 + i/10000%10 + i/1000%10 + i/100%10 + i/10%10 + i%10) == n) {
			cout << i;
			count++;
			break;
		}
	}
	if(count == 0)
		cout << 0;
	return 0;
}