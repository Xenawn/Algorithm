#include <bits/stdc++.h>
using namespace std;

// 반복문을 이용한 팩토리얼

int main() {

	int n;
	int val = 1;
	cin >> n;

	for (int i = n; i > 0; i--) {
		val *= i;
	}

	cout << val;

}