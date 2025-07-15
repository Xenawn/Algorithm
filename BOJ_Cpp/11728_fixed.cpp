#include <bits/stdc++.h>
using namespace std;

int arr[1000001];
int brr[1000001];
int crr[1000001];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < m; j++) {
		cin >> brr[j];
	}

	int aidx = 0;
	int bidx = 0;
	for (int i = 0; i < n + m; i++) {

		if (aidx == n) { crr[i] = brr[bidx]; bidx++; }
		else if (bidx == m) { crr[i] = arr[aidx]; aidx++; }
		else if (arr[aidx] <= brr[bidx])crr[i] = arr[aidx++];
		else crr[i] = brr[bidx++];
	}

	for (int i = 0; i < n + m; i++) {
		cout << crr[i] << ' ';
	}
}