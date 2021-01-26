#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n, len;
	string word;
	cin >> n;
	vector< vector<string> > arr(51);
	for (int i = 0; i < n; i++) {
		cin >> word;
		len = word.length();
		arr[len].push_back(word);
	}
	for (int i = 0; i <= 50; i++) {
		sort(arr[i].begin(), arr[i].end());
		for (int j = 0; j < arr[i].size(); j++) {
			cout << arr[i][j] << "\n";
		}
	}
	return 0;
}