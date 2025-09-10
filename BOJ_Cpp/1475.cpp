#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int mx = 0;

	cin >> n;

	while (n) {

		int num = n % 10;
		if (num == 6 || num == 9) {
			if (arr[6] == arr[9])
				arr[num]++;
			else if (arr[6] < arr[9]) {
				arr[6]++;
			}
			else {
				arr[9]++;
			}
		}
		else {
			arr[num]++;
		}
		n /= 10;
	}

	for (int i = 0; i < 10; i++) {

		if (arr[i] > mx) {
			mx = arr[i];
		}

	}

	cout << mx;
}