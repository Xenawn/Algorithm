#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int main() {

	int n, k;
	int count = 1;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {

		if (n % i == 0) { arr[count++] = i; }
		
	}
	cout << arr[k];
}