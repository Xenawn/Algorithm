#include <bits/stdc++.h>
using namespace std;

int freq[2000001];
int main() {

	// Counting Sort
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		freq[num + 1000000]++;
	}

	for (int i = 0; i <= 2000000; i++) {

		while (freq[i]--) cout << i-1000000 << '\n';
	}
}