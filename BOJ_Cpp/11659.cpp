#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int d[100001];
int main() {

	int n;
	int m;
	cin >> n>>m;
	
	for (int i = 1; i <= n; i++) {

		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		d[i] = d[i - 1] + arr[i];
	}

	int a, b;
	d[1] = arr[1];
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		cout << d[b] - d[a-1]<<'\n';
	}
}