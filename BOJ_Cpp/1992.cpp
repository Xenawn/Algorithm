#include <bits/stdc++.h>
using namespace std;

string arr[64];

bool check(int x, int y, int n) {

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (arr[x][y] != arr[i][j]) {
				return false;
			}
		}
	}

	return true;
}
void solve(int x, int y, int z) {
	if (check(x, y, z)) {
		cout << arr[x][y];
		return;
	}
	else {
		cout << "(";
	}
	int n = z / 2;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			solve(x+i*n, y+j*n, n);
		}
	}
	cout << ")";
}
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	solve(0, 0, n);

}