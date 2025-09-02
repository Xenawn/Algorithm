#include <bits/stdc++.h>
using namespace std;

long long d[101];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	for (int i = 4; i < 101; i++) {
		d[i] = d[i - 2] + d[i - 3];
	}

	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;

		cout << d[num] << '\n';
	}
}