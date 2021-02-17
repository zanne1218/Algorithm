#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 0;
	int minus = 0;
	string str;
	string tmp;
	cin >> str;

	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '\0') {
			if (minus) {
				num -= stoi(tmp);
			}
			else {
				num += stoi(tmp);
			}
			if (str[i] == '-') 
				minus = 1;
			tmp = "";
			continue;
		}
		tmp += str[i];
	}

	cout << num;
	return 0;
}