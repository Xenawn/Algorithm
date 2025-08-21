#include <bits/stdc++.h>
using namespace std;
int arr[502][502];
int d[502][502];
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> arr[i][j];
		}
	}
	d[0][0] = arr[0][0];

	for (int i = 1; i <= n; i++) {

		for (int j = 0; j <= i; j++) {
			if (j == 0) d[i][j] = d[i - 1][j] + arr[i][j];
			else if (i == j) d[i][j] = d[i - 1][j - 1] + arr[i][j];
			else {
				d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + arr[i][j];
			}
		}
	
	}

	cout << *max_element(d[n], d[n] + n);
}