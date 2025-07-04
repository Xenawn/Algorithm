#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 1; i < n; i++) {
		int sum = i;
		int divide = i;
		while (divide) {
			sum += (divide % 10);
			divide/=10;
		}
		if (sum == n) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}