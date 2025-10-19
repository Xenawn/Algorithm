#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[10];
int arr[10]; 
bool isUsed[10];
void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!isUsed[i]) {
			
			arr[k] = a[i];
			isUsed[i] = 1;
			func(k + 1);
			isUsed[i] = 0;
		}
	}
}
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1, a + n+1);
	func(0);
}