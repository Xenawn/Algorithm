#include <bits/stdc++.h>
using namespace std;

int arr[1001];
int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int tot = 0;
	for (int i = 0; i < n; i++) {

		int sum = 0;
		for (int j = 0; j <= i; j++) {
			sum += arr[j];
		}
		tot += sum;
	}

	cout << tot;
}