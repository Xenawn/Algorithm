#include <bits/stdc++.h>
using namespace std;

int arr[9];
int main() {
	int ct = 0;
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}


	sort(arr, arr + 9);
	int sub1, sub2;
	int tot = sum;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			tot = sum;
			tot -= arr[i];
			tot -= arr[j];

			if (tot == 100) {
				sub1 = arr[i];
				sub2 = arr[j];
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (sub1 == arr[i]) continue;
		if (sub2 == arr[i]) continue;

		cout << arr[i] << '\n';
	}
}