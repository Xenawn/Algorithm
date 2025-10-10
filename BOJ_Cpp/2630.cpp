#include <bits/stdc++.h>
using namespace std;

int n;
int arr[129][129];
int cnt[2];
bool check(int x, int y, int n) {

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (arr[i][j] != arr[x][y]) {
				return false;
			}
		}
	}
	return true;
}
void solve(int x, int y, int z) {

	if (check(x, y, z)) {
		cnt[arr[x][y]]++;
		return;
	}

	int n = z / 2;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			solve(x + i * n, y + j * n, n);
		}
	}
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	solve(0, 0, n);

	for (int i = 0; i < 2; i++) {
		cout << cnt[i] << '\n';
	}
}