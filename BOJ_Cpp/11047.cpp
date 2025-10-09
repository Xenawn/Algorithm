#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main() {

	int n, k;

	cin >> n >> k;


	for (int i = 0; i < n; i++) {

		cin >> arr[i];
	}

	sort(arr, arr + n,greater<>());

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > k) continue;
		if (k == 0) break;
		cnt += (k / arr[i]);
		k %= arr[i];
	}

	cout << cnt;

}