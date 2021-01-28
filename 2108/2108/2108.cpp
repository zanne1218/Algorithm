#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, num, cnt = 0, max = 0, count = 0;
	cin >> n;
	vector<int> arr;
	int * many = new int[4001]{ 0, };
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr.push_back(num);
		many[num]++;
		max = (max < many[num]) ? many[num] : max;
		cnt += num;
	}
	for (int i = 0; i <= 4000; i++) {
		if(count == 1) 
		if (many[i] == max) {
			count++;
		}
	}
	sort(arr.begin(), arr.end());

	cout << round(cnt / n) << endl;
	cout << arr[n / 2] << endl;
	cout << arr[n - 1] - arr[0] << endl;
	return 0;
}