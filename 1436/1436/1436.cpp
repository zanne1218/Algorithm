#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, start = 666, cnt = 0;
	string num;
	cin >> n;
	while (true) {
		num = to_string(start);
		if (num.find("666") != -1)
			cnt++;
		if (cnt == n)
			break;
		start++;
	}
	cout << start;
	return 0;
}