#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, age;
	string name;
	cin >> n;
	vector< vector<string> > arr(201);
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		arr[age].push_back(name);
	}
	for (int i = 0; i <= 200; i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (arr[i].size() != NULL) {
				cout << i << " " << arr[i][j] << "\n";
			}
		}
	}
	return 0;
}