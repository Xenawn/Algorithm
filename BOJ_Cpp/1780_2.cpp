#include <bits/stdc++.h>
using namespace std;

int arr[2188][2188];

int cnt[3];
int n;

bool check(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (arr[x][y] != arr[i][j])
				return false;
		}
	}
	return true;
}
void solve(int x, int y, int z) {

	if (check(x, y, z)) {
		cnt[arr[x][y] + 1] += 1;
		return;
	}
	int n = z / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			solve(x + i * n, y + j * n, n);
	}
}
int main() {



	cin >> n;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	solve(0, 0, n);

	for (int i = 0; i < 3; i++) cout << cnt[i] << '\n';
}