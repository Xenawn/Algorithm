#include <bits/stdc++.h>
using namespace std;

int arr[40001];
int lcm(int a, int b) {

	return a / gcd(a, b) * b;
}
int k = 0;
int solve(int m, int n, int x, int y) {

	int a = x;
	int b = y;
	if (m == x) x = 0;
	if (n == y) y = 0;
	
	int l = lcm(m, n);

	for (int i = x; i <= l; i+=m) {
		if (i == 0) continue;
		if (i % n == y) {
			return i;
		}
	}

	return -1;
}

int main() {


	int t;
	cin >> t;
	int m, n, x, y;

	while (t--) {

		fill(arr, arr + k, 0);
		k = 0;
		cin >> m >> n >> x >> y;
		cout << solve(m, n, x, y) << '\n';
	}
}