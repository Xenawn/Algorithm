#include <bits/stdc++.h>
using namespace std;

long long arr[1000001];
int n, m;
bool solve(long long x) {

	long long cur = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] <= x) continue;
		cur += (arr[i] - x);
	}
	return cur >= m;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);


	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long long st = 0;
	long long en = 0x7fffffff;
	long long mid;
	//sort(arr, arr + n);
	while (st < en) {
		mid = (st + en + 1) / 2;

		if (solve(mid)) {
			st = mid;
		}
		else en = mid - 1;
	}

	cout << st;
}