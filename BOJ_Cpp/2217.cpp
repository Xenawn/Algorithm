#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	int k = n - 1;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, arr[n - i] * i);
	}

	cout << ans;
}