#include <bits/stdc++.h>
using namespace std;

// �ݺ����� �̿��� ���丮��

int main() {

	int n;
	int val = 1;
	cin >> n;

	for (int i = n; i > 0; i--) {
		val *= i;
	}

	cout << val;

}