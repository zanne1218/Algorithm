#include <iostream>
#define SIZE 1000001
using namespace std;

int isNotPrime[SIZE];	// �Ҽ� �ƴѰ�

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 2; i * i < SIZE; i++) {
		if (!isNotPrime[i])	// �Ҽ� �ƴѰ��� 0�� ���
			for (int j = i * i; j < SIZE; j += i)
				isNotPrime[j]= 1;
	}
	isNotPrime[1] = 1;
	for (int i = m; i <= n; i++) {
		if (!isNotPrime[i])
			printf("%d\n", i);
	}
	return 0;
}